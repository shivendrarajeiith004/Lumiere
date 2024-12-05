%{
#include "ast.h"
#include "parser.tab.h"


%}
%{
int lineno = 0;
int current_col = 0; 
%}

digits [0-9] 
blanks [ \t]+
%%
{digits}+ {   yylval.stringval = strdup(yytext); return INTEGER; }
{digits}*\.{digits}+ {   yylval.stringval = strdup(yytext); return DOUBLE; }
\".*\" { yylval.stringval = strdup(yytext); return CHAR;}
\* {   return MUL_OP; }
\/ {   return DIV_OP; }
\+ {   return ADD_OP; }
- {   return SUB_OP; }
\*\* {   return POW_OP; }

\( {   return LEFT_PAREN; }
\) {   return RIGHT_PAREN; }
\{ {   return LEFT_BRACKET; }
\} {   return RIGHT_BRACKET; }

\= {   return ASSIGN; }
\> {   return GREATER_THAN; }
\< {   return LESS_THAN; }
"!=" {   return NOT_EQUAL_TO; }
\=\= {   return EQUAL_TO; }
\<= {   return LESS_THAN_EQUAL_TO; }
\>= {   return GREATER_THAN_EQUAL_TO; }

\-= {   return SUBTRACT_COMPOUND_ASSIGNMENT; }
\+= {   return ADD_COMPOUND_ASSIGNMENT; }
\*= {   return MULTIPLY_COMPOUND_ASSIGNMENT; }
\/= {   return DIVIDE_COMPOUND_ASSIGNMENT; }
int {  return INT_TYPE;  }
double {   return DOUBLE_TYPE; }
char {  return CHAR_TYPE;}
if {   return IF; }
else {   return ELSE; }
elif {   return ELIF; }
mass            { return MASS; }
init_vel        { return INIT_VEL; }
final_vel       { return FINAL_VEL; }
accl            { return ACCL; }
init_pos        { return INIT_POS; }
final_pos       { return FINAL_POS; }
init_time       { return INIT_TIME; }
final_time      { return FINAL_TIME; }
body            { return BODY; }

check_until     { return CHECK_UNTIL; }
return          { return RETURN; }
connectTo       { return CONNECT_TO; }
library         { return LIBRARY; }
include         { return INCLUDE; }
int             { return INT; }
function        { return FUNCTION; }
console         { return CONSOLE; }
\# { return HASH;}
\. { return JOIN_OPERATOR;}

\, { return COMMA;}
[a-zA-Z]+[_a-zA-Z0-9]* {   
  yylval.stringval = strdup(yytext); 
  return VAR;
}

{blanks}+ { current_col += yyleng; /* Skip blanks and adjust column */ }
\n { lineno++; current_col = 0;; /* Handle new lines */ }
. { /* Handle unrecognized characters */ \
    return INVALID_CHAR; 
   }
%%
int yywrap()  {
  return 1;
}

