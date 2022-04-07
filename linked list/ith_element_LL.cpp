#include <iostream>
#include <cstring>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
    Node(int data){
        this->data=data;
        next=NULL;
    }

};
Node* take_input(){
    int data;
    Node *head=NULL;
    Node *tail=NULL;
    cout<<"enter the linked list element\n";
    cin>>data;
    while(data!=-1){
        Node *noda= new Node(data);
        if(head==NULL){
            head=noda;
            tail=noda;
        }
        else{
            tail->next=noda;
            tail=noda;
        }
        cin>>data;
    }
    return head;
}
void print(Node *head){
    Node * temp=head;
    cout<<"your linked lsit is - \n";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void printIthNode(Node *head, int i)
{
    //Write your code here
    int len =0;
    while(head!=NULL){
        if(len==i){
            cout<<head->data;
            break;
        }
        else{
			head=head->next;
            len++;
        }
    }
}
int main()
{
    system("cls");
    int i;
    Node *head=take_input();
    print(head);
    cout<<"enter the ith element you want to print\n";
    cin>>i;
    printIthNode(head,i);
}