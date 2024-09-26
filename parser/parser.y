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

%token INTEGER_VALUE
%token DOUBLE_VALUE 
%token STRING_VALUE BOOL_VALUE
%token INT_TYPE FLOAT_TYPE CHAR_TYPE BOOLEAN_TYPE STRING_TYPE VECTOR_TYPE CLUSTER_TYPE VOID CONST_TYPE
%token BODY BASIC FORCE IF ELSE CHECK_UNTIL BREAK CONTINUE FIX FIX_CONSTANT USE HARDWARE
%token GPU CPU OS RETURN TRY CATCH TYPEOF CLASS EXTENDS INHERITS HIDDEN DEG
%token ADD_OP SUB_OP DIV_OP MULT_OP XOR_POW_OP MOD_OP PIPE_OP COMP_ASSIGN_DIV AND_OP OR_OP XOR_OP
%token COMP_ASSIGN_SUBTRACT COMP_ASSIGN_MUL LESS_THAN LESS_THAN_EQ 
%token GREAT_THAN GREAT_THAN_EQ IDENTIFIER ASSIGN COMP_ASSIGN_ADD EOL LEFT_PAREN  
%token RIGHT_PAREN  LEFT_CURLY_BRACE RIGHT_CURLY_BRACE LEFT_BRACE RIGHT_BRACE
%token MAIN SINGLE_LINE_COMMENT MULTI_LINE_COMMENT MASS  
%left ADD_OP SUB_OP DIV_OP MULT_OP POW_OP MOD_OP PIPE_OP COMP_ASSIGN_DIV AND_OP

%%
program:
    statements
    ;

statements:
    statements statement
    | statement
    ;

statement:
    expression EOL  {printf("Expression\n");} // TODO
    | declaration EOL {printf("Declaration\n");} // TODO
    | assignment EOL  {printf("Assignment\n");} // TODO
    | control_flow
    | function_definition
    ;
    
const_value:
    INTEGER_VALUE
    | DOUBLE_VALUE
    | STRING_VALUE
    | BOOL_VALUE
    ;

/* This is the expression part */
expression:
  cast_exp
  ;

cast_exp:
  LEFT_PAREN type RIGHT_PAREN proper_exp
  | proper_exp
  ;

proper_exp:
  arithemetic_exp
  | boolean_exp
  | IDENTIFIER
  | const_value
  ;

arithemetic_exp:
  | expression MULT_OP expression
  | expression ADD_OP expression
  | expression SUB_OP expression
  | expression MOD_OP expression
  expression DIV_OP expression
  | expression
  ; 

// this is probably unnecessary
boolean_exp:
  expression LESS_THAN expression
  | expression LESS_THAN_EQ expression
  | expression GREAT_THAN expression
  | expression GREAT_THAN_EQ expression
  | expression PIPE_OP expression
  | expression XOR_OP expression
  | expression AND_OP expression
  ;




declaration:
    type IDENTIFIER
    ;

assignment:
    IDENTIFIER ASSIGN expression
    | IDENTIFIER COMP_ASSIGN_ADD expression
    | IDENTIFIER COMP_ASSIGN_SUBTRACT expression
    | IDENTIFIER COMP_ASSIGN_MUL expression
    | IDENTIFIER COMP_ASSIGN_DIV expression
    ;

type:
    INT_TYPE
    | FLOAT_TYPE
    | CHAR_TYPE
    | BOOLEAN_TYPE
    | STRING_TYPE
    | VECTOR_TYPE
    | CLUSTER_TYPE
    | VOID
    ;

control_flow:
    IF LEFT_PAREN expression RIGHT_PAREN LEFT_CURLY_BRACE statements RIGHT_CURLY_BRACE
    | IF LEFT_PAREN expression RIGHT_PAREN LEFT_CURLY_BRACE statements RIGHT_CURLY_BRACE ELSE LEFT_CURLY_BRACE statements RIGHT_CURLY_BRACE
    | CHECK_UNTIL LEFT_PAREN expression RIGHT_PAREN LEFT_CURLY_BRACE statements RIGHT_CURLY_BRACE
    | CHECK_UNTIL LEFT_PAREN declaration EOL expression EOL assignment RIGHT_PAREN LEFT_CURLY_BRACE statements RIGHT_CURLY_BRACE
    ;

function_definition:
    type MAIN LEFT_PAREN RIGHT_PAREN LEFT_CURLY_BRACE statements RIGHT_CURLY_BRACE
    ;
%%

void yyerror(char *s) {
  printf("%s\n", s);
}
int main() {
yyparse();
}