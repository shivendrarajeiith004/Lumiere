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
%token INT FLOAT CHAR BOOLEAN STRING VECTOR CLUSTER VOID
%token BODY BASIC FORCE IF ELSE CHECK_UNTIL BREAK CONTINUE FIX USE HARDWARE
%token GPU CPU OS RETURN TRY CATCH TYPEOF CLASS EXTENDS INHERITS HIDDEN DEG
%token ADD_OP SUB_OP DIV_OP MULT_OP POW_OP MOD_OP ABS_OP COMP_ASSIGN_DIV
%token COMP_ASSIGN_SUBTRACT COMP_ASSIGN_MUL LESS_THAN LESS_THAN_EQ
%token GREAT_THAN GREAT_THAN_EQ VAR ASSIGN COMP_ASSIGN_ADD EOL LEFT_PAREN  
%token RIGHT_PAREN  LEFT_CURLY_BRACE RIGHT_CURLY_BRACE LEFT_BRACE RIGHT_BRACE
%token MAIN SINGLE_LINE_COMMENT MULTI_LINE_COMMENT CONST MASS ELSE_IF 

%%

EXPRESSION : ARITHMETIC_EXP EOL  {printf("here");}
          ;
            
ARITHMETIC_EXP : ARITHMETIC_EXP ADD_OP  MUL_EXP 
               | ARITHMETIC_EXP SUB_OP MUL_EXP 
                | MUL_EXP 
	            ;

MUL_EXP : MUL_EXP MULT_OP  POW_EXP 
        | MUL_EXP DIV_OP POW_EXP
        | POW_EXP  
        ;

POW_EXP : POW_EXP POW_OP CAST_EXP 
        | CAST_EXP 
        ;

CAST_EXP : LEFT_PAREN TYPE RIGHT_PAREN CAST_EXP  
         | UNARY_EXPRESSION
         ;
UNARY_EXPRESSION : ADD_OP  UNARY_EXPRESSION 
                 | SUB_OP UNARY_EXPRESSION  
                 | PRIMARY_EXP  
                 ;
PRIMARY_EXP  : LEFT_PAREN ARITHMETIC_EXP RIGHT_PAREN 
             | FACTOR 
             ; 
             
FACTOR :  VAR 
       | CONSTANT
       ;

CONSTANT : INTEGER_VALUE
         | DOUBLE_VALUE
         | STRING_VALUE
         | BOOL_VALUE
        ;

TYPE : INT 
     | FLOAT 
     | STRING
     | BOOLEAN
     ;


%%
/* COMPOUND_STAT : COMPOUND_STAT STAT
              ;
STAT_MAIN: CONDITIONAL_STAT EOL;
CONDITIONAL_STAT:  IF_STAT {printf("If statement.\n");}
                        |IF_STAT ELSE_STAT {printf("If  ELSE statement.\n");}
                        | IF_STAT ELSEIF_STAT ELSE_STAT {printf("If  ELSEIF ELSE statement.\n");};
IF_STAT:IF LEFT_PAREN BOOLEAN_EXP RIGHT_PAREN LEFT_CURLY_BRACE STAT RIGHT_CURLY_BRACE;
ELSE_STAT: ELSE LEFT_CURLY_BRACE STAT RIGHT_CURLY_BRACE;
ELSEIF_STAT: ELSE_IF LEFT_PAREN BOOLEAN_EXP RIGHT_PAREN LEFT_CURLY_BRACE STAT RIGHT_CURLY_BRACE;

*/

void yyerror(char *s) {
  printf("%s\n", s);
}
int main() {
yyparse();
}
