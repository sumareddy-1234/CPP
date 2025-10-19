#include<iostream>
using namespace std;
class Node{
    public:
    int Data;
    Node* Next;
    Node(int Value){
        Data=Value;
        Next=NULL;
    }
};
int main(){
    Node* Head=new Node(0);
    Node* Temp=Head;
    int N;
    cout<<"Enter Number of Elements:";
    cin>>N;
    for(int i=0;i<N;i++){
        int Userdata;
        cout<<"Enter Element"<<i+1<<" ";
        cin>>Userdata;
        Node* Newnode=new Node(Userdata);
        Temp->Next=Newnode;
        Temp=Newnode;
        cout<<endl;
    }
    int Count=1;
    int position;
    int is;
    cout<<"enter the element you want to insert";
    cin>>is;
    cout<<"enter the position";
    cin>>position;
    Temp=Head;
    while(Count!=position){
        Temp=Temp->Next;
        Count++;
    }
    Node* Newnode=new Node(is);
    Node*Thirdnode=Temp->Next;
    Temp->Next=Newnode;
    Newnode->Next=Thirdnode;
    cout<<"After inserting: ";
     Head=Head->Next;
    Temp=Head;
    while(Temp!=NULL){
        cout<<Temp->Data<<" ";
        Temp=Temp->Next;
    }
    
    return 0;
}
