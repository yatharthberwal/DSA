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
    int data;
    Node *head=NULL;
    Node *tail=NULL;
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
    Node *temp = head;
    cout << "your linked list is-\n";
    while (temp != NULL)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }
    cout << endl;
}
Node *insection(Node *head, int data, int i)
{
    Node *temp = head;
    int count = 0;
    Node *node = new Node(data);
    if(i==0){
       node->next=temp;
       head=node;
       return head; 
    }
    while (temp != NULL && count < i - 1)
    {
        temp=temp->next;
        count++;
    }
    if(temp!=NULL){
        node->next=temp->next;
        temp->next=node;
    }
    return head;
}
int main()
{
    system("cls");
    int data, i;
    Node *head = takeinput();
    print(head);
    cout << "enter the element and place\n";
    cin >> data >> i;
    head = insection(head, data, i);
    cout << "linked list after insection\t";
    print(head);
}