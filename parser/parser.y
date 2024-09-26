%{
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
void yyerror(char *);
int yylex();
int addtoken(char *s,char*token_value);

%}

%token INTEGER
%token  DOUBLE 
%token STRING_VALUE,BOOL_VALUE
%token INT FLOAT CHAR BOOLEAN STRING VECTOR CLUSTER VOID
%token BODY BASIC FORCE IF ELSE CHECK_UNTIL BREAK CONTINUE FIX USE HARDWARE
%token GPU CPU OS RETURN TRY CATCH TYPEOF CLASS EXTENDS INHERITS HIDDEN DEG
%token ADD_OP SUB_OP DIV_OP MULT_OP POW_OP MOD_OP ABS_OP COMP_ASSIGN_DIV
%token COMP_ASSIGN_SUBTRACT COMP_ASSIGN_MUL LESS_THAN LESS_THAN_EQ
%token GREAT_THAN GREAT_THAN_EQ VAR ASSIGN COMP_ASSIGN_ADD EOL LEFT_PAREN  
%token RIGHT_PAREN  LEFT_CURLY_BRACE RIGHT_CURLY_BRACE LEFT_BRACE RIGHT_BRACE
%token MAIN SINGLE_LINE_COMMENT MULTI_LINE_COMMENT CONST MASS
%%

program : program  loop |

loop : CHECK_UNTIL "(" ASSIGNMENT_STATEMENT ";" CONDITIONAL_STATEMENT ";" Ternary_Assi | Unary_Assignment  ")" 


loop : 


%%


int main(int argc, char **argv) {
    
    smt_file = fopen("statement.txt", "w");
    if (!smt_file) {
        fprintf(stderr, "Could not open smt.txt for writing.\n");
        return 1;
    }
    
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <input_file>\n", argv[0]);
        return 1;
    }

    yyin = fopen(argv[1], "r");
    if (yyin == NULL) {
        perror("Error opening file");
        return 1;
    }

    do {
        yyparse();  
    } while (!feof(yyin));
    fclose(smt_file);
    fclose(yyin); 
}