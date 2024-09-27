%{ #include <stdio.h>
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
%token COMP_ASSIGN_SUBTRACT COMP_ASSIGN_MUL LESS_THAN LESS_THAN_EQ AND_OP OR_OP NOT_OP 
%token GREAT_THAN GREAT_THAN_EQ VAR ASSIGN COMP_ASSIGN_ADD EOL LEFT_PAREN   EQUAL_TO NOT_EQUAL_TO
%token RIGHT_PAREN  LEFT_CURLY_BRACE RIGHT_CURLY_BRACE LEFT_BRACE RIGHT_BRACE
%token MAIN SINGLE_LINE_COMMENT MULTI_LINE_COMMENT CONST MASS ELSE_IF  


%left OR_OP
%left AND_OP
%left LESS_THAN LESS_THAN_EQ GREAT_THAN GREAT_THAN_EQ EQUAL_TO NOT_EQUAL_TO
%left ADD_OP SUB_OP
%left MULT_OP DIV_OP
%right POW_OP

%%

CMPND_STATEMENT : CMPND_STATEMENT STATEMENT
                |
                ;
STATEMENT: CONDITIONAL_STATEMENT EOL 
         | EXPRESSION EOL {printf("Statement here\n");} 
         ;
          


CONDITIONAL_STATEMENT:IF_STATEMENT {printf("If statement.\n");}
                     |IF_STATEMENT ELSE_STATEMENT {printf("If  ELSE statement.\n");}
                     | IF_STATEMENT ELSEIF_STATEMENT ELSE_STATEMENT {printf("If  ELSEIF ELSE statement.\n");};

IF_STATEMENT:IF LEFT_PAREN BOOLEAN_EXP RIGHT_PAREN LEFT_CURLY_BRACE CMPND_STATEMENT RIGHT_CURLY_BRACE ;

ELSE_STATEMENT: ELSE LEFT_CURLY_BRACE STATEMENT RIGHT_CURLY_BRACE;

ELSEIF_STATEMENT: ELSE_IF LEFT_PAREN BOOLEAN_EXP RIGHT_PAREN LEFT_CURLY_BRACE CMPND_STATEMENT RIGHT_CURLY_BRACE;

EXPRESSION : BOOLEAN_EXP  {printf("Relations here\n");}
           ;
ARITHMETIC_EXP : ARITHMETIC_EXP ADD_OP  MUL_EXP  {printf("ARITHMETIC_EXP");}
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
                 | NOT_OP UNARY_EXPRESSION
                 | SUB_OP UNARY_EXPRESSION  
                 | PRIMARY_EXP  
                 ;
PRIMARY_EXP  : LEFT_PAREN BOOLEAN_EXP RIGHT_PAREN 
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

BOOLEAN_EXP : BOOLEAN_EXP AND_OP RELATIONAL_EXP {}
            | BOOLEAN_EXP OR_OP RELATIONAL_EXP
            | RELATIONAL_EXP 
            ;
RELATIONAL_EXP : RELATIONAL_EXP GREAT_THAN ARITHMETIC_EXP 
               | RELATIONAL_EXP GREAT_THAN_EQ ARITHMETIC_EXP 
               | RELATIONAL_EXP LESS_THAN ARITHMETIC_EXP
               | RELATIONAL_EXP LESS_THAN_EQ ARITHMETIC_EXP 
               | RELATIONAL_EXP EQUAL_TO ARITHMETIC_EXP
               | RELATIONAL_EXP NOT_EQUAL_TO ARITHMETIC_EXP
               | ARITHMETIC_EXP  
              ;
TYPE : INT
     | FLOAT
     | STRING
     | BOOLEAN
     | VECTOR 
     ;
%%

void yyerror(char *s) {
  printf("%s\n", s);
}
int main() {
yyparse();
}
