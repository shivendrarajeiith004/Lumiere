#ifndef AST_H
#define AST_H

#include <iostream>
#include <cstring>
#include <vector>
#include <memory>
#include <optional>
#include <map>
#include <unordered_map>


extern int yylineno, yycolumn;

// Forward declarations
class Node;
class CMPND_STATEMENT;
class STATEMENT;
class CONDITIONAL_STATEMENT;
class IF_STATEMENT;
class ELSE_STATEMENT;
class ELSEIF_STATEMENT;
class LOOP_STATEMENT;
class INITIAL_CONDITION;
class PREPROCESSOR_DECLERATION;
class FUNCTION_DECLERATION;
class EXPRESSION;
class ARITHMETIC_EXP;
class MUL_EXP;
class POW_EXP;
class CAST_EXP;
class UNARY_EXPRESSION;
class PRIMARY_EXP;
class BOOLEAN_EXP;
class RELATIONAL_EXP;
class FACTOR;
class PARAMETER_LIST;
class PARAMETER;
class DECLARATION;
class CONSTANT;
class ASSIGNMENT;
class TYPE;
using namespace std;
// Abstract base class for all nodes
class Node
{
public:
    Node();
    virtual ~Node() = default;
    virtual void print() const = 0;
};

// Compound statement
class CMPND_STATEMENT : public Node
{
public:
    vector<STATEMENT> statements;
    CMPND_STATEMENT(vector<STATEMENT> statements);
    void print() const override;
};

// Generic statement class
class STATEMENT : public Node
{
public:
    virtual void print() const override = 0;
};

// Conditional statement
class CONDITIONAL_STATEMENT : public STATEMENT
{
public:
    IF_STATEMENT ifStmt;
    ELSE_STATEMENT elseStmt;
    std::vector<ELSEIF_STATEMENT> elseifStmts;
    CONDITIONAL_STATEMENT(const IF_STATEMENT &ifStmt, const std::vector<ELSEIF_STATEMENT> &elseifStmts, const ELSE_STATEMENT &elseStmt)
        : ifStmt(ifStmt), elseifStmts(elseifStmts), elseStmt(elseStmt) {}
    void print() const override;
    CONDITIONAL_STATEMENT(const IF_STATEMENT &ifStmt, const ELSE_STATEMENT &elseStmt)
        : ifStmt(ifStmt), elseStmt(elseStmt) {}

    CONDITIONAL_STATEMENT(const IF_STATEMENT &ifStmt)
        : ifStmt(ifStmt) {}
    CONDITIONAL_STATEMENT() = default;
};

// If statement
class IF_STATEMENT : public STATEMENT
{
public:
    std::unique_ptr<BOOLEAN_EXP> condition;
    std::unique_ptr<CMPND_STATEMENT> body;

    IF_STATEMENT(const IF_STATEMENT &other)
        : condition(other.condition ? std::make_unique<BOOLEAN_EXP>(*other.condition) : nullptr),
          body(other.body ? std::make_unique<CMPND_STATEMENT>(*other.body) : nullptr) {}

    void print() const override;
};

// Else statement
class ELSE_STATEMENT : public STATEMENT
{
public:
    
    void print() const override;
};

// Else-if statement
class ELSEIF_STATEMENT : public STATEMENT
{
public:
    std::unique_ptr<BOOLEAN_EXP> condition;
    std::unique_ptr<CMPND_STATEMENT> body;

    ELSEIF_STATEMENT(const BOOLEAN_EXP &condition, const CMPND_STATEMENT &body)
        : condition(std::make_unique<BOOLEAN_EXP>(condition)),
          body(std::make_unique<CMPND_STATEMENT>(body)) {}

    ELSEIF_STATEMENT(const ELSEIF_STATEMENT &other)
        : condition(other.condition ? std::make_unique<BOOLEAN_EXP>(*other.condition) : nullptr),
          body(other.body ? std::make_unique<CMPND_STATEMENT>(*other.body) : nullptr) {}

    void print() const override;
};

// Loop statement
class LOOP_STATEMENT : public STATEMENT
{
public:
    std::unique_ptr<INITIAL_CONDITION> initCondition;
    std::unique_ptr<CMPND_STATEMENT> body;
    LOOP_STATEMENT( std::unique_ptr<INITIAL_CONDITION> initCondition,std::unique_ptr<CMPND_STATEMENT> body);
    void print() const override;
};

// Preprocessor declaration
class PREPROCESSOR_DECLERATION : public STATEMENT
{
public:
    std::string type;
    std::string var;
    PREPROCESSOR_DECLERATION( std::string type,std::string var);
    void print() const override;
};

// Function declaration
class FUNCTION_DECLERATION : public STATEMENT
{
public:
    std::string returnType;
    std::string name;
    std::unique_ptr<PARAMETER_LIST> parameters;
    std::unique_ptr<CMPND_STATEMENT> body;
    FUNCTION_DECLERATION(std::string returnType,std::string name,std::unique_ptr<PARAMETER_LIST> parameters,std::unique_ptr<CMPND_STATEMENT> body);
    void print() const override;
};

// Expression base class
class EXPRESSION : public Node
{
public:
    virtual void print() const override = 0;
};

// Arithmetic expression
class ARITHMETIC_EXP : public EXPRESSION
{
public:
    void print() const override;
};

// Relational expression
class RELATIONAL_EXP : public EXPRESSION
{
public:
    void print() const override;
};

// Boolean expression
class BOOLEAN_EXP : public EXPRESSION
{
public:
    void print() const override;
};

// Declaration statement
class DECLARATION : public STATEMENT
{
public:
    std::string type;
    std::vector<std::string> variables;
    DECLARATION( std::string type,std::vector<std::string> variables);
    void print() const override;
};

// Assignment statement
class ASSIGNMENT : public STATEMENT
{
public:
    std::string var;
    std::unique_ptr<EXPRESSION> expression;
    ASSIGNMENT(std::string var,std::unique_ptr<EXPRESSION> expression);
    void print() const override;
};

// Type class for holding type information
class TYPE : public Node
{
public:
    std::string typeName;
    TYPE(std::string typeName);
    void print() const override;
};

// Factor class (for literal values, variables, etc.)
class FACTOR : public EXPRESSION
{
public:
    std::unique_ptr<PRIMARY_EXP> primary;
    FACTOR(std::unique_ptr<PRIMARY_EXP> primary);
    void print() const override;
};

// Primary expression class (could be a literal, variable, or grouped expression)
class PRIMARY_EXP : public EXPRESSION
{
public:
    std::string value;
    PRIMARY_EXP(std::string value);
    void print() const override;
};

// Parameter list
class PARAMETER_LIST : public Node
{
public:
    std::vector<std::unique_ptr<PARAMETER>> parameters;
    PARAMETER_LIST(std::vector<std::unique_ptr<PARAMETER>> parameters);
    void print() const override;
};

// Parameter
class PARAMETER : public Node
{
public:
    std::string type;
    std::string name;
    PARAMETER(std::string type, std::string name);
    void print() const override;
};

// Constant class
class CONSTANT : public EXPRESSION
{
public:
    std::string value;
    CONSTANT(std::string value);
    void print() const override;
};

// Multiplication expression
class MUL_EXP : public ARITHMETIC_EXP
{
public:
    std::unique_ptr<EXPRESSION> left;
    std::unique_ptr<EXPRESSION> right;
    MUL_EXP(std::unique_ptr<EXPRESSION> left, std::unique_ptr<EXPRESSION> right);
    void print() const override;
};

// Power expression
class POW_EXP : public ARITHMETIC_EXP
{
public:
    std::unique_ptr<EXPRESSION> base;
    std::unique_ptr<EXPRESSION> exponent;
    POW_EXP(std::unique_ptr<EXPRESSION> base, std::unique_ptr<EXPRESSION> exponent);
    void print() const override;
};

// Cast expression
class CAST_EXP : public EXPRESSION
{
public:
    std::unique_ptr<EXPRESSION> expression;
    std::string type;
    CAST_EXP(std::unique_ptr<EXPRESSION> expression, std::string type);
    void print() const override;
};

// Unary expression
class UNARY_EXPRESSION : public EXPRESSION
{
public:
    std::unique_ptr<EXPRESSION> expression;
    UNARY_EXPRESSION(std::unique_ptr<EXPRESSION> expression);
    void print() const override;
};
// Implement other classes similarly...

#endif // AST_H
