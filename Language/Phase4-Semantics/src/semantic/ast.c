#include "ast.h"
#include "symbol.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int no_errors = 0;
void init_cmpndStatement(struct CmpndStatement *stmt) {

  stmt->capacity = 1;
  stmt->ptr = malloc(1 * sizeof(struct CmpndStatement *));
  stmt->size = 0;
}

void add_to_cmpnd_Statement(struct CmpndStatement *stmt,
                            struct CmpndStatementNode *node) {
  if (stmt->size >= stmt->capacity) {
    stmt->capacity *= 2;
    stmt->ptr =
        realloc(stmt->ptr, stmt->capacity * sizeof(struct CmpndStatementNode));
    if (stmt->ptr == NULL) {
      fprintf(stderr,
              "Memory allocation failed during resize for CmpndStatement\n");
      exit(1);
    }
  }

  /*printf("insdie add to CpmD Function\n");*/
  stmt->ptr[stmt->size] = node;
  stmt->size++;
}

struct CONDITIONAL_NODE *new_con_node(struct IF_NODE *if_node,
                                      struct ELSE_NODE *else_node,
                                      enum NODE_TYPE type) {
  struct CONDITIONAL_NODE *con_node =
      (struct CONDITIONAL_NODE *)malloc(sizeof(struct CONDITIONAL_NODE));
  if (con_node == NULL) {
    fprintf(stderr, "Memory allocation failed for CON_NODE\n");
    exit(1);
  }
  con_node->if_node = if_node;
  con_node->base.node_type = type;
  if (type == NODE_TYPE_COND_IF_ELSE) {
    con_node->else_node = else_node;
  }
  return con_node;
}
struct IF_NODE *new_if_node(struct CmpndStatement *stmt, struct EXP_NODE *exp,
                            int line_no) {
  struct IF_NODE *if_node = (struct IF_NODE *)malloc(sizeof(struct IF_NODE));
  if (if_node == NULL) {
    fprintf(stderr, "Memory allocation failed for ConstNode\n");
    exit(1);
  }
  if_node->base.node_type = NODE_TYPE_IF;

  if_node->stmt = stmt;
  if_node->bool_exp = exp;
  if_node->base.line_no = line_no;
  return if_node;
}
struct ELSE_NODE *new_else_node(struct CmpndStatement *stmt, int line_no) {

  struct ELSE_NODE *else_node =
      (struct ELSE_NODE *)malloc(sizeof(struct ELSE_NODE));
  if (else_node == NULL) {
    fprintf(stderr, "Memory allocation failed for ConstNode\n");
    exit(1);
  }
  else_node->base.node_type = NODE_TYPE_ELSE;
  else_node->stmt = stmt;
  else_node->base.line_no = line_no;
  return else_node;
}

struct VariableNode *new_VariableNode(const char *name, int line_no) {
  struct VariableNode *varNode =
      (struct VariableNode *)malloc(sizeof(struct VariableNode));
  if (varNode == NULL) {
    fprintf(stderr, "Memory allocation failed for ConstNode\n");
    exit(1);
  }
  strcpy(varNode->name, name);
  varNode->base.node_type = NODE_TYPE_VARIABLE;
  varNode->base.line_no = line_no;
  return varNode;
}
struct ConstNode *new_ConstNode(union value val, int line_no, enum TYPE type) {
  struct ConstNode *constNode =
      (struct ConstNode *)malloc(sizeof(struct ConstNode));
  if (constNode == NULL) {
    fprintf(stderr, "Memory allocation failed for ConstNode\n");
    exit(1);
  }
  constNode->base.node_type = NODE_TYPE_CONST;
  constNode->type = type;
  constNode->val = val;
  constNode->base.line_no = line_no;
  return constNode;
}

// Constructor for EXP_NODE
struct EXP_NODE *new_EXP_NODE(enum OPERAND oprnd, void *lhs, void *rhs,
                              int line_no) {
  struct EXP_NODE *expNode = (struct EXP_NODE *)malloc(sizeof(struct EXP_NODE));
  /*printf("%d", oprnd);*/
  if (expNode == NULL) {
    fprintf(stderr, "Memory allocation failed for EXP_NODE\n");
    exit(1);
  }

  expNode->base.node_type = NODE_TYPE_EXP;
  expNode->oprnd = oprnd;
  expNode->lhs = lhs;
  expNode->rhs = rhs;
  expNode->base.line_no = line_no;
  return expNode;
}

// Constructor for DECL_NODE
struct DECL_NODE *new_DECL_NODE(enum TYPE type, char **list_of_vars,
                                int line_no) {

  struct DECL_NODE *declNode =
      (struct DECL_NODE *)malloc(sizeof(struct DECL_NODE));
  /*printf("Inside New DECL_NODE %s:\n", type_to_string(type));*/
  if (declNode == NULL) {
    fprintf(stderr, "Memory allocation failed for DECL_NODE\n");
    exit(1);
  }

  declNode->base.node_type = NODE_TYPE_DECL;
  declNode->type = type;
  declNode->list_of_vars = list_of_vars;
  declNode->base.line_no = line_no;
  return declNode;
}

// Constructor for ASSIGN_NODE
struct ASSIGN_NODE *new_ASSIGN_NODE(enum OPERAND op, struct VariableNode *lhs,
                                    void *rhs, int line_no) {
  struct ASSIGN_NODE *assignNode =
      (struct ASSIGN_NODE *)malloc(sizeof(struct ASSIGN_NODE));
  if (assignNode == NULL) {
    fprintf(stderr, "Memory allocation failed for ASSIGN_NODE\n");
    exit(1);
  }
  assignNode->base.node_type = NODE_TYPE_ASSIGN;
  assignNode->op = op;
  assignNode->lhs = lhs;
  assignNode->rhs = rhs;
  assignNode->base.line_no = line_no;
  return assignNode;
}

struct INCLUDE_NODE *new_INCLUDE_NODE(char *lib_name) {
  struct INCLUDE_NODE *includeNode =
      (struct INCLUDE_NODE *)malloc(sizeof(struct INCLUDE_NODE));
  if (includeNode == NULL) {
    fprintf(stderr, "Memory allocation failed for INCLUDE_NODE\n");
    exit(1);
  }
  strncpy(includeNode->lib_name, lib_name, sizeof(includeNode->lib_name) - 1);
  includeNode->lib_name[sizeof(includeNode->lib_name) - 1] = '\0';
  includeNode->base.node_type = NODE_TYPE_INCLUDE;
  return includeNode;
}
struct CONSOLE_NODE *new_CONSOLE_NODE(struct EXP_NODE *expNode) {
  struct CONSOLE_NODE *ConstNode =
      (struct CONSOLE_NODE *)malloc(sizeof(struct CONSOLE_NODE));
  if (ConstNode == NULL) {
    fprintf(stderr, "Memory allocation failed for INCLUDE_NODE\n");
    exit(1);
  }
  ConstNode->base.node_type = NODE_TYPE_CONSOLE;
  ConstNode->expNode = expNode;
  return ConstNode;
}
struct Connect_to_NODE *new_Connect_to_NODE(struct VariableNode *lhs,
                                            struct VariableNode *rhs,
                                            int line_no) {
  struct Connect_to_NODE *node =
      (struct Connect_to_NODE *)malloc(sizeof(struct Connect_to_NODE));
  if (node == NULL) {
    fprintf(stderr, "Memory allocation failed for ASSIGN_NODE\n");
    exit(1);
  }
  node->base.node_type = NODE_TYPE_CONNECT_TO;
  node->lhs = lhs;
  node->rhs = rhs;
  node->base.line_no = line_no;
  return node;
}

void free_cmpndStatement(struct CmpndStatement *stmt) {
  for (int i = 0; i < stmt->size; i++) {

    free_node(stmt->ptr[i]->ptr);
  }
}
void free_node(void *ptr) {
  if (ptr == NULL) {
    return; // Early return if the pointer is NULL
  }
  struct Node *node = (struct Node *)ptr; // Cast to the base Node type
  switch (node->node_type) {
  case NODE_TYPE_VARIABLE: {
    struct VariableNode *var_node = (struct VariableNode *)node;
    free_VariableNode(var_node);
    break;
  }
  case NODE_TYPE_CONST: {
    struct ConstNode *const_node = (struct ConstNode *)node;
    free_ConstNode(const_node);
    break;
  }
  case NODE_TYPE_EXP: {
    struct EXP_NODE *exp_node = (struct EXP_NODE *)node;
    free_EXP_NODE(exp_node);
    break;
  }
  case NODE_TYPE_DECL: {
    struct DECL_NODE *decl_node = (struct DECL_NODE *)node;
    free_DECL_NODE(decl_node);
    break;
  }
  case NODE_TYPE_ASSIGN: {
    struct ASSIGN_NODE *assign_node = (struct ASSIGN_NODE *)node;
    free_ASSIGN_NODE(assign_node);
    break;
  }
  /*}*/
  /*case NODE_TYPE_INCLUDE: {*/
  /*  struct INCLUDE_NODE *include_node = (struct INCLUDE_NODE *)node;*/
  /*  free_INCLUDE_NODE(include_node);*/
  /*  break;*/
  /*}*/
  /*case NODE_TYPE_CONSOLE: {*/
  /*  struct CONSOLE_NODE *console_node = (struct CONSOLE_NODE *)node;*/
  /*  free_CONSOLE_NODE(console_node);*/
  /*  break;*/
  /*}*/
  /*case NODE_TYPE_CONNECT_TO: {*/
  /*  struct Connect_to_NODE *connect_to_node = (struct Connect_to_NODE
   * *)node;*/
  /*  free_Connect_to_NODE(connect_to_node);*/
  /*  break;*/
  /*}*/
  default:
    /*fprintf(stderr, "Unknown node type!%s\n",*/
    /*node_type_to_string(node->node_type));*/
    break;
  }

  free(node); // Finally free the base node itself}
}
void free_EXP_NODE(struct EXP_NODE *node) {
  if (node->lhs != NULL) {
    free_node(node->lhs);
  }
  if (node->rhs != NULL) {
    free_node(node->rhs);
  }
}

void free_ConstNode(struct ConstNode *node) {}
void free_ASSIGN_NODE(struct ASSIGN_NODE *node) {
  if (node->lhs != NULL) {
    free_VariableNode(node->lhs);
  }
  if (node->rhs != NULL) {
    free_EXP_NODE(node->rhs);
  }
}
void free_DECL_NODE(struct DECL_NODE *node) {
  if (node->list_of_vars) {
    for (size_t i = 0; strcmp(node->list_of_vars[i], "\0"); ++i) {
      free(node->list_of_vars[i]);
    }
    free(node->list_of_vars);
  }
}
void free_VariableNode(struct VariableNode *node) {

  memset(node->name, 0, sizeof(node->name));
}
void free_INCLUDE_NODE(struct INCLUDE_NODE *node) { free(node->lib_name); }
void free_CONSOLE_NODE(struct CONSOLE_NODE *node) {
  free_EXP_NODE(node->expNode);
};
void free_Connect_to_NODE(struct Connect_to_NODE *node) {
  if (node->lhs != NULL) {
    free_VariableNode(node->lhs);
  }
  if (node->rhs != NULL) {
    free_EXP_NODE(node->rhs);
  }
}
void semanticCheck(struct CmpndStatement *stmt, struct SymbolTable *table) {
  for (int i = 0; i < stmt->size; i++) {
    /*printf("statement NO:%d \n", i);*/
    semantic_check(table, stmt->ptr[i]->ptr);
  }
}

void semantic_check(struct SymbolTable *table, void *ptr) {
  if (ptr == NULL) {
    return; // Early return if the pointer is NULL
  }
  struct Node *node = (struct Node *)ptr; // Cast to the base Node type

  /*printf("Node Type is : %s\n", node_type_to_string(node->node_type));*/
  switch (node->node_type) {
  case NODE_TYPE_EXP: {
    struct EXP_NODE *exp_node = (struct EXP_NODE *)node;
    exp_semantic(table, exp_node);
    break;
  }
  case NODE_TYPE_DECL: {
    struct DECL_NODE *decl_node = (struct DECL_NODE *)node;
    decl_semantic(table, decl_node);
    break;
  }
  case NODE_TYPE_VARIABLE: {
    struct VariableNode *assign_node = (struct VariableNode *)node;
    variable_semantic(table, assign_node);
    break;
  }
  case NODE_TYPE_ASSIGN: {
    struct ASSIGN_NODE *assign_node = (struct ASSIGN_NODE *)node;
    assign_semantic(table, assign_node);
    break;
  }
  case NODE_TYPE_CONSOLE: {
    struct CONSOLE_NODE *console_node = (struct CONSOLE_NODE *)node;
    console_semantic(table, console_node);
    break;
  }
  case NODE_TYPE_CONNECT_TO: {
    struct Connect_to_NODE *connect_to_node = (struct Connect_to_NODE *)node;
    connectTo_semantic(table, connect_to_node);
    break;
  }

  default:
    /*fprintf(stderr, "Unknown node type!%d\n", node->node_type);*/
    break;
  }
}
void exp_semantic(struct SymbolTable *table, struct EXP_NODE *ptr) {

  if (ptr->rhs != NULL) {
    semantic_check(table, ptr->rhs);
  }
  if (ptr->lhs != NULL) {
    semantic_check(table, ptr->lhs);
  }
  enum TYPE resType;
  resType = getType(table, ptr);
}

void assign_semantic(struct SymbolTable *table, struct ASSIGN_NODE *ptr) {

  enum TYPE lhs_type = getType(table, ptr->lhs);
  enum TYPE rhs_type = getType(table, ptr->rhs);
  enum TYPE resType = typeResolution(lhs_type, rhs_type);
  if (resType == -1) {
    no_errors++;
    fprintf(stderr,
            "Error:(Line: %d) Cannot assign %s to variable %s with type %s\n",
            ptr->base.line_no, type_to_string(rhs_type), ptr->lhs->name,
            type_to_string(lhs_type));
    /**type = -1;*/
  }
}
void decl_semantic(struct SymbolTable *table, struct DECL_NODE *ptr) {

  struct SymbolTableItem *item =
      (struct SymbolTableItem *)malloc(sizeof(struct SymbolTableItem));
  size_t i = 0;
  add_dec_node(table, *ptr);
  /*printf("Here in  decl_semantic\n");*/
  /*while (strcmp(ptr->list_of_vars[i], "\0")) {*/
  /*  item = getItem(table, ptr->list_of_vars[i]);*/
  /*  if (item != NULL) {*/
  /*    printf("Variable %s has already been defined at line : %d\n",
   * item->name,*/
  /*           item->line_no);*/
  /*  }*/
  /*  i++;*/
  /*}*/
}
void variable_semantic(struct SymbolTable *table, struct VariableNode *ptr) {
  struct SymbolTableItem *item =
      (struct SymbolTableItem *)malloc(sizeof(struct SymbolTableItem));
  item = getItem(table, ptr->name);
  if (item == NULL) {
    no_errors++;
    printf("Error (Line :%d )  Variable '%s' is used before its "
           "definition.\n",
           ptr->base.line_no, ptr->name);
  }
}

void include_semantic(struct SymbolTable *table, struct INCLUDE_NODE *ptr) {

  if (strcmp(ptr->lib_name, "motion")) {
    printf("Error! Library Resolution Failed.\n");
  }
}

void console_semantic(struct SymbolTable *table, struct CONSOLE_NODE *ptr) {
  semantic_check(table, ptr->expNode);
}

void connectTo_semantic(struct SymbolTable *table,
                        struct Connect_to_NODE *node) {
  enum TYPE lhs_type = getType(table, node->lhs);
  enum TYPE rhs_type = getType(table, node->rhs);
  enum TYPE resType = typeResolution(lhs_type, rhs_type);
  if (resType == -1) {
    no_errors++;
    fprintf(stderr,
            "Error:(Line:%d) Cannot connect %s to variable %s with type %s\n",
            node->base.line_no, type_to_string(rhs_type), node->lhs->name,
            type_to_string(lhs_type));
    /**type = -1;*/
  }
}
void add_dec_node(struct SymbolTable *symtable, struct DECL_NODE node) {
  char **temp = node.list_of_vars;
  int i = 0;
  while (strcmp(temp[i], "\0") != 0) {
    int index = addToTable(symtable, temp[i], node.type, node.base.line_no);
    if (index == -1) {
      no_errors++;
    }
    i = i + 1;
  }
}

enum TYPE getType(struct SymbolTable *table, void *ptr) {

  struct Node *nodePtr = (struct Node *)ptr;

  switch (nodePtr->node_type) {
  case NODE_TYPE_CONST: {
    struct ConstNode *nodePtr = (struct ConstNode *)ptr;
    /*printf("%s", type_to_string(nodePtr->type));*/
    return nodePtr->type;
  }
  case NODE_TYPE_VARIABLE: {
    struct VariableNode *varPtr = (struct VariableNode *)ptr;
    struct SymbolTableItem *item =
        (struct SymbolTableItem *)malloc(sizeof(struct SymbolTableItem));
    item = getItem(table, varPtr->name);
    /*printf("After GetItem");*/
    if (item == NULL) {
      return -2;
    } else {
      return item->dtype;
    }
  }
  case NODE_TYPE_EXP: {
    struct EXP_NODE *expPtr = (struct EXP_NODE *)ptr;
    enum TYPE lhs_type;
    enum TYPE rhs_type;
    if (expPtr->rhs != NULL) {
      rhs_type = getType(table, expPtr->rhs);
    }
    if (expPtr->lhs != NULL) {

      lhs_type = getType(table, expPtr->lhs);
    }
    if (lhs_type == -2 || lhs_type == -2) {
      return -2;
    }
    enum TYPE resType = typeResolution(lhs_type, rhs_type);
    if (resType == -1) {

      no_errors++;
      fprintf(stderr, "%s between %s type and %s type is not allowed.\n",
              operand_to_string(expPtr->oprnd), type_to_string(lhs_type),
              type_to_string(rhs_type));
      /**type = -1;*/
      return -1;
      break;
    }
    return resType;
  }
  }
}

enum TYPE typeResolution(enum TYPE type1, enum TYPE type2) {
  if ((type1 == INTEGER_ENUM && type2 == DOUBLE_ENUM) ||
      (type1 == DOUBLE_ENUM && type2 == INTEGER_ENUM) ||
      (type1 == DOUBLE_ENUM && type2 == DOUBLE_ENUM)) {
    return DOUBLE_ENUM;
  } else if (type1 == INTEGER_ENUM && type2 == INTEGER_ENUM)
    return INTEGER_ENUM;
  else if (type1 == CHAR_ENUM && type2 == CHAR_ENUM) {
    return CHAR_ENUM;
  }
  return -1;
} // Function to convert TYPE enum to string
const char *type_to_string(enum TYPE t) {
  switch (t) {
  case INTEGER_ENUM:
    return "int";
  case DOUBLE_ENUM:
    return "double";
  case CHAR_ENUM:
    return "char";
  default:
    return "Unknown TYPE";
  }
}

// Function to convert operand enum to string
const char *operand_to_string(enum OPERAND op) {
  switch (op) {
  case ADD:
    return "+";
  case SUB:
    return "-";
  case MUL:
    return "*";
  case DIV:
    return "/";
  case POW:
    return "pow()";
  case ASSIGN_ENUM:
    return "=";
  case ADD_CMPND_ENUM:
    return "+=";
  case SUB_CMPND_ENUM:
    return "SUB_CMPND_ENUM";
  case DIV_CMPND_ENUM:
    return "/=";
  case MUL_CMPND_ENUM:
    return "*=";
  case GREATER_THAN_ENUM:
    return ">";
  case LESS_THAN_ENUM:
    return "<";
  case NOT_EQUAL_TO_ENUM:
    return "!=";
  case EQUAL_TO_ENUM:
    return "==";
  case LESS_THAN_EQUAL_TO_ENUM:
    return "<=";
  case GREATER_THAN_EQUAL_TO_ENUM:
    return ">=";
  default:
    return "Unknown operand";
  }
}

// Function to convert node_type enum to string
const char *node_type_to_string(enum NODE_TYPE nt) {
  switch (nt) {
  case NODE_TYPE_VARIABLE:
    return "NODE_TYPE_VARIABLE";
  case NODE_TYPE_CONST:
    return "NODE_TYPE_CONST";
  case NODE_TYPE_EXP:
    return "NODE_TYPE_EXP";
  case NODE_TYPE_DECL:
    return "NODE_TYPE_DECL";
  case NODE_TYPE_ASSIGN:
    return "NODE_TYPE_ASSIGN";
  default:
    return "Unknown node_type";
  }
}

void transpile_cmpd(struct SymbolTable *table, struct CmpndStatement *stmt) {
  printf("int main() {\n");
  if (no_errors == 0) {
    for (int i = 0; i < stmt->size; i++) {
      /*printf("statement NO:%d \n", i);*/
      transpile_stmt(table, stmt->ptr[i]->ptr);
      printf(";\n");
    }
    printf("}\n");
  }
}

void transpile_stmt(struct SymbolTable *table, void *ptr) {

  if (ptr == NULL) {
    return; // Early return if the pointer is NULL
  }
  struct Node *node = (struct Node *)ptr; // Cast to the base Node type
  /*printf("Node Type is : %s\n", node_type_to_string(node->node_type));*/
  switch (node->node_type) {
  case NODE_TYPE_EXP: {
    struct EXP_NODE *exp_node = (struct EXP_NODE *)node;
    transpile_exp(table, *exp_node);
    break;
  }
  case NODE_TYPE_DECL: {
    struct DECL_NODE *decl_node = (struct DECL_NODE *)node;
    transpile_decl(table, *decl_node);
    /*decl_semantic(table, decl_node);*/
    break;
  }
    printf("here");
  case NODE_TYPE_VARIABLE: {
    struct VariableNode *varNode = (struct VariableNode *)node;
    transpile_var(table, *varNode);
    break;
  }
  case NODE_TYPE_ASSIGN: {
    struct ASSIGN_NODE *assign_node = (struct ASSIGN_NODE *)node;
    transpile_assign(table, *assign_node);
    break;
  }
  case NODE_TYPE_CONST: {
    struct ConstNode *const_node = (struct ConstNode *)node;
    transpile_const(table, *const_node);
    break;
  }
  /*case NODE_TYPE_COND_IF: {*/
  /*  struct CONDITIONAL_NODE *con_node = (struct CONDITIONAL_NODE *)node;*/
  /*  transpile_stmt(table, con_node->if_node);*/
  /*  break;*/
  /*}*/
  /*case NODE_TYPE_COND_IF_ELSE: {*/
  /*  struct CONDITIONAL_NODE *con_node = (struct CONDITIONAL_NODE *)node;*/
  /*  transpile_stmt(table, con_node->if_node);*/
  /*  transpile_stmt(table, con_node->else_node);*/
  /*  break;*/
  /*}*/
  /*case NODE_TYPE_IF: {*/
  /*  struct IF_NODE *if_node = (struct IF_NODE *)node;*/
  /*  transpile_if(table, *if_node);*/
  /*  break;*/
  /*}*/
  /*case NODE_TYPE_INCLUDE: {*/
  /*  struct INCLUDE_NODE *includeNode = (struct INCLUDE_NODE *)node;*/
  /*  transpile_include(*includeNode);*/
  /*  break;*/
  /*}*/
  case NODE_TYPE_CONSOLE: {
    struct CONSOLE_NODE *console_node = (struct CONSOLE_NODE *)node;
    transpile_console(table, *console_node);
    break;
  }
  /*case NODE_TYPE_CONNECT_TO: {*/
  /*  struct Connect_to_NODE *connect_to_node = (struct Connect_to_NODE
   * *)node;*/
  /*  transpile_connectTo(connect_to_node);*/
  /*  break;*/
  /*}*/
  default:
    /*fprintf(stderr, "Unknown node type!%d\n", node->node_type);*/
    break;
  }
}

void transpile_decl(struct SymbolTable *table, struct DECL_NODE declNode) {
  printf("%s ", type_to_string(declNode.type));

  printf("%s ", declNode.list_of_vars[0]);
  for (int i = 1; strcmp(declNode.list_of_vars[i], "\0"); i++) {
    printf(",%s ", declNode.list_of_vars[i]);
  }
}
void transpile_exp(struct SymbolTable *table, struct EXP_NODE expNode) {
  printf("(");
  if (expNode.lhs != NULL) {
    transpile_stmt(table, expNode.lhs);
  }
  printf("%s", operand_to_string(expNode.oprnd));
  if (expNode.rhs != NULL) {
    transpile_stmt(table, expNode.rhs);
  }

  printf(")");
}

void transpile_var(struct SymbolTable *table, struct VariableNode expNode) {
  printf("%s", expNode.name);
}

void transpile_const(struct SymbolTable *table, struct ConstNode constNode) {
  switch (constNode.type) {
  case INTEGER_ENUM: {
    printf("%d", constNode.val.intval);
    break;
  }
  case DOUBLE_ENUM: {
    printf("%f", constNode.val.floatval);
    break;
  }
  }
}

void transpile_assign(struct SymbolTable *table, struct ASSIGN_NODE expNode) {
  printf("%s", expNode.lhs->name);
  printf("=");
  transpile_stmt(table, expNode.rhs);
}
void transpile_if(struct SymbolTable *table, struct IF_NODE if_node) {
  printf("if (");
  transpile_stmt(table, if_node.bool_exp);
  printf(")");
  transpile_cmpd(table, if_node.stmt);
}

void transpile_include(struct SymbolTable *table,
                       struct INCLUDE_NODE includeNode) {
  printf("#include<%s>", includeNode.lib_name);
}

void transpile_console(struct SymbolTable *table,
                       struct CONSOLE_NODE consoleNode) {
  printf("printf(");
  transpile_stmt(table, consoleNode.expNode);
  printf(")");
}

void transpile_connectTo(struct Connect_to_NODE *node) {

  // make call to prewritten function
}
