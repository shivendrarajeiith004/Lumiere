%{
#include <stdio.h>
#include <stdlib.h>
#include "y.tab.h"

//extern FILE * yyin;
//int lineno = 1;
//FILE* inputFile;
//FILE* outputFile;
//int lineno= 1;
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
{value}                     {return VALUE;}
{assign_operator}           {return ASSIGN_OPERATOR;}
{reserved_type}             {return RESERVED_TYPE;}
{reserved_keyword}          {return RESERVED_KEYWORD;}
\n                          {yylineno++;}
{blanks}                    {}
{semicolon}                 {return SEMICOLON;}
{include}                   {return INCLUDE;}
{return}                    {return RETURN;}
{connectTo}                 {return CONNECT_TO;}
{int}                       {return INT;}
{library}                   {return LIBRARY;}/*should always be above than function_name*/
{function}                  {return FUNCTION;}
{console}                   {return CONSOLE;}
{variable}                  {return VARIABLE;} /*variable is only used to store value not the type of the value*/
{string}                    {return STRING;}
{comment}                   {return COMMENT;}
{identifier}                {return IDENTIFIER;}
{comma}                     {return COMMA;}
{join_operator}             {return JOIN_OPERATOR;}
{hash}                      {return HASH;}
{less_than}                 {return LESS_THAN;}
{greater_than}              {return GREATER_THAN;}
{left_parenthesis}          {return LEFT_PARENT;}
{right_parenthesis}         {return RIGHT_PARENT;}
{left_brace}                {return LEFT_BRACE;}
{right_brace}               {return RIGHT_BRACE;}
{left_curly_brace}          {return LEFT_CURLY_BRACE;}
{right_curly_brace}         {return RIGHT_CURLY_BRACE;}
{and_operator}              {return AND_OPERATOR;}
{or_operator}               {return OR_OPERATOR;}
{add_operator}              {return ADD_OPERATOR;}
{sub_operator}              {return SUB_OPERATOR;}
{mult_operator}             {return MULT_OPERATOR;}
{div_operator}              {return DIV_OPERATOR;}
{cmpd_add_operator}         {return CMPD_ADD_OPERATOR;}
{cmpd_sub_operator}         {return CMPD_SUB_OPERATOR;}
{cmpd_mult_operator}        {return CMPD_MULT_OPERATOR;}
{cmpd_div_operator}         {return CMPD_DIV_OPERATOR;}
{equal_operator}            {return EQUAL_OPERATOR;}
{not_equal_operator}        {return NOT_EQUAL_OPERATOR;} 
{greater_than_equal_to_operator} {return GE_OPERATOR;}
{less_than_equal_to_operator} {return LE_OPERATOR;}        
%%

int yywrap(){
    return 1;
}
