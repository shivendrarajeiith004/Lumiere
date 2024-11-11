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
assign_operator \=
equal_operator \=\=
not_equal_operator \!\=
greater_than_equal_to_operator \>\=
less_than_equal_to_operator \<\=
reserved_type "mass"|"init_vel"|"final_vel"|"accl"|"init_pos"|"final_pos"|"init_time"|"final_time"|body
reserved_keyword "if"|"else if"|"else"|"check_until"
/*string \"[^\"]*\" anything written between this " and this " */
return "return"
connectTo "connectTo"
variable "variable"
library "library"
include "include"
int "int"
function "function"
console "console"
hash \# 
semicolon ;
comma \,
join_operator \.
left_parenthesis \(
right_parenthesis \)
left_brace \[
right_brace \]
left_curly_brace \{
right_curly_brace \}
less_than \<
greater_than \>
add_operator \+
sub_operator \-
mult_operator \*
div_operator  \/
cmpd_add_operator \+\=
cmpd_sub_operator \-\=
cmpd_mult_operator \*\=
cmpd_div_operator \/\=
and_operator \&\&
or_operator  \|\|
identifier {letter}({letter}|{digit})*
comment \/\*[^\*\/]*\*\/    
string \"[^\"\n]*\"

%%
{value}                     { fprintf(outputFile,"<value: %f>",atof(yytext));}
{assign_operator}           { fprintf(outputFile,"<assign_operator>");}
{reserved_type}             { fprintf(outputFile,"<reserved_operator: %s>",yytext);}
{reserved_keyword}          { fprintf(outputFile,"<reserved_keyword : %s>",yytext);}
\n                          { fprintf(outputFile,"<newline>\n");lineno++;fprintf(outputFile,"\n{LINE NO : %d}\n",lineno);}
{blanks}                    {/*to be ignored..*/}
{semicolon}                 { fprintf(outputFile,"<semicolon>");}
{return}                    { fprintf(outputFile,"<return>");}
{include}                   { fprintf(outputFile,"<include>");}
{connectTo}                 { fprintf(outputFile,"<connectTo>");}
{int}                       { fprintf(outputFile,"<int>");}
{library}                   { fprintf(outputFile,"<library: %s>",yytext);}/*should always be above than function_name*/
{function}                  { fprintf(outputFile,"<function>");}
{console}                   { fprintf(outputFile,"<console>");}
{variable}                  { fprintf(outputFile,"<variable>");} /*variable is only used to store value not the type of the value*/
{string}                    { fprintf(outputFile,"<string: %s>", yytext);}
{comment}                   { fprintf(outputFile,"<comment: %s>", yytext);}
{identifier}                { fprintf(outputFile,"<identifier: %s>",yytext);}
{comma}                     { fprintf(outputFile, "<comma>");}
{join_operator}             { fprintf(outputFile,"<join_operator>");}
{hash}                      { fprintf(outputFile,"<hash>");}
{less_than}                 { fprintf(outputFile,"<less_than>");}
{greater_than}              { fprintf(outputFile,"<greater_than>");}
{left_parenthesis}          { fprintf(outputFile,"<left_parent>");}
{right_parenthesis}         { fprintf(outputFile,"<right_parent>");}
{left_brace}                { fprintf(outputFile,"<left_brace>");}
{right_brace}               { fprintf(outputFile,"<right_brace>");}
{left_curly_brace}          { fprintf(outputFile,"<left_curly_brace>");}
{right_curly_brace}         { fprintf(outputFile,"<right_curly_brace>");}
{and_operator}              { fprintf(outputFile,"<and_operator>");}
{or_operator}               { fprintf(outputFile,"<or_operator>");}
{add_operator}              { fprintf(outputFile,"<add_operator>");}
{sub_operator}              { fprintf(outputFile,"<sub_operator>");}
{mult_operator}             { fprintf(outputFile,"<mult_operator>");}
{div_operator}              { fprintf(outputFile,"<div_operator>");}
{cmpd_add_operator}         { fprintf(outputFile,"<cmpd_add_operator>");}
{cmpd_sub_operator}         { fprintf(outputFile,"<cmpd_sub_operator>");}
{cmpd_mult_operator}        { fprintf(outputFile,"<cmpd_mult_operator>");}
{cmpd_div_operator}         { fprintf(outputFile,"<cmpd_div_operator>");}
{equal_operator}            { fprintf(outputFile,"<equal_operator>");}
{not_equal_operator}        { fprintf(outputFile,"<not_equal_operator>");}

{greater_than_equal_to_operator} { fprintf(outputFile,"<greater_than_equal_to_operator>");}
{less_than_equal_to_operator} { fprintf(outputFile,"<less_than_equal_to_operator>");}        
%%

int yywrap(){
    return 1;
}
int main(int argc, char** argv){
    
    inputFile = fopen(argv[1], "r");
    outputFile = fopen(argv[2], "w");
    fprintf(outputFile,"{LINE NO : %d}\n",lineno);
    yyin = inputFile;
    yylex();
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}
