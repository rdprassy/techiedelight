#include <iostream>
#include<stack>
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


void printinorderrec(Node *pNode);

void printinorderiter(Node *pNode);

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

    printinorderrec(x);

    printinorderiter(x);

    return 0;
}

void printinorderiter(Node *z) {

    if(z== nullptr)
        return;

    stack<Node *> st;
    st.push(z);
    Node* current = z;

    while(!st.empty() || current!= nullptr){

        if(current!= nullptr){

            st.push(current);
            current = current->left;

        }
        else{
            current = st.top();
            st.pop();
            cout<<current->value<<" ";
            current = current ->right;
        }




    }




}

void printinorderrec(Node *z) {

    if(z== nullptr){
        return;
    }

    printinorderrec(z->left);

    cout<<z->value<<" ";

    printinorderrec(z->right);



}
