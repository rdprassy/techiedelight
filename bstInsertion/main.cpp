#include <iostream>

using namespace std;

struct Node{
    int value;
    Node* left;
    Node* right;

    Node(int value){
        this->value = value;
        this->left = nullptr;
        this->right = nullptr;


    }
};


Node* insert(int t, Node *pNode);
void insertModified(int t, Node *&pNode);
void insertIterative(int t, Node *&pNode);

void inorder(Node *pNode);

Node* newNode(int value){

    Node* z = new Node(value);

    return z;

}





int main() {
//    std::cout << "Hello, World!" << std::endl;

int keys[] = {20,24,16,18,29,27,13};

Node * root = nullptr;

//    for(int t :keys){
//      insert(t,root);
//
//    }
//    for(int t :keys){
//   insertModified(t,root);
//
//    }

    for(int t :keys){
        insertIterative(t,root);

    }

inorder(root);
    return 0;
}

void inorder(Node *root) {

    if(root == nullptr){
        return;
    }
    inorder(root->left);
    cout<<root->value << " ";
    inorder(root->right);

}

Node* insert(int t, Node *root) {

    if(root == nullptr){

        root = newNode(t);
        return root;
    }

    if(t < root->value ){
        root ->left =insert(t, root->left);
    }
    else if(t>=root->value ){
        root ->right =insert(t, root->right);
    }


    return root;

}

void insertModified(int t, Node *&root) {

    if(root == nullptr){

        root = newNode(t);
        return;
//        return root;
    }

    if(t < root->value ){
      insertModified(t, root->left);
    }
    else if(t>=root->value ){
       insertModified(t, root->right);
    }



}

void insertIterative(int t, Node *&root) {

    if (root == nullptr) {

        root = newNode(t);
        return;
//        return root;
    }

    Node *current = root;
    Node *parent = nullptr;


    while (current != nullptr) {
        parent = current;


    if (t < current->value) {
        current = current->left;
    } else if (t >= current->value) {
        current = current->right;
    }

    }

    if(t < parent->value ){
    parent->left = newNode(t);}
else {
        parent->right = newNode(t);
    }


}
