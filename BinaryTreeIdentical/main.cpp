#include <iostream>

using namespace  std;


struct Node{
    int value;
    Node* left;
   Node* right ;
    Node(int value){
        this->value = value;
        this->left = nullptr;
        this->right = nullptr;
    }
};

bool isIdentical(Node *pNode, Node *pNode1);

int main() {
//    std::cout << "Hello, World!" << std::endl;
Node *x = nullptr;
x= new Node(13);
x->left = new Node(14);
x->right = new Node(15);
x->left->left = new Node(16);
x->left->left = new Node(17);
x->right->left = new Node(18);
x->right->left = new Node(19);



    Node *y = nullptr;
    y= new Node(13);
    y->left = new Node(14);
    y->right = new Node(15);
    y->left->left = new Node(16);
    y->left->left = new Node(17);
    y->right->left = new Node(18);
    y->right->left = new Node(19);

    if(isIdentical(x,y)){
        cout<<"identical"<<endl;
    }
    else{
        cout<<"Not identidal"<<endl;
    }


    return 0;
}

bool isIdentical(Node *x, Node *y) {

    if(x==nullptr && y==nullptr){
        return true;
    }
    if(x->value != y->value){
        return false;
    }


    return (x&&y)&&(isIdentical(x->left,y->left))&&isIdentical(x->right,y->right);

  //  return false;
}
