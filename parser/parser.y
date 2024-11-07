%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void yyerror(char *);
int yylex();
extern int yylineno;
extern int yycolumn;
extern char yytext[];
%}

%union {
    int intval;
    float floatval;
    char *stringval; // Corrected to use char * for strings
    class CMPND_STATEMENT* ast_compund_statement;
    class STATEMENT* ast_statement;
    class CONDITIONAL_STATEMENT* ast_conditional_statement;
    class IF_STATEMENT* ast_if_statement;
    class ELSE_STATEMENT* ast_else_statement;
    class ELSEIF_STATEMENTS* ast_elseif_statements;
    class ELSEIF_STATEMENT* ast_elseif_statement;

    class LOOP_STATEMENT* ast_loop_statement;
    class INITIAL_CONDITION* ast_initial_condition;
    class PREPROCESSOR_DECLERATION* ast_preprocessor_declaration;
    class FUNCTION_DECLERATION* ast_function_declaration;
    class EXPRESSION* ast_expression;
    class ARITHMETIC_EXP* ast_arithmetic_exp;
    class MUL_EXP* ast_mul_exp;
    class POW_EXP* ast_pow_exp;
    class CAST_EXP* ast_cast_exp;
    class UNARY_EXPRESSION* ast_unary_expression;
    class PRIMARY_EXP* ast_primary_exp;
    class BOOLEAN_EXP* ast_boolean_exp;
    class RELATIONAL_EXP* ast_relational_exp;
    class FACTOR* ast_factor;
    class PARAMETER_LIST* ast_parameter_list;
    class PARAMETER* ast_parameter;
    class DECLARATION* ast_declaration;
    class ASSIGNMENT* ast_assignment;
    class CONSTANT* ast_constnt;
    class TYPE * ast_type;
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
%token MAIN SINGLE_LINE_COMMENT MULTI_LINE_COMMENT CONST MASS ELSE_IF  
%token COMMA

%type<ast_compund_statement> CMPND_STATEMENT
%type<ast_statement> STATEMENT
%type<ast_conditional_statement> CONDITIONAL_STATEMENT
%type<ast_if_statement> IF_STATEMENT
%type<ast_else_statement> ELSE_STATEMENT
%type<ast_elseif_statements> ELSEIF_STATEMENTS
%type<ast_elseif_statement> ELSEIF_STATEMENT
%type<ast_loop_statement> LOOP_STATEMENT
%type<ast_initial_condition> INITIAL_CONDITION
%type<ast_preprocessor_declaration> PREPROCESSOR_DECLERATION
%type<ast_function_declaration> FUNCTION_DECLERATION
%type<ast_expression> EXPRESSION
%type<ast_arithmetic_exp> ARITHMETIC_EXP
%type<ast_mul_exp> MUL_EXP
%type<ast_pow_exp> POW_EXP
%type<ast_cast_exp> CAST_EXP
%type<ast_unary_expression> UNARY_EXPRESSION
%type<ast_primary_exp> PRIMARY_EXP
%type<ast_boolean_exp> BOOLEAN_EXP
%type<ast_relational_exp> RELATIONAL_EXP
%type<ast_factor> FACTOR
%type<ast_parameter_list> PARAMETER_LIST
%type<ast_parameter> PARAMETER
%type<ast_declaration> DECLARATION
%type<ast_assignment> ASSIGNMENT
%type<ast_constnt> CONSTANT
%type<ast_type> TYPE

%left OR_OP
%left AND_OP
%left LESS_THAN LESS_THAN_EQ GREAT_THAN GREAT_THAN_EQ EQUAL_TO NOT_EQUAL_TO
%left ADD_OP SUB_OP
%left MULT_OP DIV_OP
%right POW_OP


%%
CMPND_STATEMENT : CMPND_STATEMENT STATEMENT {$1->statements.push_back($2);$$=$1;}
                | STATEMENT {$$=new CMPND_STATEMENT();$$->statements.push_back($1);}
                ;
STATEMENT: CONDITIONAL_STATEMENT {$$=$1}
         | EXPRESSION EOL{printf("Statement here\n");} 
         | LOOP_STATEMENT 
         | PREPROCESSOR_DECLERATION
         | FUNCTION_DECLERATION
         | DECLARATION EOL
         | ASSIGNMENT EOL
         | EOL
         ;
          


CONDITIONAL_STATEMENT: IF_STATEMENT {printf("If statement.\n");}{$$=new CONDITIONAL_STATEMENT($1)};
                     | IF_STATEMENT ELSE_STATEMENT {printf("If  ELSE statement.\n");}{$$=new CONDITIONAL_STATEMENT($1,$2)};
                     | IF_STATEMENT ELSEIF_STATEMENTS ELSE_STATEMENT {printf("If  ELSEIF ELSE statement.\n");}{$$=new CONDITIONAL_STATEMENT($1,$2,$3)};
/* STATEMENTS */
IF_STATEMENT:IF LEFT_PAREN BOOLEAN_EXP RIGHT_PAREN LEFT_CURLY_BRACE CMPND_STATEMENT RIGHT_CURLY_BRACE ;

ELSE_STATEMENT: ELSE LEFT_CURLY_BRACE CMPND_STATEMENT RIGHT_CURLY_BRACE;

ELSEIF_STATEMENTS: ELSEIF_STATEMEMT ELSEIF_STATEMENTS;

ELSEIF_STATEMEMT: ELSE_IF LEFT_PAREN BOOLEAN_EXP RIGHT_PAREN LEFT_CURLY_BRACE CMPND_STATEMENT RIGHT_CURLY_BRACE;

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
     VAR ASSIGN EXPRESSION {printf("VAR ASSIGN INTEGER\n");}  
    ;


%%

void yyerror(char *s) {
    printf("Error: %s\n", s);
}

int main() {
    while (1) {
        yyparse();
    }
    return 0;
}
