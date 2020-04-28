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
        cout<<"Not identical"<<endl;
    }



    return 0;
}

bool isIdentical(Node *x, Node *y) {
    if(x==nullptr && y==nullptr){
        return true;
    }
    else if(x== nullptr){
        return false;
    }
    else if(y== nullptr){
        return false;
    }

    stack<pair<Node*,Node*>> st;
    st.push({x,y});

    while(!st.empty()){
        Node* x1 = st.top().first;
        Node* y1 = st.top().second;
        st.pop();

        if(x1->left && y1->left ){
            st.push({x1->left,y1->left});
        }
        else if(x1->left || y1->left){
            return false;
        }

        if(x1->right && y1->right ){
            st.push({x1->right,y1->right});
        }
        else if(x1->right || y1->right){
            return false;
        }

        if(x1->value!= y1->value){
            return false;
        }



    }


// if we reach here we believe both are identical
    return true;
}


