#include "symbol.h"
#include <stdio.h>
#include <stdlib.h> // For malloc, free
#include <string.h>

void init_SymbolTable(struct SymbolTable *table) {
  table->size = 0;
  table->capacity = 10; // Initial capacity
  table->items = (struct SymbolTableItem *)malloc(
      table->capacity * sizeof(struct SymbolTableItem)); // Allocate memory
  if (!table->items) {
    exit(1);
  }
}

// Function to initialize a SymbolTableItem
void init_SymbolTableItem(struct SymbolTableItem *item, const char *name,
                          enum TYPE dtype, int line_no) {
  strncpy(item->name, name, sizeof(item->name) - 1);
  item->name[sizeof(item->name) - 1] = '\0'; // Ensure null termination
  item->dtype = dtype;
}

// Function to add an item to the SymbolTable
int addToTable(struct SymbolTable *table, const char *name, enum TYPE type,
               int line_no) {
  if (table->size == table->capacity) {
    // Resize the array if necessary
    table->capacity *= 2;
    table->items = (struct SymbolTableItem *)realloc(
        table->items, table->capacity * sizeof(struct SymbolTableItem));
    if (!table->items) {
      // Handle memory allocation failure
      exit(1);
    }
  }
  for (int i = 0; i < table->size; i++) {
    if (strcmp(table->items[i].name, name) == 0) {
      fprintf(stderr, "%c has already beeen defined.\n", *table->items[i].name);
      return -1;
    }
  }
  init_SymbolTableItem(&table->items[table->size], name, type,
                       line_no); // Initialize the new item
  table->size++;
  return table->size;
}

// Function to retrieve an item from the SymbolTable
struct SymbolTableItem *getItem(struct SymbolTable *table, const char *name) {
  for (size_t i = table->size; i > 0; i--) {
    if (strcmp(table->items[i - 1].name, name) == 0) {
      return &table->items[i - 1]; // Found the item
    }
  }
  return NULL; // Item not found
}
int exists(struct SymbolTable *table, const char *name) {
  for (int i = 0; i < table->size; i++) {
    if (strcmp(name, table->items[i].name)) {
      return i;
    }
  }
  return 0;
}
void removeItem(struct SymbolTable *table, const char *name) {
  int i = exists(table, name);
  strcpy(table->items[i].name, "\0");
}
