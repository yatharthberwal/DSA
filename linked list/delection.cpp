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
    cout << "enter data\n";
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
Node *delection(Node *head, int i)
{
    Node *temp = head;
    int count = 0;
    if(head==NULL)

    if (i == 0)
    {
        head = head->next;
        return head;
    }
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
int main()
{
    system("cls");
    int i;
    Node *head = takeinput();
    print(head);
    cout << "enter the position you want delete\n";
    cin >> i;
    head = delection(head, i);
    cout << "linked list after delection\t";
    print(head);
}