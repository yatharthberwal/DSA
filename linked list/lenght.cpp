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
Node*takeinput(){
    Node*head=NULL;
    Node*tail=NULL;
    int data;
    cout<<"enter data\n";
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
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
    cout<<endl;
}
int lenght(Node* head){
    if(head==NULL)
        return 0;
    int len = lenght(head->next)+1;
    return len;
}
int main()
{
    system("cls");
    Node* head=takeinput();
    print(head);
    int a=lenght(head);
    cout<<a<<endl;
}