#include <iostream>


using namespace std;

class node{};

class node2 : public node{
public:
  int a = 2;
};

int main(){
  node2* n = new node2();
  n->a = 3;
  node* rand = n;
  cout << rand->a << endl;  

}