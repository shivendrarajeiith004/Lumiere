#include <iostream>
#include <memory>
#include <string>
#include <unordered_map>
#include <variant>
#include <optional>
#include <map>
#include "symbol_table.hpp"

class ASTVisitor {
public:
  virtual void visit(Literal &node) = 0;
  virtual void visit(Variable &node) = 0;
  virtual void visit(BinaryOperation &node) = 0;
  virtual void visit(Conditional &node) = 0;
};

class ASTNode{
  public:
    virtual void accept(class ASTVisitor &visitor) = 0;
    virtual ~ASTNode() = default;
};

class Literal : public ASTNode {
  public:
    std::variant<int, char, bool> value;

    Literal(int i) : value(i) {}
    Literal(char c) : value(c) {}
    Literal(bool b) : value(b) {}
    ~Literal() {}

    void accept(class ASTVisitor &visitor) override;
};

class Variable : public ASTNode {
  public:
    std::string name;
    Variable(std::string &n) : name(n) {}
    ~Variable() {}
    void accept(class ASTVisitor &visitor) override;
};

class BinaryOperation : public ASTNode {
  public:
    enum class Operator{
      ADD,
      SUB, 
      MUL,
      DIV,
      AND,
      OR,
      GT,
      LT,
      EQ
    };
    Operator my_operator;
    ASTNode* left;
    ASTNode* right;

    BinaryOperation(Operator o, ASTNode* l, ASTNode* r) : my_operator(o), left(l), right(r) {}
    ~BinaryOperation() {}
    void accept(class ASTVisitor &visitor) override;
};

class Conditional : public ASTNode {
  public:
    ASTNode* condition;
    ASTNode* true_branch;
    ASTNode* false_branch;

    Conditional(ASTNode* c, ASTNode* t) : condition(c), true_branch(t), false_branch(nullptr) {}
    Conditional(ASTNode* c, ASTNode* t, ASTNode* f) : condition(c), true_branch(t), false_branch(f) {}
    ~Conditional() {}
    void accept(class ASTVisitor &visitor) override;
};

class ASTVisitor {
  public:
    virtual void visit(Literal &l) = 0;
    virtual void visit(Variable &l) = 0;
    virtual void visit(BinaryOperation &l) = 0;
    virtual void visit(Conditional &l) = 0;
};

void Literal::accept(ASTVisitor &visitor){
  visitor.visit(*this);
}

void Variable::accept(ASTVisitor &visitor){
  visitor.visit(*this);
}

void BinaryOperation::accept(ASTVisitor &visitor){
  visitor.visit(*this);
}

void Conditional::accept(ASTVisitor &visitor){
  visitor.visit(*this);
}


