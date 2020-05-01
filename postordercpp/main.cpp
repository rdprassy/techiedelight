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


void postorderrec(Node *pNode);



void postorderiterOpti(Node *pNode);

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

    postorderrec(x);

    cout<<"-------------";

    cout<<"-------------";

    postorderiterOpti(x);

    return 0;
}




void postorderiterOpti(Node *z) {

    if (z == nullptr)
        return;

    stack<Node *> st;
    //st.push(z);
    Node *current = z;
    st.push(current);
    stack<Node *> out;

    while (!st.empty()) {

        current = st.top();
        st.pop();
        out.push(current);
        if (current->left)
            st.push(current->left);

        if (current->right)
            st.push(current->right);

    }

    while (!out.empty()) {
        current = out.top();
        out.pop();
        cout<<current->value<<" ";


    }
}

void postorderrec(Node *z) {

    if(z== nullptr){
        return;
    }

    postorderrec(z->left);



    postorderrec(z->right);
    cout<<z->value<<" ";


}
