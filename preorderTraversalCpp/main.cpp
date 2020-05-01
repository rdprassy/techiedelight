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


void preorderrec(Node *pNode);

void preorderiter(Node *pNode);

void preorderiterOpti(Node *pNode);

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

    preorderrec(x);

    cout<<"-------------";

    preorderiter(x);
    cout<<"-------------";

    preorderiterOpti(x);

    return 0;
}

void preorderiter(Node *z) {

    if(z== nullptr)
        return;

    stack<Node *> st;
    //st.push(z);
    Node* current = z;
    st.push(current);

    while(!st.empty() ){



            current = st.top();
            st.pop();
            cout<<current->value<<" ";
            if(current->right)
           st.push(current->right);

            if(current->left)
           st.push(current->left);







    }




}


void preorderiterOpti(Node *z) {

    if (z == nullptr)
        return;

    stack<Node *> st;
    //st.push(z);
    Node *current = z;
    st.push(current);

    while (!st.empty()) {

        if (current != nullptr) {
            cout << current->value << " ";

            if (current->right)
                st.push(current->right);

            current = current->left;
        } else {

            current = st.top();
            st.pop();

        }


    }
}

void preorderrec(Node *z) {

    if(z== nullptr){
        return;
    }
    cout<<z->value<<" ";
    preorderrec(z->left);



    preorderrec(z->right);



}
