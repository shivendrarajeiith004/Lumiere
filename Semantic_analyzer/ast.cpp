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
    ELEMENT_TYPE type;

    // Literal(int i) : value(i) {}
    // Literal(char c) : value(c) {}
    // Literal(bool b) : value(b) {}
    Literal(int i) : value(i), type(ELEMENT_TYPE::INT) {}
    Literal(char c) : value(c), type(ELEMENT_TYPE::CHAR) {}
    Literal(bool b) : value(b), type(ELEMENT_TYPE::BOOL) {}
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
    OPERATOR my_operator;
    ASTNode* left;
    ASTNode* right;

    BinaryOperation(OPERATOR o, ASTNode* l, ASTNode* r) : my_operator(o), left(l), right(r) {}
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

class Evaluator : public ASTVisitor {
  std::map<int, SymbolTableVAR*> symbolTablesList;
  int currScope;
  ELEMENT_TYPE returnType;
  std::variant<int, float, bool> returnValue;

  Evaluator(std::map<int, SymbolTableVAR*> s, int c = 0, ELEMENT_TYPE e, std::variant<int, float, bool> r) : symbolTablesList(s), currScope(c), returnType(e), returnValue(r) {}
  Evaluator(std::map<int, SymbolTableVAR*> s, int c = 0) : symbolTablesList(s), currScope(c) {}
  
  void visit(Conditional &node) override {
    // inside the condition there should be checks seeing whether the return type is bool or not
    node.condition->accept(*this);

    // for the true and false branches it just returns nothing so there need not be any checks inside them
    node.true_branch->accept(*this);
    if (node.false_branch != nullptr){
      node.false_branch->accept(*this);
    }
  }

  void visit(Literal &node) override {
    returnType = node.type;
    if(node.type == ELEMENT_TYPE::INT){
      returnValue = std::get<int>(node.value);
    }
    else if(node.type == ELEMENT_TYPE::CHAR){
      returnValue = std::get<int>(node.value);
    }
    else if(node.type == ELEMENT_TYPE::BOOL){
      returnValue = std::get<int>(node.value);
    }
  }

  void visit(Variable &node) override {
    DataRecord *data = get_var(symbolTablesList, node.name, currScope);
    if(data == nullptr){
      throw std::runtime_error("Undefined Variable hai bro... \n-_-\n");
    }
    returnType = data->getElementType();
  }

  void visit(BinaryOperation &node) override {
    /*
      Algorithm is that we will first check the left statement and then the right 
      statement and then check the equality of the types of both the sides and then
      say everything is alright.
      
      I havent handled typecasting at the moment over here.
    */
    // it has to verified inside the expression that it is a arithemetic expression
    node.left->accept(*this);
    ELEMENT_TYPE returnType_left = returnType;
    auto returnValue_left = returnValue;
    // it has to verified inside the expression that it is a arithemetic expression
    node.right->accept(*this);
    ELEMENT_TYPE returnType_right = returnType;
    auto returnValue_right = returnValue;
    if (returnType_left != returnType_right){
      throw std::runtime_error("The types of LHS and RHS are not same bro \n-_-\n");
    }
    else{
      returnType = returnType_left;
      if(node.my_operator == OPERATOR::ADD) {
        returnValue = std::get<int>(returnValue_left) + std::get<int>(returnValue_right);
      }
      else if(node.my_operator == OPERATOR::SUB) {
        returnValue = std::get<int>(returnValue_left) - std::get<int>(returnValue_right);
      }
      else if(node.my_operator == OPERATOR::MUL) {
        returnValue = std::get<int>(returnValue_left) * std::get<int>(returnValue_right);
      }
      else if(node.my_operator == OPERATOR::DIV) {
        returnValue = std::get<int>(returnValue_left) / std::get<int>(returnValue_right);
      }
      else if(node.my_operator == OPERATOR::AND) {
        returnValue = std::get<bool>(returnValue_left) && std::get<bool>(returnValue_right);
      }
      else if(node.my_operator == OPERATOR::OR) {
        returnValue = std::get<bool>(returnValue_left) || std::get<bool>(returnValue_right);
      }
      else if(node.my_operator == OPERATOR::GT) {
        returnValue = std::get<int>(returnValue_left) > std::get<int>(returnValue_right);
      }
      else if(node.my_operator == OPERATOR::LT) {
        returnValue = std::get<int>(returnValue_left) < std::get<int>(returnValue_right);
      }
      else if(node.my_operator == OPERATOR::EQ) {
        returnValue = std::get<int>(returnValue_left) == std::get<int>(returnValue_right);
      }
    }
  }
};

int main(){
  return 0;
}

