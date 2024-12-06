%{
#include "ast.h"
#include "symbol.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include "signal.h"
#include <math.h>
#include "parser.tab.h"

void yyerror(char *);
int yylex();

void yyerror(char *s); int yylex();
void process_variable_list(char **var_list);
struct  CmpndStatement *mainProgram; 
struct SymbolTable symTable;

extern int current_col; 
extern int lineno;
%}
%union {
    void * nodePtr;
    char* stringval; 
    enum TYPE type;
    char** var_list;  
    enum OPERAND op;
}
%token VALUE ASSIGN_OPERATOR RESERVED_KEYWORD SEMICOLON INCLUDE INT LIBRARY 
%token FUNCTION CONSOLE  STRING CONNECT_TO RETURN
%token COMMENT IDENTIFIER COMMA JOIN_OPERATOR HASH LESS_THAN GREATER_THAN LEFT_PARENT RIGHT_PARENT 
%token ELIF MASS INIT_VEL FINAL_VEL ACCL INIT_POS FINAL_POS INIT_TIME FINAL_TIME BODY CHECK_UNTIL 
%token LEFT_BRACKET RIGHT_BRACKET LEFT_CURLY_BRACE RIGHT_CURLY_BRACE AND_OPERATOR OR_OPERATOR NOT_OPERATOR
%token ADD_OPERATOR SUB_OPERATOR MULT_OPERATOR DIV_OPERATOR CMPD_ADD_OPERATOR CMPD_SUB_OPERATOR 
%token CMPD_MULT_OPERATOR CMPD_DIV_OPERATOR EQUAL_OPERATOR NOT_EQUAL_OPERATOR GE_OPERATOR LE_OPERATOR
%token IF ELSE ELSE_IF
%token ASSIGN GREATER_THAN LESS_THAN NOT_EQUAL_TO EQUAL_TO LESS_THAN_EQUAL_TO GREATER_THAN_EQUAL_TO SUBTRACT_COMPOUND_ASSIGNMENT ADD_COMPOUND_ASSIGNMENT MULTIPLY_COMPOUND_ASSIGNMENT DIVIDE_COMPOUND_ASSIGNMENT COMMA
%token  INTEGER DOUBLE CHAR MUL_OP ADD_OP SUB_OP DIV_OP POW_OP LEFT_PAREN RIGHT_PAREN EOL INT_TYPE DOUBLE_TYPE  CHAR_TYPE VAR INVALID_CHAR 
%type<nodePtr> ARTH_EXP MUL_EXP  TERM STATEMENT DECLERATION  ASSIGN_STATEMENT POW_EXP RELATIONAL_EXP CONDITIONAL_STATEMENT IF_STATEMENT ELSE_STATEMENT CMPD_STATEMENT CONSOLE_STATEMENT INCLUDE_STATEMENT
%type<var_list> VAR_LIST
%type<stringval> VAR INTEGER DOUBLE INT_TYPE DOUBLE_TYPE CHAR_TYPE CHAR 
%type<type> VAR_TYPE 
%type<op> ASSIGN_OP ADD_OP SUB_OP MUL_OP DIV_OP POW_OP RELATIONAL_OP GREATER_THAN LESS_THAN EQUAL_TO NOT_EQUAL_TO LESS_THAN_EQUAL_TO GREATER_THAN_EQUAL_TO
%%

CMPD_STATEMENT: CMPD_STATEMENT STATEMENT {
    struct CmpndStatementNode *node = (struct CmpndStatementNode *) malloc(sizeof(struct CmpndStatementNode));
    if (!node) {
        fprintf(stderr, "Memory allocation failed for CmpndStatementNode\n");
        exit(1);
    }
    //printf("in just recursive Node\n");
    node->ptr = $2;
    add_to_cmpnd_Statement(mainProgram, node);
    $$ = node;
}
|
| INVALID_CHAR {free_cmpndStatement( mainProgram); exit(1); }
  STATEMENT : ARTH_EXP   {$$=$1;}
          | DECLERATION {$$=$1;}
          | ASSIGN_STATEMENT {$$=$1;}
          | CONDITIONAL_STATEMENT{$$=$1;}
          | RESERVED_TYPE_DECLARATION
          | CONNECT_TO_STATEMENT
          |INCLUDE_STATEMENT
          |CONSOLE_STATEMENT
INCLUDE_STATEMENT: HASH INCLUDE LESS_THAN CHAR GREATER_THAN { 
                  struct INCLUDE_NODE* inc_node= (struct INCLUDE_NODE*)malloc(sizeof(struct INCLUDE_NODE));

                 $$ = cons_node;

                 };
CONSOLE_STATEMENT: CONSOLE LEFT_PAREN ARTH_EXP RIGHT_PAREN {
                 struct CONSOLE_NODE * cons_node = (struct CONSOLE_NODE *)malloc(sizeof(struct CONSOLE_NODE));
                  cons_node = new_CONSOLE_NODE($3);
                 $$ = cons_node;
                 };
CONNECT_TO_STATEMENT: VAR JOIN_OPERATOR CONNECT_TO LEFT_PAREN VAR RIGHT_PAREN ;
CONDITIONAL_STATEMENT: IF_STATEMENT {
                     struct CONDITIONAL_NODE *conNodePtr= (struct CONDITIONAL_NODE*)malloc(sizeof(struct CONDITIONAL_NODE));
                conNodePtr = new_con_node($1,NULL,NODE_TYPE_COND_IF);
                $$ = conNodePtr;
}
                     | IF_STATEMENT ELSE_STATEMENT {
                     struct CONDITIONAL_NODE *conNodePtr= (struct CONDITIONAL_NODE*)malloc(sizeof(struct CONDITIONAL_NODE));
                conNodePtr = new_con_node($1,$2,NODE_TYPE_COND_IF_ELSE);
                $$ = conNodePtr;
}
IF_STATEMENT:IF LEFT_PAREN RELATIONAL_EXP RIGHT_PAREN LEFT_BRACKET CMPD_STATEMENT RIGHT_BRACKET {
                     struct IF_NODE *if_node_ptr= (struct IF_NODE*)malloc(sizeof(struct IF_NODE));
                if_node_ptr = new_if_node($6,$3,lineno);
                $$ = if_node_ptr;
            }
ELSE_STATEMENT: ELSE LEFT_BRACKET CMPD_STATEMENT RIGHT_BRACKET {

                     struct ELSE_NODE *else_node_ptr= (struct ELSE_NODE *)malloc(sizeof(struct ELSE_NODE));
                else_node_ptr= new_else_node($3,lineno);
                $$ = else_node_ptr;
              }

ASSIGN_STATEMENT: VAR ASSIGN_OP ARTH_EXP   {
                struct VariableNode *varNodePtr = (struct VariableNode *)malloc(sizeof(struct VariableNode));
               strcpy(varNodePtr->name,$1); 
               varNodePtr->base.node_type =NODE_TYPE_VARIABLE;
               struct ASSIGN_NODE * nodePtr = (struct ASSIGN_NODE *) malloc(sizeof(struct ASSIGN_NODE)); 
                nodePtr = new_ASSIGN_NODE($2,varNodePtr,$3,lineno);
                $$ = nodePtr;
                }

 DECLERATION:VAR_TYPE VAR_LIST { 
           struct  DECL_NODE *nodePtr = ( struct DECL_NODE*)malloc(sizeof(struct DECL_NODE));
                 nodePtr = new_DECL_NODE($1,$2 ,lineno);
                 $$ =nodePtr;

                 }
MATCHED_STATEMENT :  LEFT_BRACKET CMPD_STATEMENT RIGHT_BRACKET

ARTH_EXP : ARTH_EXP ADD_OP MUL_EXP { struct EXP_NODE *nodePtr  = (struct EXP_NODE*)malloc(sizeof(struct EXP_NODE));
          nodePtr =  new_EXP_NODE(ADD,$1,$3,lineno);
         $$ = nodePtr;
         }

         | ARTH_EXP SUB_OP MUL_EXP {struct EXP_NODE *nodePtr  = (struct EXP_NODE*)malloc(sizeof(struct EXP_NODE));
          nodePtr =  new_EXP_NODE(SUB,$1,$3,lineno);
         $$ = nodePtr;
}
         | MUL_EXP {$$=$1; }
         ;

MUL_EXP :MUL_EXP DIV_OP POW_EXP {struct EXP_NODE *nodePtr  = (struct EXP_NODE*)malloc(sizeof(struct EXP_NODE));
          nodePtr =  new_EXP_NODE(DIV,$1,$3,lineno);
         $$ = nodePtr;
}
 
        |MUL_EXP MUL_OP POW_EXP {struct EXP_NODE *nodePtr  = (struct EXP_NODE*)malloc(sizeof(struct EXP_NODE));
          nodePtr =  new_EXP_NODE(MUL,$1,$3,lineno);
         $$ = nodePtr;
}
                  | POW_EXP {$$=$1;}
        ;

POW_EXP : POW_EXP POW_OP RELATIONAL_EXP {struct EXP_NODE *nodePtr  = (struct EXP_NODE*)malloc(sizeof(struct EXP_NODE));
          nodePtr =  new_EXP_NODE(POW,$1,$3,lineno);
         $$ = nodePtr;
}
        | RELATIONAL_EXP {$$=$1;}


RELATIONAL_EXP : RELATIONAL_EXP RELATIONAL_OP TERM {struct EXP_NODE *nodePtr  = (struct EXP_NODE*)malloc(sizeof(struct EXP_NODE));
          nodePtr =  new_EXP_NODE($2,$1,$3,lineno);
         $$ = nodePtr;
}
               | TERM {  $$=$1; }

RELATIONAL_OP : GREATER_THAN  {$$=GREATER_THAN_ENUM;}
              | LESS_THAN {$$=LESS_THAN_ENUM;}
              | NOT_EQUAL_TO {$$=NOT_EQUAL_TO_ENUM;}
              | EQUAL_TO {$$=EQUAL_TO_ENUM;}
              | LESS_THAN_EQUAL_TO {$$=LESS_THAN_EQUAL_TO_ENUM;}
              | GREATER_THAN_EQUAL_TO {$$=GREATER_THAN_EQUAL_TO_ENUM;}

TERM : INTEGER  { struct  ConstNode *nodePtr = ( struct ConstNode*)malloc(sizeof(struct ConstNode));

     union  value val;
     val.intval= atoi($1);
     nodePtr = new_ConstNode(val,lineno,INTEGER_ENUM);
          $$ = nodePtr;}  

     | DOUBLE {
     struct  ConstNode *nodePtr = ( struct ConstNode*)malloc(sizeof(struct ConstNode));
     
     union  value val;
     val.floatval = atof($1);
     nodePtr = new_ConstNode(val,lineno,DOUBLE_ENUM);

     $$ = nodePtr;}
     | VAR  {
                             struct VariableNode * var = (struct VariableNode *) malloc(sizeof(struct VariableNode));
               var = new_VariableNode($1,lineno);
                $$=var;
     }
     | LEFT_PAREN ARTH_EXP RIGHT_PAREN { 
     printf("%d here\n",node_type_to_string(((struct Node *)($2))->node_type));
     $$ = $2;
     }
     ;

VAR_LIST :  VAR_LIST COMMA VAR {
                 // Count existing variables in the list
                int count = 0;
                while (strcmp($1[count] ,"\0") )  { //Count existing variables in the list
                  count = count + 1;
                 }
                char **temp = realloc($1, (count + 2) * sizeof(char *));
                if (!temp) {
                    fprintf(stderr, "Memory reallocation failed\n");
                    exit(1);
                }
                $1= temp;

                $1[count] = strdup($3);  // Duplicate the new variable name
                $1[count + 1] ="\0" ;     // NULL-terminate the list
                $$ = $1;  // Set the result to the updated list
            }

         |VAR {


                $$ = malloc(2 * sizeof(char *));  // Initialize list with space for one variable + NULL terminator
                if (!$$) {
                    fprintf(stderr, "Memory allocation failed\n");
                    exit(1);
                }

                $$[0] = strdup($1);  // Duplicate the variable name
                $$[1] = "\0";  // NULL-terminate the list
            }
                  ;
VAR_TYPE : INT_TYPE { $$ = INTEGER_ENUM;}
         | DOUBLE_TYPE { $$ =DOUBLE_ENUM;} 
         | CHAR_TYPE {$$ = CHAR_ENUM;}


ASSIGN_OP : ASSIGN   {$$ = ASSIGN_ENUM;}
          | ADD_COMPOUND_ASSIGNMENT {$$=ADD_CMPND_ENUM;}
          | SUBTRACT_COMPOUND_ASSIGNMENT {$$=SUB_CMPND_ENUM;}
          | MULTIPLY_COMPOUND_ASSIGNMENT {$$=MUL_CMPND_ENUM;}
          | DIVIDE_COMPOUND_ASSIGNMENT {$$=DIV_CMPND_ENUM;}


RESERVED_TYPE_DECLARATION: RESERVED_TYPE RESERVED_TYPE_STATEMENTS {}
RESERVED_TYPE_STATEMENTS:RESERVED_TYPE_STATEMENTS COMMA RESERVED_TYPE_STATEMENT
                         | RESERVED_TYPE_STATEMENT{}
                         ;
RESERVED_TYPE_STATEMENT: VAR {} | VAR ASSIGN_OP ARTH_EXP;
RESERVED_TYPE: MASS {}| INIT_VEL | FINAL_VEL |ACCL | INIT_POS | FINAL_POS | INIT_TIME
                |FINAL_TIME |BODY {};
%%

void yyerror(char * s){
printf("Error:%s\n",s);
}


void process_variable_list(char **var_list) {
    int i = 0;
    while (var_list[i] != NULL) {
        printf("%s ", var_list[i]);
        free(var_list[i]);  // Free each duplicated string after use
        i++;
    }
    //free(var_list);  // Free the list itself after processing
    printf("\n");
}


void signal_handler(int sig) {
    if (sig == SIGINT) {
      //  printf("\nCaught SIGINT (Ctrl+C). Exiting gracefully...\n");
        // Perform any necessary clean-up here (e.g., free memory, close files)
semanticCheck(mainProgram,&symTable);
transpile_cmpd(&symTable,mainProgram);
free_cmpndStatement( mainProgram); 
        exit(0);  // Exit the program
}
}
extern FILE *yyin;
int main(int argc, char** argv){
if (argc < 2) {
        fprintf(stderr, "Usage: %s <input_file>\n", argv[0]);
        return 1;
    }

    // Open the input file
    FILE *input_file = fopen(argv[1], "r");
    if (!input_file) {
        fprintf(stderr, "Error: Could not open file %s\n", argv[1]);
    }

    // Set the input file for yyparse
    yyin = input_file;
init_SymbolTable(&symTable);
    mainProgram = (struct CmpndStatement*)malloc(sizeof(struct CmpndStatement));
    init_cmpndStatement( mainProgram);

/*if (signal(SIGINT, signal_handler) == SIG_ERR) {
        fprintf(stderr, "Error setting up signal handler.\n");
        return 1;
    }

    // Initialize the lexer state (if using Flex) or other setup
    while (1) {
        yyparse();
    }
    return 0;
*/
 while (!feof(yyin)) {
        yyparse();  // This will parse the tokens from the input file
    }
semanticCheck(mainProgram,&symTable);
transpile_cmpd(&symTable,mainProgram);
free_cmpndStatement( mainProgram); 

}
