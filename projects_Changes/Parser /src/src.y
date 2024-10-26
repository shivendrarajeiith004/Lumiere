%{
#include<stdio.h>
#include<stdlib.h>
void yyerror(char *);
int yylex();
extern FILE* yyin;
extern int yylineno;
int lineno;
FILE * inputFile;
FILE* outputFile;

%}

%token VALUE ASSIGN_OPERATOR RESERVED_TYPE RESERVED_KEYWORD SEMICOLON INCLUDE INT LIBRARY 
%token FUNCTION CONSOLE VARIABLE STRING 
%token COMMENT IDENTIFIER COMMA JOIN_OPERATOR HASH LESS_THAN GREATER_THAN LEFT_PARENT RIGHT_PARENT 
%token LEFT_BRACE RIGHT_BRACE LEFT_CURLY_BRACE RIGHT_CURLY_BRACE AND_OPERATOR OR_OPERATOR
%token ADD_OPERATOR SUB_OPERATOR MULT_OPERATOR DIV_OPERATOR CMPD_ADD_OPERATOR CMPD_SUB_OPERATOR 
%token CMPD_MULT_OPERATOR CMPD_DIV_OPERATOR EQUAL_OPERATOR NOT_EQUAL_OPERATOR GE_OPERATOR LE_OPERATOR

%%
CMPD_STATEMENTS : STATEMENT CMPD_STATEMENTS 
                | 
                ;
STATEMENT : INCLUDE_TYPE_STATEMENT 
          | MAIN_FUNCTION_STATMENT
          | COMMENTS
          | RESERVED_TYPE_DECLARATION
/*          | CONNECT_TO_FUNCTION_STATEMENT
          | VARIABLE_DECLARATION_STATEMENT
          | ARITHMETIC_EXPRESSION
          | IF_STATEMENT
          | ELSE_IF_STATEMENT
          | ELSE_STATEMENT
          | IN_BUILT_FUNCTION_CALL
          | CONSOLE_STATEMENT
          | MAIN_FNCTN_RETURN_STATEMENT
          | NEWLINE_STATEMENT          
*/          ;


INCLUDE_TYPE_STATEMENT : HASH INCLUDE LESS_THAN LIBRARY GREATER_THAN  {fprintf(outputFile,"lineno: %d :: {INCLUDE_TYPE_STATEMENT}\n", yylineno); };
                       ;
MAIN_FUNCTION_STATMENT : INT FUNCTION LEFT_PARENT RIGHT_PARENT LEFT_CURLY_BRACE CMPD_STATEMENTS RIGHT_CURLY_BRACE {fprintf(outputFile,"lineno: %d :: {MAIN_FUNCTION_STATEMENT}\n", yylineno); };

COMMENTS : COMMENT {fprintf(outputFile,"lineno: %d :: {COMMENTS}\n", yylineno); };

RESERVED_TYPE_DECLARATION : RESERVED_TYPE RESERVED_TYPE_STATEMENTS SEMICOLON {fprintf(outputFile,"lineno: %d :: {RESERVED_TYPE_DECLARATIONS}\n", yylineno); };

RESERVED_TYPE_STATEMENTS : RESERVED_TYPE_STATEMENT COMMA RESERVED_TYPE_STATEMENTS
                         | RESERVED_TYPE_STATEMENT
                         ;

RESERVED_TYPE_STATEMENT : IDENTIFIER | SIMPLE_ASSIGNMENT;
SIMPLE_ASSIGNMENT : IDENTIFIER ASSIGN_OPERATOR VALUE {fprintf(outputFile,"lineno: %d :: {RESERVED_TYPE_DECLARATIONS} :: {SIMPLE_ASSIGNMENT}\n", yylineno); };; /* for example m1 =242*/





%%

void yyerror(char* s){
    fprintf(outputFile,"lineno: %d :: Syntax Error Detected!!!!\n",yylineno);
    return;
}

int main(int argc, char** argv){
    inputFile = fopen(argv[1], "r");
    outputFile = fopen(argv[2], "w");
    yyin = inputFile;
    //lineno = yylineno;
    yyparse();
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}