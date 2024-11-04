#include <iostream>

class Code_Block{};

class Asgn_Block : public Code_Block{
};

class Expr_Block : public Code_Block{
};

template <typename T>
class Node{
  T* curr;
  T* next;
};

template <typename T>
class Linked_List{
public:
  Node<T>* head;
  Node<T>* tail;

  void push_back(T new_block){
    Node<T>* new_node = new Node<T>;
    new_node->curr = new_block;
    if(head == nullptr){
      head = new_node;
      tail = new_node;
    }else{
      tail->next = new_node;
      tail = new_node;
    }
  }
};

typedef struct Start{
  Linked_List<Asgn_Block> asgn_blocks;
  Linked_List<Expr_Block> decl_blocks;
};

int main(){

}