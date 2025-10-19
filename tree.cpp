#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

int main() {
    Node* parent=new Node(45);
    Node* leftchild=new Node(22);
    Node* rightchild=new Node(62);
    parent->left=leftchild;
    parent->right=rightchild;
    cout<<parent->data<<endl;
    cout<<parent->left->data<<endl;
    cout<<parent->right->data<<endl;
    

    return 0;
}
