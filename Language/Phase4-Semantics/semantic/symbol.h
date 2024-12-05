#ifndef SYMBOL_H
#define SYMBOL_H

#include <stddef.h> // For size_t
#include <string.h> // For strcpy and strlen
enum TYPE { INTEGER_ENUM, DOUBLE_ENUM, CHAR_ENUM };
enum OPERAND {
  ADD,
  SUB,
  MUL,
  DIV,
  POW,
  ASSIGN_ENUM,
  ADD_CMPND_ENUM,
  SUB_CMPND_ENUM,
  DIV_CMPND_ENUM,
  MUL_CMPND_ENUM,
  GREATER_THAN_ENUM,
  LESS_THAN_ENUM,
  NOT_EQUAL_TO_ENUM,
  EQUAL_TO_ENUM,
  LESS_THAN_EQUAL_TO_ENUM,
  GREATER_THAN_EQUAL_TO_ENUM
};

enum NODE_TYPE {
  NODE_TYPE_VARIABLE,
  NODE_TYPE_CONST,
  NODE_TYPE_EXP,
  NODE_TYPE_DECL,
  NODE_TYPE_ASSIGN,
  NODE_TYPE_COND_IF,
  NODE_TYPE_COND_IF_ELSE,
  NODE_TYPE_ELSE,
  NODE_TYPE_IF
}; //  Union to hold different types of values
union value {
  int intval;
  double floatval;
};

struct SymbolTableItem {
  char name[256];  // Fixed-size char array for the string
  enum TYPE dtype; // Data type
  int line_no;
};

// SymbolTable structure (replaces C++ class)
struct SymbolTable {
  struct SymbolTableItem *items; // Dynamic array of SymbolTableItem
  size_t size;                   // Current number of items in the table
  size_t capacity;               // Capacity of the dynamic array
};

// Function to initialize SymbolTable
void init_SymbolTable(struct SymbolTable *table);

// Function to add an item to the SymbolTable
int addToTable(struct SymbolTable *table, const char *name, enum TYPE type,
               int line_no);
// Function to retrieve an item from the SymbolTable
struct SymbolTableItem *getItem(struct SymbolTable *table, const char *name);

// Function to initialize a SymbolTableItem
void init_SymbolTableItem(struct SymbolTableItem *item, const char *name,
                          enum TYPE dtype, int line_no);
int exists(struct SymbolTable *table, const char *name);
void removeItem(struct SymbolTable *table, const char *name);
#endif // SYMBOL_H
