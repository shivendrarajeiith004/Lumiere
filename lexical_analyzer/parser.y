%{
#include <stdio.h>
void yyerror(char *);
int yylex();
%}

%token INTEGER
%token DOUBLE
%token INT
%token FLOAT
%token CHAR
%token BOOLEAN
%token STRING
%token VECTOR
%token CLUSTER
%token VOID
%token BODY
%token BASIC
%token FORCE
%token IF
%token ELSE
%token CHECK_UNTIL
%token BREAK
%token CONTINUE
%token FIX
%token USE
%token HARDWARE
%token GPU
%token CPU
%token OS
%token RETURN
%token TRY
%token CATCH
%token TYPEOF
%token CLASS
%token EXTENDS
%token INHERITS
%token HIDDEN
%token DEG
%token ADD_OP
%token SUB_OP
%token DIV_OP
%token MULT_OP
%token POW_OP
%token MOD_OP
%token ABS_OP
%token COMP_ASSIGN_ADD
%token COMP_ASSIGN_SUBTRACT
%token COMP_ASSIGN_MUL
%token LESS_THAN
%token LESS_THAN_EQ
%token GREAT_THAN
%token GREAT_THAN_EQ

%%

statement:
    INT          { printf("Got an 'int' keyword\n"); }
  | FLOAT        { printf("Got a 'float' keyword\n"); }
  | CHAR         { printf("Got a 'char' keyword\n"); }
  | BOOLEAN      { printf("Got a 'boolean' keyword\n"); }
  | STRING       { printf("Got a 'string' keyword\n"); }
  | VECTOR       { printf("Got a 'vec' keyword\n"); }
  | CLUSTER      { printf("Got a 'Cluster' keyword\n"); }
  | VOID         { printf("Got a 'void' keyword\n"); }
  | BODY         { printf("Got a 'Body' keyword\n"); }
  | BASIC        { printf("Got a 'Basic' keyword\n"); }
  | FORCE        { printf("Got a 'force' keyword\n"); }
  | IF           { printf("Got an 'if' keyword\n"); }
  | ELSE         { printf("Got an 'else' keyword\n"); }
  | CHECK_UNTIL  { printf("Got a 'check_until' keyword\n"); }
  | BREAK        { printf("Got a 'break' keyword\n"); }
  | CONTINUE     { printf("Got a 'Continue' keyword\n"); }
  | FIX          { printf("Got a '__FIX__' keyword\n"); }
  | USE          { printf("Got a '__USE__' keyword\n"); }
  | HARDWARE     { printf("Got a '__HARDWARE__' keyword\n"); }
  | GPU          { printf("Got a '__GPU__' keyword\n"); }
  | CPU          { printf("Got a '__CPU__' keyword\n"); }
  | OS           { printf("Got an 'OS' keyword\n"); }
  | FIX          { printf("Got a 'fix' keyword\n"); }
  | RETURN       { printf("Got a 'return' keyword\n"); }
  | TRY          { printf("Got a 'try' keyword\n"); }
  | CATCH        { printf("Got a 'Catch' keyword\n"); }
  | TYPEOF       { printf("Got a 'typeof' keyword\n"); }
  | CLASS        { printf("Got a 'Class' keyword\n"); }
  | EXTENDS      { printf("Got an 'Extends' keyword\n"); }
  | INHERITS     { printf("Got an 'Inherit' keyword\n"); }
  | HIDDEN       { printf("Got a 'hidden' keyword\n"); }
  ;

%%

void yyerror(char *s) {
fprintf(stderr, "%s\n", s);

}


int main(void) {
yyparse();
return 0;
}









