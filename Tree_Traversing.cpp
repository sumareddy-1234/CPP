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
    Node* leftchild1=new Node(20); //left child of it's parent leftchild
    Node* leftchild2=new Node(33); //right child of it's parent leftchild
    Node* rightchild1=new Node(52); //left child of it's parent rightchild
    Node* rightchild2=new Node(72); //right child of it's parent rightchild
    parent->left=leftchild;
    leftchild->left=leftchild1;
    leftchild->right=leftchild2;
    rightchild->left=rightchild1;
    rightchild->right=rightchild2;
    parent->right=rightchild;
    Node* temp=parent;
    while(temp!=NULL){
    	cout<<temp->data<<endl;
    	temp=temp->left;
	}
    

    return 0;
}
