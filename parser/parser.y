%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void yyerror(char *);
int yylex();
%}

%union {
    int intval;
    float floatval;
    char *stringval; // Corrected to use char * for strings
}

%token INTEGER_VALUE
%token DOUBLE_VALUE
%token STRING_VALUE BOOL_VALUE DOB
%token INT FLOAT CHAR BOOLEAN STRING VECTOR CLUSTER VOID
%token BODY BASIC FORCE IF ELSE CHECK_UNTIL BREAK CONTINUE FIX USE HARDWARE
%token GPU MAC CPU OS RETURN TRY CATCH TYPEOF CLASS EXTENDS INHERITS HIDDEN DEG LIB_MECH
%token ADD_OP SUB_OP DIV_OP MULT_OP POW_OP MOD_OP ABS_OP COMP_ASSIGN_DIV
%token COMP_ASSIGN_SUBTRACT COMP_ASSIGN_MUL LESS_THAN LESS_THAN_EQ
%token GREAT_THAN GREAT_THAN_EQ VAR ASSIGN COMP_ASSIGN_ADD EOL LEFT_PAREN  
%token RIGHT_PAREN LEFT_CURLY_BRACE RIGHT_CURLY_BRACE LEFT_BRACE RIGHT_BRACE
%token MAIN SINGLE_LINE_COMMENT MULTI_LINE_COMMENT CONST MASS COMMA

%type <stringval> program Preprocessor_declaration Function_declaration Parameter_list Parameter type Function_body

%left ADD_OP SUB_OP
%left MULT_OP DIV_OP

%%
program:
    program Preprocessor_declaration
    | program Function_declaration
    |
    ;

Preprocessor_declaration:
    CPU { printf("CPU reached\n"); }
    | USE LIB_MECH { printf("Lib_mech reached\n"); }
    | MAC { printf("MAC used\n"); }
    | GPU { printf("GPU reached\n"); }
    | FIX VAR  CONSTANT   {printf("Setting value");}
    ;

Function_declaration:
    type VAR LEFT_PAREN Parameter_list RIGHT_PAREN LEFT_CURLY_BRACE Function_body RIGHT_CURLY_BRACE {
        printf("Function name: f_name with return type: ret_name\n");
    }
    ;

Parameter_list:
    Parameter
    | Parameter_list COMMA Parameter
    |
    ;

Parameter:
    type VAR {
        printf("Parameter: var_name, Type: data_type\n");
    }
    ;

type:
    INT {printf("int\n");}
    | FLOAT {printf("float\n");}
    | CHAR {printf("char\n");}
    | BOOLEAN {printf("bool\n");}
    | STRING {printf("string\n");}
    | VOID {printf("void\n");}
    ;

Function_body:
    { printf("Function body: empty for now\n"); }
    ;

CONSTANT : INTEGER_VALUE
         | DOUBLE_VALUE
         | STRING_VALUE
         | BOOL_VALUE
         ;


%%
void yyerror(char *s) {
    printf("Error: %s\n", s);
}

int main() {
    printf("Starting parser... (type 'exit' to quit)\n");
    while (1) {
        yyparse();
    }
    return 0;
}
