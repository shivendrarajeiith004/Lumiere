
#ifndef AST_H
#define AST_H

#include "stdlib.h"
#include "symbol.h"
#include <stddef.h> // For size_t
#include <string.h> // For strcpy and strlen
// Enumeration types

// Base Node struct (no inheritance in C)
// Forward declaration of DECL_NODE
struct Node
{
  enum NODE_TYPE node_type;
  int line_no;
};

// Struct for VariableNode
struct CmpndStatementNode
{
  void *ptr;
};
struct CmpndStatement
{
  struct CmpndStatementNode **ptr;
  size_t capacity;
  size_t size;
};
struct VariableNode
{
  struct Node base; // Base struct (composition, not inheritance)
  char name[256];   // Use a fixed-size array for the string
  union value val;
};

// Struct for ConstNode
struct ConstNode
{
  struct Node base;
  union value val;
  enum TYPE type;
};

// Struct for EXP_NODE (Expression node)
struct EXP_NODE
{
  struct Node base;
  int withParen;
  enum OPERAND oprnd;
  void *lhs;
  void *rhs;
};

// Struct for DECL_NODE (Declaration node)
struct DECL_NODE
{

  struct Node base;
  enum TYPE type;
  char **list_of_vars; // Dynamic array of strings
  // TO TRACK the number : The End is NULL:
  /*size_t num_vars;     // Keep track of the number of variables*/
};
struct ASSIGN_NODE
{
  struct Node base;
  enum OPERAND op;
  struct VariableNode *lhs;
  void *rhs;
};
struct INCLUDE_NODE
{
  struct Node base;
  char lib_name[256];
};
struct CONSOLE_NODE
{
  struct Node base;
  char *string;
};
// Function to initialize VariableNode
init_cmpndStatement(struct CmpndStatement *stmt);
void add_to_cmpnd_Statement(struct CmpndStatement *stmt,
                            struct CmpndStatementNode *ptr);
struct VariableNode *new_VariableNode(const char *name, int line_no);
struct ConstNode *new_ConstNode(union value val, int line_no, enum TYPE type);
struct EXP_NODE *new_EXP_NODE(enum OPERAND oprnd, void *lhs, void *rhs,
                              int line_no);
struct DECL_NODE *new_DECL_NODE(enum TYPE type, char **list_of_vars,
                                int line_no);
struct ASSIGN_NODE *new_ASSIGN_NODE(enum OPERAND op, struct VariableNode *lhs,
                                    void *rhs, int line_no);
struct INCLUDE_NODE *new_INCLUDE_NODE(char *lib_name);
struct CONSOLE_NODE *new_CONSOLE_NODE(char *console_string);

void free_cmpndStatement(struct CmpndStatement *stmt);
void free_node(void *ptr);
void free_VariableNode(struct VariableNode *node);
void free_ConstNode(struct ConstNode *node);
void free_EXP_NODE(struct EXP_NODE *node);
void free_DECL_NODE(struct DECL_NODE *node);
void free_ASSIGN_NODE(struct ASSIGN_NODE *node);
void free_INCLUDE_NODE(struct INCLUDE_NODE *node);
void free_CONSOLE_NODE(struct CONSOLE_NODE *node);

void semanticCheck(struct CmpndStatement *stmt, struct SymbolTable *table);
void semantic_check(struct SymbolTable *table, void *ptr);
void exp_semantic(struct SymbolTable *table, struct EXP_NODE *ptr);
void assign_semantic(struct SymbolTable *table, struct ASSIGN_NODE *ptr);
void decl_semantic(struct SymbolTable *table, struct DECL_NODE *ptr);
void variable_semantic(struct SymbolTable *table, struct VariableNode *ptr);
void include_semantic(struct INCLUDE_NODE *ptr);
void console_semantic(struct CONSOLE_NODE *ptr);
enum TYPE typeResolution(enum TYPE type1, enum TYPE type2);
void add_dec_node(struct SymbolTable *symTable, struct DECL_NODE node);

enum TYPE getType(struct SymbolTable *table, void *ptr);
const char *type_to_string(enum TYPE t);

const char *operand_to_string(enum OPERAND op);

const char *node_type_to_string(enum NODE_TYPE nt);

void transpile_cmpd(struct SymbolTable *table, struct CmpndStatement *stmt);

void transpile_stmt(struct SymbolTable *table, void *ptr);
void transpile_exp(struct SymbolTable *table, struct EXP_NODE exp);
void transpile_var(struct SymbolTable *table, struct VariableNode varNode);
void transpile_const(struct SymbolTable *table, struct ConstNode constNode);
void transpile_decl(struct SymbolTable *table, struct DECL_NODE declNode);
void transpile_assign(struct SymbolTable *table, struct ASSIGN_NODE assignNode);
void transpile_include(struct INCLUDE_NODE includeNode);
void transpile_console(struct CONSOLE_NODE consoleNode);

#endif // AST_H
       //
