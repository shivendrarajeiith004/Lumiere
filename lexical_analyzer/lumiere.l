%{
#include <stdio.h>
#include "parser.tab.h"
%}

%%
[0-9]+ { yylval = atoi(yytext); return INTEGER; };
([0-9]+\.[0-9]+) {yylval= atof(yytext); return DOUBLE;};



int {return INT;};
float {return FLOAT;};
char {return CHAR;};
boolean {return BOOLEAN;};
string {return STRING;};
vec {return VECTOR;};
cluster {return CLUSTER;};
void {return VOID;};


body {return BODY;};
basic {return BASIC;};
force {return FORCE;};


if {return IF;};
else {return ELSE;};
check_until {return CHECK_UNTIL;};
break {return BREAK;};
continue {return CONTINUE;};
__FIX__ {return FIX;};
__USE__ {return USE;};
__HARDWARE__ {return HARDWARE;};
__GPU__ {return GPU;};
__OS__ {return OS;};

fix {return FIX;};
return {return RETURN;};
try {return TRY;};
catch {return CATCH;};
typeof {return TYPEOF;};
class {return CLASS;};
extends {return EXTENDS;};
inherit {return INHERITS;};
hidden {return HIDDEN;};
deg { return DEG;}

\+ {return ADD_OP;}
- {return SUB_OP;}
\/ {return DIV_OP;}
\* {return MULT_OP;}
\^ {return POW_OP;}
% {return MOD_OP;}
\| {return ABS_OP;}
\+= {return COMP_ASSIGN_ADD;}
-= {return COMP_ASSIGN_SUBTRACT;}
\*= {return COMP_ASSIGN_MUL;}
\= {return COMP_ASSIGN_ADD;}
\< {return LESS_THAN;}
\<= {return LESS_THAN_EQ;}
\> {return GREAT_THAN;}
\>= {return GREAT_THAN_EQ;}



%%







