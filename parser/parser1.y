%{
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
void yyerror(char *);
int yylex();
int addtoken(char *s,char*token_value);
%}

%union {
    int intval;
    float floatval;
    char * stringval;
}

%token INTEGER
%token DOUBLE 
%token STRING_VALUE BOOL_VALUE
%token INT FLOAT CHAR BOOLEAN STRING VECTOR CLUSTER VOID
%token BODY BASIC FORCE IF ELSE CHECK_UNTIL BREAK CONTINUE FIX USE HARDWARE
%token GPU CPU OS RETURN TRY CATCH TYPEOF CLASS EXTENDS INHERITS HIDDEN DEG
%token ADD_OP SUB_OP DIV_OP MULT_OP POW_OP MOD_OP ABS_OP COMP_ASSIGN_DIV
%token COMP_ASSIGN_SUBTRACT COMP_ASSIGN_MUL LESS_THAN LESS_THAN_EQ
%token GREAT_THAN GREAT_THAN_EQ VAR ASSIGN COMP_ASSIGN_ADD EOL LEFT_PAREN  
%token RIGHT_PAREN  LEFT_CURLY_BRACE RIGHT_CURLY_BRACE LEFT_BRACE RIGHT_BRACE
%token MAIN SINGLE_LINE_COMMENT MULTI_LINE_COMMENT CONST MASS SEMICOLON COMMA


%%
// The starting rule for parsing declarations
statements:
      statements statement SEMICOLON {printf("Hello I am list of statement");}  // Recursively match statements ending with a semicolon
    | statement  SEMICOLON        {printf("Hello I am list of statement");}     // Single statement followed by semicolon
    ;

statement:
      declaration {printf("Declaration\n");}
    | assignment  {printf("Assignment\n");}
    ;

declaration:
      INT var_list   {printf("Declaration varlist\n");}                 // Declaration with type 'int'
      |FLOAT var_list
      |VECTOR var_list
      |BOOLEAN var_list
      |CHAR var_list
      |STRING var_list {printf("Declaration varlist\n");}
      |CLUSTER var_list
    ;
VEC_DATA_TYPES: FLOAT |INTEGER |VAR;
var_list:
      VAR                             // Single variable
    | VAR COMMA var_list {printf("VAR COMMA var_list\n");}             // Multiple variables separated by commas
    | VAR ASSIGN INTEGER {printf("VAR ASSIGN INTEGER\n");}             // Variable initialized with an integer value
    | VAR ASSIGN STRING_VALUE {printf("VAR ASSIGN STRING_VALUE\n");}
    | VAR ASSIGN INTEGER COMMA var_list {printf("VAR ASSIGN INTEGER COMMA var_list\n");} // Initialized variable followed by others
    | VAR LEFT_BRACE INTEGER RIGHT_BRACE {printf("Array Declaration\n");}  // Array declaration
    | VAR LEFT_BRACE INTEGER RIGHT_BRACE COMMA var_list {printf("Array and Variables Declaration\n");} // Array and variable list
    | VAR LEFT_BRACE INTEGER RIGHT_BRACE ASSIGN INTEGER {printf("Array Declaration with Initialization\n");} // Array initialized
    | VAR ASSIGN LESS_THAN VEC_DATA_TYPES COMMA VEC_DATA_TYPES GREAT_THAN
    | VAR ASSIGN LESS_THAN VEC_DATA_TYPES COMMA VEC_DATA_TYPES GREAT_THAN COMMA var_list

    ;

assignment:
      VAR ASSIGN INTEGER {printf("VAR ASSIGN INTEGER\n");}  
    | VAR ASSIGN STRING_VALUE             // Simple assignment statement
     
    ;

%%

void yyerror(char *s) {
  printf("%s\n", s);
}

int main() {
    yyparse();
}
