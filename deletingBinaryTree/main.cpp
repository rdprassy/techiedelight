#include <iostream>
#include<queue>
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


void deleteBinaryTree(Node *&pNode);
void deleteBinaryTreeIterative(Node *&pNode);

int main() {
//    std::cout << "Hello, World!" << std::endl;


    Node *x = nullptr;
    x= new Node(13);
    x->left = new Node(14);
    x->right = new Node(15);
    x->left->left = new Node(16);
    x->left->right = new Node(17);
    x->right->left = new Node(18);
    x->right->right = new Node(19);


//    deleteBinaryTree(x);
    deleteBinaryTreeIterative(x);

    if(x == nullptr){
        cout<<"binary tree is deleted successfully"<<endl;
    }
    else{
        cout<<" binary tree is not deleted successfully"<<endl;
    }


    return 0;
}

void deleteBinaryTree(Node *&z) {


    if(z == nullptr){

        return;
    }
    deleteBinaryTree(z->left);
    deleteBinaryTree(z->right);

    delete z;

    z = nullptr;


}

void deleteBinaryTreeIterative(Node *&root) {

    if(root == nullptr){

        return;
    }

    queue<Node*> q;
    q.push(root);


    while(!q.empty()){

            Node *z = q.front();
            q.pop();
            if (z->left != nullptr) {
                q.push(z->left);
            }
            if (z->right != nullptr) {
                q.push(z->right);
            }
            delete z;



        }

    root = nullptr;

    }



