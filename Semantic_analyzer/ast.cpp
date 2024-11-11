#include <iostream>

class Code_Block{};

class Conditional_Block : public Code_Block{
};

class Expression_Block : public Code_Block {
};

class Reserved_Block : public Code_Block {
};

template <typename T>
class Node{
  T* curr;
  T* next;

  Node(){
    curr = nullptr;
    next = nullptr;
  }

  Node(T* new_curr){
    curr = new_curr;
    next = nullptr;
  }

  Node(T* new_curr, T* new_next){
    curr = new_curr;
    next = new_next;
  }

};

template <typename T>
class Linked_List{
public:
  Node<T>* head;
  Node<T>* tail;

  Linked_List(){
    head = nullptr;
    tail = nullptr;
  }

  void push_back(T new_block){
    if (new_block == nullptr){
      std::cout << "Can not read a NULL block" << std::endl;
      return;
    }
    Node<T>* new_node = new Node<T>;
    new_node->curr = new_block;
    if(head == nullptr){
      head = new_node;
      tail = new_node;
    }
    else{
      tail->next = new_node;
      tail = new_node;
    }
  }
};

typedef struct Start{
  Linked_List<Expression_Block> decl_blocks;
  Linked_List<Conditional_Block> cond_blocks;
  Linked_List<Reserved_Block> reserved_blocks;
};

int main(){

}