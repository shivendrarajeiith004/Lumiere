%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern FILE *yyin; 
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
%token COMP_ASSIGN_SUBTRACT COMP_ASSIGN_MUL LESS_THAN LESS_THAN_EQ AND_OP OR_OP NOT_OP 
%token GREAT_THAN GREAT_THAN_EQ VAR ASSIGN COMP_ASSIGN_ADD EOL LEFT_PAREN   EQUAL_TO NOT_EQUAL_TO
%token RIGHT_PAREN  LEFT_CURLY_BRACE RIGHT_CURLY_BRACE LEFT_BRACE RIGHT_BRACE
%token MAIN SINGLE_LINE_COMMENT MULTI_LINE_COMMENT CONST MASS ELSE_IF  PUBLIC
%token COMMA COLON

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
STATEMENT: CONDITIONAL_STATEMENT 
         | EXPRESSION EOL{printf("Statement here\n");} 
         | LOOP_STATEMENT 
         | PREPROCESSOR_DECLERATION
         | FUNCTION_DECLERATION
         | DECLARATION EOL {printf("Declaration Statement\n");}
         | ASSIGNMENT EOL
         | CLASS_STATEMENT {printf("Class Statement \n");}
         | EOL
         ;
          
CLASS_DEFINITION: LEFT_CURLY_BRACE CLASS_BODY RIGHT_CURLY_BRACE 
                    | COLON EXTENDS VAR LEFT_CURLY_BRACE CLASS_BODY RIGHT_CURLY_BRACE
CLASS_STATEMENT: CLASS VAR CLASS_DEFINITION
CLASS_BODY: HIDDEN_STAT PUBLIC_STAT
DECLARATION_CLASS: DECLARATION_CLASS DECLARATION EOL| DECLARATION EOL;
FUNCTION_CLASS : FUNCTION_CLASS FUNCTION_DECLERATION | FUNCTION_DECLERATION;
HIDDEN_STAT: HIDDEN COLON DECLARATION_CLASS FUNCTION_CLASS {printf("Hidden Statements");};
PUBLIC_STAT :PUBLIC COLON DECLARATION_CLASS FUNCTION_CLASS {printf("Public Statements");};
CONDITIONAL_STATEMENT: IF_STATEMENT {printf("If statement.\n");}
                     | IF_STATEMENT ELSE_STATEMENT {printf("If  ELSE statement.\n");}
                     | IF_STATEMENT ELSEIF_STATEMENT ELSE_STATEMENT {printf("If  ELSEIF ELSE statement.\n");};
/* STATEMENTS */
IF_STATEMENT:IF LEFT_PAREN BOOLEAN_EXP RIGHT_PAREN LEFT_CURLY_BRACE CMPND_STATEMENT RIGHT_CURLY_BRACE ;

ELSE_STATEMENT: ELSE LEFT_CURLY_BRACE CMPND_STATEMENT RIGHT_CURLY_BRACE;

ELSEIF_STATEMENT: ELSE_IF LEFT_PAREN BOOLEAN_EXP RIGHT_PAREN LEFT_CURLY_BRACE CMPND_STATEMENT RIGHT_CURLY_BRACE;

LOOP_STATEMENT  : CHECK_UNTIL LEFT_PAREN INITIAL_CONDITION RIGHT_PAREN LEFT_CURLY_BRACE CMPND_STATEMENT RIGHT_CURLY_BRACE{printf("FOR STATEMENT\n");};

INITIAL_CONDITION :STATEMENT STATEMENT EXPRESSION  { printf("INIT_CONDITION\n");}
                  | STATEMENT STATEMENT {printf(" ; ; ");}
                  | EXPRESSION {printf("empty CONDITION");}
                  ;

PREPROCESSOR_DECLERATION:
    CPU VAR { printf("CPU reached\n"); }
    | USE LIB_MECH { printf("Lib_mech reached\n"); }
    | MAC VAR{ printf("MAC used\n"); }
    | GPU  VAR{ printf("GPU reached\n"); }
    | FIX VAR  CONSTANT   {printf("Setting value");}
    ;

FUNCTION_DECLERATION:
    VOID VAR LEFT_PAREN PARAMETER_LIST RIGHT_PAREN LEFT_CURLY_BRACE CMPND_STATEMENT RIGHT_CURLY_BRACE {
        printf("Function name: f_name with return type: ret_name\n");
    }
 | TYPE VAR LEFT_PAREN PARAMETER_LIST RIGHT_PAREN LEFT_CURLY_BRACE CMPND_STATEMENT RIGHT_CURLY_BRACE {
        printf("Function name: f_name with return type: ret_name\n");
    }
    ;
/* EXPRESSION */


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
PRIMARY_EXP  : LEFT_PAREN EXPRESSION RIGHT_PAREN 
             | FACTOR 
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
FACTOR :  VAR 
       | CONSTANT
       ;
PARAMETER_LIST:
    PARAMETER
    | PARAMETER_LIST COMMA PARAMETER
    |
    ;

PARAMETER:
    TYPE VAR {
        printf("Parameter: var_name, Type: data_type\n");
    }
    ;

TYPE : INT
     | FLOAT
     | STRING
     | BOOLEAN
     | VECTOR 
     | CLUSTER
     | CHAR
     ;

CONSTANT : INTEGER_VALUE
         | DOUBLE_VALUE
         | STRING_VALUE
         | BOOL_VALUE
         ;
DECLARATION : TYPE var_list { printf("here");}
           ;

VEC_DATA_TYPES: DOUBLE_VALUE |INTEGER_VALUE |VAR;
var_list:
      VAR   {printf("VARIABLE");}                          // Single variable
    | VAR COMMA var_list {printf("VAR COMMA var_list\n");}             // Multiple variables separated by commas
    | VAR ASSIGN INTEGER_VALUE {printf("VAR ASSIGN INTEGER\n");}             // Variable initialized with an integer value
    | VAR ASSIGN STRING_VALUE {printf("VAR ASSIGN STRING_VALUE\n");}
    | VAR ASSIGN DOUBLE_VALUE {printf("VAR ASSIGN STRING_VALUE\n");}
    | VAR ASSIGN DOUBLE_VALUE COMMA var_list {printf("VAR ASSIGN STRING_VALUE\n");}
    | VAR ASSIGN INTEGER_VALUE COMMA var_list {printf("VAR ASSIGN INTEGER COMMA var_list\n");} // Initialized variable followed by others
    | VAR LEFT_BRACE INTEGER_VALUE RIGHT_BRACE {printf("Array DECLARATION\n");}  // Array DECLARATION
    | VAR LEFT_BRACE INTEGER_VALUE RIGHT_BRACE COMMA var_list {printf("Array and Variables DECLARATION\n");} // Array and variable list
    | VAR LEFT_BRACE INTEGER_VALUE RIGHT_BRACE ASSIGN INTEGER_VALUE {printf("Array DECLARATION with Initialization\n");} // Array initialized
    | VAR ASSIGN LESS_THAN VEC_DATA_TYPES COMMA VEC_DATA_TYPES GREAT_THAN {printf("Vec DECLARATION with Initialization\n");}
    | VAR ASSIGN LESS_THAN VEC_DATA_TYPES COMMA VEC_DATA_TYPES GREAT_THAN COMMA var_list{printf(" Series of Vec DECLARATION with Initialization\n");}

    ;

ASSIGNMENT:
     VAR ASSIGN INTEGER_VALUE {printf("VAR ASSIGN INTEGER\n");}  
    | VAR ASSIGN STRING_VALUE             // Simple assignment statement
    ;


%%

void yyerror(char *s) {
    printf("Error: %s\n", s);
}
int main(int argc, char **argv) {
    if (argc < 2) {
        printf("Give Command-line Argument as Following: %s <input-file>\n", argv[0]);
        return 1;
    }

    FILE *inputFile = fopen(argv[1], "r");
    if (!inputFile) {
        perror("File Opening Failed");
        return 1;
    }


    yyin = inputFile;

    yyparse();

    fclose(inputFile);
    return 0;
}

/*int main() {
    while (1) {
        yyparse();
    }
    return 0;
}*/
