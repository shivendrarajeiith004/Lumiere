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
%token <intval> INTEGER
%token <floatval> DOUBLE 
%token <stringval> STRING_VALUE,BOOL_VALUE
%token INT FLOAT CHAR BOOLEAN STRING VECTOR CLUSTER VOID
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
    INTEGER { char buffer[20]; sprintf(buffer, "%d", $1); addtoken("INTEGER", buffer); }
    | DOUBLE { char buffer[20]; sprintf(buffer, "%.2f", $1); addtoken("DOUBLE", buffer); }
    | STRING_VALUE { addtoken("STRING_VALUE", $1); }
    | BOOL_VALUE { addtoken("BOOL_VALUE", $1); }
    | INT { addtoken("INT", " "); }
    | FLOAT { addtoken("FLOAT", " "); }
    | CHAR { addtoken("CHAR", " "); }
    | BOOLEAN { addtoken("BOOLEAN", " "); }
    | STRING { addtoken("STRING", " "); }
    | VECTOR { addtoken("VECTOR", " "); }
    | CLUSTER { addtoken("CLUSTER", " "); }
    | VOID { addtoken("VOID", " "); }
    | BODY { addtoken("BODY", " "); }
    | BASIC { addtoken("BASIC", " "); }
    | FORCE { addtoken("FORCE", " "); }
    | IF { addtoken("IF", " "); }
    | ELSE { addtoken("ELSE", " "); }
    | CHECK_UNTIL { addtoken("CHECK_UNTIL", " "); }
    | BREAK { addtoken("BREAK", " "); }
    | CONTINUE { addtoken("CONTINUE", " "); }
    | FIX { addtoken("FIX", " "); }
    | USE { addtoken("USE", " "); }
    | HARDWARE { addtoken("HARDWARE", " "); }
    | GPU { addtoken("GPU", " "); }
    | CPU { addtoken("CPU", " "); }
    | OS { addtoken("OS", " "); }
    | RETURN { addtoken("RETURN", " "); }
    | TRY { addtoken("TRY", " "); }
    | CATCH { addtoken("CATCH", " "); }
    | TYPEOF { addtoken("TYPEOF", " "); }
    | CLASS { addtoken("CLASS", " "); }
    | EXTENDS { addtoken("EXTENDS", " "); }
    | INHERITS { addtoken("INHERITS", " "); }
    | HIDDEN { addtoken("HIDDEN", " "); }
    | ASSIGN { addtoken("ASSIGN", " "); }
    | DEG { addtoken("DEG", " "); }
    | ADD_OP { addtoken("ADD_OP", " "); }
    | SUB_OP { addtoken("SUB_OP", " "); }
    | DIV_OP { addtoken("DIV_OP", " "); }
    | MULT_OP { addtoken("MULT_OP", " "); }
    | POW_OP { addtoken("POW_OP", " "); }
    | MOD_OP { addtoken("MOD_OP", " "); }
    | ABS_OP { addtoken("ABS_OP", " "); }
    | COMP_ASSIGN_ADD { addtoken("COMP_ASSIGN_ADD", " "); }
    | COMP_ASSIGN_DIV { addtoken("COMP_ASSIGN_DIV", " "); }
    | COMP_ASSIGN_SUBTRACT { addtoken("COMP_ASSIGN_SUBTRACT", " "); }
    | COMP_ASSIGN_MUL { addtoken("COMP_ASSIGN_MUL", " "); }
    | LESS_THAN { addtoken("LESS_THAN", " "); }
    | LESS_THAN_EQ { addtoken("LESS_THAN_EQ", " "); }
    | GREAT_THAN { addtoken("GREAT_THAN", " "); }
    | GREAT_THAN_EQ { addtoken("GREAT_THAN_EQ", " "); }
    | VAR { addtoken("VAR", " "); }
    | EOL { addtoken("EOL", " "); }
    | RIGHT_PAREN { addtoken("RIGHT_PAREN", " "); }
    | LEFT_PAREN { addtoken("LEFT_PAREN", " "); }
    | LEFT_BRACE { addtoken("LEFT_BRACE", " "); }
    | RIGHT_BRACE { addtoken("RIGHT_BRACE", " "); }
    | LEFT_CURLY_BRACE { addtoken("LEFT_CURLY_BRACE", " "); }
    | RIGHT_CURLY_BRACE { addtoken("RIGHT_CURLY_BRACE", " "); }
    | MAIN { addtoken("MAIN", " "); }
    | SINGLE_LINE_COMMENT { addtoken("SINGLE_LINE_COMMENT", " "); }
    | MULTI_LINE_COMMENT { addtoken("MULTI_LINE_COMMENT", " "); }
    | CONST { addtoken("CONST", " "); }
    | MASS { addtoken("MASS", " "); }
    ;

%%
struct token {
  char * token;
  struct token * next;
  char * token_value;
};

struct token *token_list;


int addtoken(char * token,char *token_value) {
  struct token *curr_token; 
  curr_token = (struct token *)malloc(sizeof(struct token));
  if (curr_token==NULL){
   perror("Failed to allocate memory for token.\n");
   return -1;
  }
  curr_token->token =(char * )malloc(strlen(token)+1);
  if (curr_token->token==NULL){
    perror("Failed to allocate memory for token name.\n");
    free(curr_token);
    return -1;
  } 
  curr_token->token_value = (char * )malloc(strlen(token_value)+1);
  if (curr_token->token_value==NULL){
    perror("Failed to allocate memroy for token_value");
    free(curr_token->token);
    free(curr_token);
    return -1;
  }
  strcpy(curr_token->token,token);
  strcpy(curr_token->token_value,token_value);
  if (token_list == NULL) {
    token_list = curr_token;
  } else {
    struct token *temp;
    temp = token_list;
    while (temp->next != NULL) {
      temp = temp->next;
    }
    temp->next = curr_token;
  }
  return 1;
}

void printall(){
  struct token *current;
  current = token_list;
  while (current!=NULL) {
    if (strcmp(current->token,"EOL")==0){
    printf("\n");
    }else if ((strcmp(current->token,"INTEGER")==0) ||  (strcmp(current->token,"DOUBLE")	==0) ||  (strcmp(current->token,"STRING_VALUE")==0) ||  (strcmp(current->token,"BOOL_VALUE")==0)) { 
    printf(" <%s , %s > ",current->token,current->token_value);
    }else {
    printf(" <%s> ",current->token);
    }
    current = current->next;
  }
}

void yyerror(char *s) {
printf("%s\n", s);
}

// Freeing dynamically allocated memory;
void free_token_list() {
    struct token *current = token_list;
    struct token *next;
    
    while (current != NULL) {
        next = current->next;
        free(current->token);  
        free(current);            
        current = next;
    }
    token_list = NULL;  
}

extern FILE *yyin;  

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
        yyparse();  
    } while (!feof(yyin));

printall();
    fclose(yyin);  
    free_token_list();
    return 0;
}









