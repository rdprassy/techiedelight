#include <iostream>
using namespace std;

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


int heightOfBinaryTree(Node *pNode);

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
    y->right->left->right = new Node(29);

    int finalheight = heightOfBinaryTree(y);

   cout <<finalheight<<endl;

    return 0;
}

int heightOfBinaryTree(Node *root) {

    if (root == nullptr){
        return 0;
    }
    return(1+max(heightOfBinaryTree(root->left),heightOfBinaryTree(root->right)));

}
