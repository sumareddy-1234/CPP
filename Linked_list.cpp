#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
int main(){
    Node* newnode1=new Node(10);
    Node* newnode2=new Node(20);
    Node* newnode3=new Node(30);
    newnode1->next=newnode2;
    newnode2->next=newnode3;
    Node* temp=newnode1;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}
