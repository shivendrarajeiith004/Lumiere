%{
#include<stdio.h>
#include<stdlib.h>
void yyerror(char *);
int yylex();
extern FILE* yyin;
FILE * inputFile;
FILE* outputFile;
int lineno= 1;
%}

%token VALUE ASSIGN_OPERATOR RESERVED_TYPE RESERVED_KEYWORD BLANKS SEMICOLON INCLUDE INT LIBRARY 
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
/*          | MAIN_FUNCTION_STATMENT
          | COMMENTS
          | RESERVED_KEYWORD_TYPE_DECLARATION
          | CONNECT_TO_FUNCTION_STATEMENT
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


INCLUDE_TYPE_STATEMENT : HASH INCLUDE BLANKS LESS_THAN LIBRARY GREATER_THAN BLANKS {fprintf(outputFile,"lineno: %d :: {INCLUDE_TYPE_STATEMENT}\n", lineno); lineno++;};  
                       | HASH INCLUDE LESS_THAN LIBRARY GREATER_THAN BLANKS
                       ;
%%

void yyerror(char* s){
    fprintf(outputFile,"lineno: %d :: Syntax Error Detected!!!!\n",lineno);
    return;
}

int main(int argc, char** argv){
    inputFile = fopen(argv[1], "r");
    outputFile = fopen(argv[2], "w");
    yyin = inputFile;
    yyparse();
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}