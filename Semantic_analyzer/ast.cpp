#include <iostream>

class Code_Block
{
};

class Asgn_Block : public Code_Block
{
};

class Expr_Block : public Code_Block
{
};

template <typename T>
class Node
{
  T *curr;
  T *next;
};

template <typename T>
class Linked_List
{
public:
  Node<T> *head;
  Node<T> *tail;

  void push_back(T new_block)
  {
    Node<T> *new_node = new Node<T>;
    new_node->curr = new_block;
    if (head == nullptr)
    {
      head = new_node;
      tail = new_node;
    }
    else
    {
      tail->next = new_node;
      tail = new_node;
    }
  }
};

typedef struct Start
{
  Linked_List<Asgn_Block> asgn_blocks;
  Linked_List<Expr_Block> decl_blocks;
};
class IfStatement : public Code_Block
{
public:
  Code_Block *boolean_exp;
  Code_Block *body;

  IfStatement(Code_Block *boolean_exp, Code_Block *body) : boolean_exp(boolean_exp), body(body) {}

  virtual ~IfStatement() = default;
};

class ElseIfStatement : public Code_Block
{
public:
  Code_Block *boolean_exp;
  Code_Block *body;

  ElseIfStatement(Code_Block *boolean_exp, Code_Block *body) : boolean_exp(boolean_exp), body(body) {}

  virtual ~ElseIfStatement() = default;
};

class ElseStatement : public Code_Block
{
public:
  Code_Block *body;

  ElseStatement(Code_Block *body) : body(body) {}

  virtual ~ElseStatement() = default;
};

class ConditionalStatement : public Code_Block
{
public:
  IfStatement *ifStatement;
  ElseIfStatement *elseIfStatement;
  ElseStatement *elseStatement;

  ConditionalStatement(IfStatement *ifStmt, ElseIfStatement *elseIfStmt = nullptr, ElseStatement *elseStmt = nullptr)
      : ifStatement(ifStmt), elseIfStatement(elseIfStmt), elseStatement(elseStmt) {}

  virtual ~ConditionalStatement() = default;
};

int main()
{
}