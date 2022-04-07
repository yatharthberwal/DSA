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
Node* takeinput(){
    Node*head=NULL;
    Node*tail=NULL;
    int data;
    cout<<"enter the data\n";
    cin>>data;
    while(data!=-1){
        Node*node=new Node(data);
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
    cout<<"your linked list is\n";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int findNode(Node *head, int n){
    // Write your code here.
    Node* temp=head;
    int count=0;
    if(temp==NULL){
        return -1;
    }
    while(temp!=NULL){
        if(n==temp->data){
            return count;
        }
        else{
            temp=temp->next;
            count++;
        }
    }
    if(temp==NULL){
        return -1;
    }
}
int main()
{
    system("cls");
    Node* head=takeinput();
    print(head);
    int a;
    cout<<"enter the element you want to find\n";
    cin>>a;
    int pos=findNode(head,a);
    cout<<pos<<endl;
}