%{
#include <stdio.h>
%}

%%
[0-9]+ { yylval = atoi(yytext); return DECIMAL; };
([0-9]+\.[0-9]+) {yylval= atof(yytext); return POINT;};


int {return INT;};
float {return FLOAT;};
char {return CHAR;};
boolean {return BOOLEAN;};
string {return STRING;};
vec {return VECTOR;};
cluster {return CLUSTER;};
void {return VOID;};
Body {return BODY;};
%%