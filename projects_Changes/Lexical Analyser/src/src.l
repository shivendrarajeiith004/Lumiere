%{
#include <stdio.h>
#include <stdlib.h>
extern FILE * yyin;
int lineno = 1;
FILE* inputFile;
FILE* outputFile;
%}

digit [0-9]
blanks [ \t]*
letter  [a-zA-Z_]
value (\+|\-)?(({digit}+\.{digit}+)|{digit}+)
assign_operator =
reserved_type "mass"|"init_vel"|"final_vel"|"accl"|"init_pos"|"final_pos"|"init_time"|"final_time"
reserved_keyword "if"|"else if"|"else"|"check_until"|"return"
library "library"
include "include"
int "int"
function "function"
function_name {letter}+
hash \# 
semicolon ;
left_parenthesis \(
right_parenthesis \)
left_brace \[
right_brace \]
left_curly_brace \{
right_curly_brace \}
less_than \<
greater_than \>
%%
{value}                     {fprintf(outputFile,"<value: %f>",atof(yytext));}
{assign_operator}           {fprintf(outputFile,"<assign_operator>");}
{reserved_type}             {fprintf(outputFile,"<reserved_operator: %s>",yytext);}
{reserved_keyword}          {fprintf(outputFile,"<reserved_keyword : %s>",yytext);}
\n                          { fprintf(outputFile,"<newline>\n");lineno++;fprintf(outputFile,"\n{LINE NO : %d}\n",lineno);}
{blanks}                    {/*to be ignored..*/}
{semicolon}                 {fprintf(outputFile,"<semicolon>");}
{include}                   {fprintf(outputFile,"<include>");}
{int}                       {fprintf(outputFile,"<int>");}
{library}                   {fprintf(outputFile,"<library: %s>",yytext);}/*should always be above than function_name*/
{function}                  {fprintf(outputFile,"<function>");}
{function_name}             {fprintf(outputFile,"<function_name: %s",yytext);}
{hash}                      {fprintf(outputFile,"<hash>");}
{less_than}                 {fprintf(outputFile,"<less_than>");}
{greater_than}              {fprintf(outputFile,"<greater_than>");}
{left_parenthesis}          {fprintf(outputFile,"<left_parent>");}
{right_parenthesis}         {fprintf(outputFile,"<right_parent>");}
{left_brace}                {fprintf(outputFile,"<left_brace>");}
{right_brace}               {fprintf(outputFile,"<right_brace>");}
{left_curly_brace}          {fprintf(outputFile,"<left_curly_brace>");}
{right_curly_brace}         {fprintf(outputFile,"<right_curly_brace>");}

%%

int yywrap(){
    return 1;
}
int main(){
    
    inputFile = fopen("../test/inp.txt", "r");
    outputFile = fopen("../test/out.txt", "w");
    fprintf(outputFile,"{LINE NO : %d}\n",lineno);
    yyin = inputFile;
    yylex();
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}