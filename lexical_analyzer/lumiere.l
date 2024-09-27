alphabet  [a-zA-Z] 
underscore [_]
number    [0-9]

%{ 
#include <stdio.h>
#include "y.tab.h"

%}

%%
[0-9]+ {  yylval.intval= atoi(yytext); return INTEGER_VALUE; };
([0-9]+\.[0-9]+) { yylval.floatval= atof(yytext); return DOUBLE_VALUE;};

\".*\" {yylval.stringval = yytext; return STRING_VALUE;}
TRUE { yylval.stringval = yytext; return BOOL_VALUE;} 
FALSE { return BOOL_VALUE;}
const {return CONST;};
int { return INT;};
float { return FLOAT;};
char { return CHAR;};
boolean { return BOOLEAN;};
string { return STRING;};
vec { return VECTOR;};
cluster { return CLUSTER;};
void { return VOID;};
\(  { return LEFT_PAREN;}
\)  { return RIGHT_PAREN;}
\{   { return LEFT_CURLY_BRACE;}
\}  { return RIGHT_CURLY_BRACE;}
\[  { return LEFT_BRACE;}
\]  { return RIGHT_BRACE;}
body { return BODY;};
basic { return BASIC;};
force { return FORCE;};
mass {return MASS;};


sim {return MAIN;};
if { return IF;};
else { return ELSE;};
elif  {return ELSE_IF;}
check_until { return CHECK_UNTIL;};
break { return BREAK;};
continue { return CONTINUE;};
__FIX__ { return FIX;};
__USE__ { return USE;};
__HARDWARE__ { return HARDWARE;};
__GPU__ { return GPU;};
__CPU__ { return CPU;};
__MAC__ { return MAC;};
__OS__ { return OS;};
lib.mech { return LIB_MECH;};

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
\/= { return COMP_ASSIGN_DIV;}
= { return ASSIGN;}
\< { return LESS_THAN;}
\<= { return LESS_THAN_EQ;}
\> { return GREAT_THAN;}
\>= { return GREAT_THAN_EQ;}

\&& { return AND_OP;}
\|\| { return OR_OP;}
\! { return NOT_OP;}
== { return EQUAL_TO;}
!= { return NOT_EQUAL_TO;}

"~".*\n            { return SINGLE_LINE_COMMENT ;};
"/~"([^~]|\~[^/])*"~/"  { return MULTI_LINE_COMMENT; };
[ \t]+ {  /* Ignore whitespace */ }
[\n] { return EOL;}
; {return EOL;};
, {return COMMA;}
(_)*({alphabet})({alphabet}|{number}|(_))*  { return VAR;}
. { };
%%

int yywrap(){ 
    return 1;
}



