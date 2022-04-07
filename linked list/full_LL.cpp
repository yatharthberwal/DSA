#include <iostream>
#include <cstring>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
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
void print(Node *head)
{
    if(head==NULL){
        cout<<"your linked list is empty\n";
        return;
    }
    Node *temp = head;
    cout << "your linked list is-\n";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int lenght(Node *head)
{
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}
Node *insection(Node *head, int data, int i)
{
    if (i > lenght(head))
    {
        cout << "wrong index try again\n";
        return head;
    }
    Node *node = new Node(data);
    if (i == 0)
    {
        node->next=head;
        return node;
    }
    Node *temp = head;
    while (i != 1)
    {
        temp = temp->next;
        --i;
    }
    Node *a = temp->next;
    temp->next = node;
    node->next = a;
    return head;
}
Node *delection(Node *head, int i)
{
    if(i>=lenght(head)){
        cout<<"wrong index try again\n";
        return head;
    }
    if(lenght(head)==1){
        delete(head);
        return NULL;
    }
    Node *temp = head;
    int count = 0;
    if (i == 0)
        return head->next;
    while (temp != NULL && count < i - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp != NULL&&temp->next!=NULL)
    {
        Node *a = temp->next;
        temp->next = a->next;
        delete a;
    }
    return head;
}
void middle(Node* head){
    int len=lenght(head);
    if(len<=2){
        cout<<head->data<<endl;
    }
    else{
        Node* temp=head;
        for(int i=0;i<len/2-1;i++){
            temp=temp->next;
        }
        cout<<temp->data<<endl;
    }
}
int main()
{
    system("cls");
    int a;
    Node *head = takeinput();
    cout << "1)print\n2)lenght\n3)insert an element\n4)delete\n5)middle element\n6)exit\n";
    cin >> a;
    while (a > 0 && a < 6)
    {
        system("cls");
        if (a == 1)
        {
            print(head);
        }
        if (a == 2)
        {
            int len = lenght(head);
            cout << "lenght of linked list is = " << len << endl;
        }
        if (a == 3)
        {
            int data, i;
            cout << "enter the data and index\n";
            cin >> data >> i;
            head = insection(head, data, i);
        }
        if (a == 4)
        {
            if(head==NULL){
                cout<<"your linked list is already empty\n";
            }
            else{
            int b;
            cout<<"enter the index you want to delete\n";
            cin>>b;
            head=delection(head,b);
            }
        }
        if(a==5){
            cout<<"middle element is = ";
            middle(head);
            cout<<endl;
        }
        cout << "1)print\n2)lenght\n3)insert an element\n4)delete\n5)middle element\n6)exit\n";
        cin >> a;
    }
    system("cls");
    cout<<"\tTHANK YOU FOR VISITING\n\t     VISIT AGAIN";
}