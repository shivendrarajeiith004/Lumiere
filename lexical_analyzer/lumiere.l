alphabet  [a-zA-Z] 
underscore [_]
number    [0-9]

%{ 
#include <stdio.h>
#include "y.tab.h"

%}

%%
[0-9]+ {  yylval = atoi(yytext); return INTEGER; };
([0-9]+\.[0-9]+) { yylval= atof(yytext); return DOUBLE;};

\".*\" { return STRING;}
int { return INT;};
float { return FLOAT;};
char { return CHAR;};
boolean { return BOOLEAN;};
string { return STRING;};
vec { return VECTOR;};
cluster { return CLUSTER;};
void { return VOID;};
\(  {return LEFT_PAREN;}
\)  {return RIGHT_PAREN;}
\{  {return LEFT_CURLY_BRACE;}
\}  {return RIGHT_CURLY_BRACE;}
\[  {return LEFT_BRACE;}
\]  {return RIGHT_BRACE;}
body { return BODY;};
basic { return BASIC;};
force { return FORCE;};

if { return IF;};
else { return ELSE;};
check_until { return CHECK_UNTIL;};
break { return BREAK;};
continue { return CONTINUE;};
__FIX__ { return FIX;};
__USE__ { return USE;};
__HARDWARE__ { return HARDWARE;};
__GPU__ { return GPU;};
__CPU__ { return CPU;};
__OS__ { return OS;};

fix { return FIX;};
return { return RETURN;};
try { return TRY;};
catch { return CATCH;};
typeof { return TYPEOF;};
class { return CLASS;};
extends { return EXTENDS;};
inherit { return INHERITS;};
hidden { return HIDDEN;};
deg {  return DEG;}
= { return ASSIGN;}
\+ { return ADD_OP;}
- { return SUB_OP;}
\/ { return DIV_OP;}
\* { return MULT_OP;}
\^ { return POW_OP;}
% { return MOD_OP;}
\| { return ABS_OP;}
\+= { return COMP_ASSIGN_ADD;}
-= { return COMP_ASSIGN_SUBTRACT;}
\*= { return COMP_ASSIGN_MUL;}
\\= { return COMP_ASSIGN_DIV;}
\< { return LESS_THAN;}
\<= { return LESS_THAN_EQ;}
\> { return GREAT_THAN;}
\>= { return GREAT_THAN_EQ;}
[ \t]+ {  /* Ignore whitespace */ }
[\n] { printf("New line detected\n");}

(_)*({alphabet})({alphabet}|{number}|(_))*  { return VAR;}

. { };
%%

int yywrap(){ 
    return 1;
}



