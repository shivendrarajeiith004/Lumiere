%{
#include <stdio.h>
#include <stdbool.h>
void yyerror(char *);
int yylex();
%}

%token INTEGER DOUBLE INT FLOAT CHAR BOOLEAN STRING VECTOR CLUSTER VOID
%token BODY BASIC FORCE IF ELSE CHECK_UNTIL BREAK CONTINUE FIX USE HARDWARE
%token GPU CPU OS RETURN TRY CATCH TYPEOF CLASS EXTENDS INHERITS HIDDEN DEG
%token ADD_OP SUB_OP DIV_OP MULT_OP POW_OP MOD_OP ABS_OP COMP_ASSIGN_DIV
%token COMP_ASSIGN_SUBTRACT COMP_ASSIGN_MUL LESS_THAN LESS_THAN_EQ
%token GREAT_THAN GREAT_THAN_EQ VAR ASSIGN COMP_ASSIGN_ADD EOL LEFT_PAREN  
%token RIGHT_PAREN  LEFT_CURLY_BRACE RIGHT_CURLY_BRACE LEFT_BRACE RIGHT_BRACE
%token MAIN SINGLE_LINE_COMMENT MULTI_LINE_COMMENT CONST MASS
%%

input:
    | input statement
    ;

statement:
    INTEGER { printf("Token: INTEGER, Value: %d\n", $1); }
    | DOUBLE { printf("Token: DOUBLE, Value: %d\n", $1); }
    | INT { printf("Token: INT\n"); }
    | FLOAT { printf("Token: FLOAT\n"); }
    | CHAR { printf("Token: CHAR\n"); }
    | BOOLEAN { printf("Token: BOOLEAN\n"); }
    | STRING { printf("Token: STRING\n"); }
    | VECTOR { printf("Token: VECTOR\n"); }
    | CLUSTER { printf("Token: CLUSTER\n"); }
    | VOID { printf("Token: VOID\n"); }
    | BODY { printf("Token: BODY\n"); }
    | BASIC { printf("Token: BASIC\n"); }
    | FORCE { printf("Token: FORCE\n"); }
    | IF { printf("Token: IF\n"); }
    | ELSE { printf("Token: ELSE\n"); }
    | CHECK_UNTIL { printf("Token: CHECK_UNTIL\n"); }
    | BREAK { printf("Token: BREAK\n"); }
    | CONTINUE { printf("Token: CONTINUE\n"); }
    | FIX { printf("Token: FIX\n"); }
    | USE { printf("Token: USE\n"); }
    | HARDWARE { printf("Token: HARDWARE\n"); }
    | GPU { printf("Token: GPU\n"); }
    | CPU { printf("Token: CPU\n"); }
    | OS { printf("Token: OS\n"); }
    | RETURN { printf("Token: RETURN\n"); }
    | TRY { printf("Token: TRY\n"); }
    | CATCH { printf("Token: CATCH\n"); }
    | TYPEOF { printf("Token: TYPEOF\n"); }
    | CLASS { printf("Token: CLASS\n"); }
    | EXTENDS { printf("Token: EXTENDS\n"); }
    | INHERITS { printf("Token: INHERITS\n"); }
    | HIDDEN { printf("Token: HIDDEN\n"); }
    | ASSIGN { printf("Token: ASSIGN\n"); }
    | DEG { printf("Token: DEG\n"); }
    | ADD_OP { printf("Token: ADD_OP\n"); }
    | SUB_OP { printf("Token: SUB_OP\n"); }
    | DIV_OP { printf("Token: DIV_OP\n"); }
    | MULT_OP { printf("Token: MULT_OP\n"); }
    | POW_OP { printf("Token: POW_OP\n"); }
    | MOD_OP { printf("Token: MOD_OP\n"); }
    | ABS_OP { printf("Token: ABS_OP\n"); }
    | COMP_ASSIGN_ADD { printf("Token: COMP_ASSIGN_ADD\n"); }
    | COMP_ASSIGN_DIV { printf("Token: COMP_ASSIGN_DIV\n"); }
    | COMP_ASSIGN_SUBTRACT { printf("Token: COMP_ASSIGN_SUBTRACT\n"); }
    | COMP_ASSIGN_MUL { printf("Token: COMP_ASSIGN_MUL\n"); }
    | LESS_THAN { printf("Token: LESS_THAN\n"); }
    | LESS_THAN_EQ { printf("Token: LESS_THAN_EQ\n"); }
    | GREAT_THAN { printf("Token: GREAT_THAN\n"); }
    | GREAT_THAN_EQ { printf("Token: GREAT_THAN_EQ\n"); }
    | VAR { printf("Token: VAR\n"); }
    | error { yyerror("Syntax error\n"); }
    | EOL {printf("Semi Colon\n");}
    | RIGHT_PAREN {printf("RIGHT_PAREN\n");}
    | LEFT_PAREN { printf("LEFT_PAREN\n");}
    | LEFT_BRACE {printf("LEFT_BRACE\n");}
    | RIGHT_BRACE {printf("RIGHT_BRACE\n");}
    | LEFT_CURLY_BRACE {printf("LEFT_CURLY_BRACE\n");}
    | RIGHT_CURLY_BRACE {printf("RIGHT_CURLY_BRACE\n");}
    | MAIN {printf("MAIN (sim) function\n");}
    | SINGLE_LINE_COMMENT {printf("Single Line Comment\n");}
    | MULTI_LINE_COMMENT {printf("Multi Line Comment\n");}
    | CONST {printf("Constant data type\n");}
    |MASS {printf("Token: Mass\n");}
    ;

%%

void yyerror(char *s) {
printf("%s\n", s);
}



extern FILE *yyin;  // Declare the external yyin variable

int main(int argc, char **argv) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <input_file>\n", argv[0]);
        return 1;
    }

    // Open the input file
    yyin = fopen(argv[1], "r");
    if (yyin == NULL) {
        perror("Error opening file");
        return 1;
    }

    do {
        yyparse();  // Call the parser
    } while (!feof(yyin));

    fclose(yyin);  // Close the input file
    return 0;
}









