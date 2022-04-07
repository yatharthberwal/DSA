#include <iostream>
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
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
Node *takeinput()
{
    Node *head = NULL;
    Node *tail = NULL;
    int data;
    cout << "enter the data\n";
    cin >> data;
    while (data != -1)
    {
        Node *node = new Node(data);
        if (head == NULL)
        {
            head = node;
            tail = node;
        }
        else
        {
            tail->next = node;
            tail = node;
        }
        cin >> data;
    }
    return head;
}
Node* findmid(Node* head){
    if(head==NULL){
        return head;
    }
    Node *slow=head,*fast=head;
    while(fast->next!=NULL&&fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;

}
Node* merge (Node*head1,Node*head2){
    if(head1==NULL)
        return head2;
    if(head2==NULL)
        return head1;
    Node* head=NULL,*tail=NULL;
    if(head1->data<head2->data){
        head=head1;
        tail=head1;
        head1=head1->next;
    }
    else{
        head=head2;
        tail=head2;
        head2=head->next;
    }
    while(head1!=NULL&&head2!=NULL){
        if(head1->data<head2->data){
            tail->next=head1;
            tail=head1;
            head1=head1->next;
        }
        else{
            tail->next=head2;
            tail=head2;
            head2=head2->next;
        }
    }
    if(head1!=NULL)
        tail->next=head1;
    if(head2!=NULL)
        tail->next=head2;
    return head;
}
Node* mergesort(Node* head){
    if(head==NULL||head->next==NULL)
        return head;
    Node* mid=findmid(head);
    Node* half1=head;
    Node* half2=mid->next;
    mid->next=NULL;
    half1=mergesort(half1);
    half2=mergesort(half2);
    Node* finalhead=merge(half1,half2);
    return finalhead;

}
int main()
{
    system("cls");
    Node* head=takeinput();
    cout<<"LL before\n";
    print(head);
    cout<<"LL after\n";
    head=mergesort(head);
    print(head);


}