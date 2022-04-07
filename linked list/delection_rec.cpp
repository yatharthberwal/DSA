#include <iostream>
#include <cstring>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
};
Node*takeinput(){
    Node* head=NULL;
    Node* tail=NULL;
    int data;
    cout<<"enter the data\n";
    cin>>data;
    while(data!=-1){
        Node* node=new Node(data); 
        if(head==NULL){
            head=node;
            tail=node;
        }
        else{
            tail->next=node;
            tail=node;
        }
        cin>>data;
    }
    return head;
}
void print(Node* head){
    Node* temp=head;
    cout<<"your linked list\n";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
Node* delection(Node* head,int i){
    if(head==NULL){
        return head;
    }
    if(i==0){
        Node* a=head;
        head=a->next;
        delete a;
        return head;
    }
    else{
        head->next=delection(head->next,i-1);
        return head;
    }
}
int main()
{
    system("cls");
    int i;
    Node* head=takeinput();
    print(head);
    cout<<"enter the psoition you want to delete\n";
    cin>>i;
    head=delection(head, i);
    cout<<"after delection\t";
    print(head);
}