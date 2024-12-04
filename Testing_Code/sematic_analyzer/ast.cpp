#include "ast.h"

LOOP_STATEMENT::LOOP_STATEMENT(std::unique_ptr<INITIAL_CONDITION> initCondition, std::unique_ptr<CMPND_STATEMENT> body)
{
    this->initCondition = std::move(initCondition);
    this->body = std::move(body);
}

PREPROCESSOR_DECLERATION::PREPROCESSOR_DECLERATION( std::string type,std::string var)
{
   this->type=type;
   this->var=var;
}

FUNCTION_DECLERATION::FUNCTION_DECLERATION(std::string returnType,std::string name,std::unique_ptr<PARAMETER_LIST> parameters,std::unique_ptr<CMPND_STATEMENT> body)
{
   this->returnType=returnType;
   this->name=name;
   this->parameters=std::move(parameters);
   this->body=std::move(body);
}
DECLARATION::DECLARATION( std::string type,std::vector<std::string> variables)
{
    this->type=type;
    this->variables=variables;
}
ASSIGNMENT::ASSIGNMENT(std::string var,std::unique_ptr<EXPRESSION> expression)
{
   this->var=var;
   this->expression=std::move(expression);
}
TYPE::TYPE(std::string typeName)
{
    this->typeName=typeName;
}

FACTOR::FACTOR(std::unique_ptr<PRIMARY_EXP> primary)
{
    this->primary=std::move(primary);
}
PRIMARY_EXP::PRIMARY_EXP(std::string value)
{
    this->value=value;
}
 PARAMETER_LIST::PARAMETER_LIST(std::vector<std::unique_ptr<PARAMETER>> parameters)
 {
    this->parameters=std::move(parameters);
 }

 PARAMETER::PARAMETER(std::string type, std::string name)
 {
    this->type=type;
    this->name=name;
 }

CONSTANT::CONSTANT(std::string value)
{
    this->value=value;
}

MUL_EXP::MUL_EXP(std::unique_ptr<EXPRESSION> left, std::unique_ptr<EXPRESSION> right)
{
    this->left=std::move(left);
    this->right=std::move(right);
}

POW_EXP::POW_EXP(std::unique_ptr<EXPRESSION> base, std::unique_ptr<EXPRESSION> exponent)
{
    this->base=std::move(base);
    this->exponent=std::move(exponent);
}

CAST_EXP::CAST_EXP(std::unique_ptr<EXPRESSION> expression, std::string type)
{
    this->type=type;
    this->expression=std::move(expression);
}
UNARY_EXPRESSION::UNARY_EXPRESSION(std::unique_ptr<EXPRESSION> expression)
{
    this->expression=std::move(expression);
}
