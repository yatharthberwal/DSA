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
    Node *temp = head;
    cout << "your linked list is\n";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *append(Node *head, int n)
{
    Node *temp1 = head;
    Node *temp2 = head;
    Node *a = NULL;
    if (n == 0||head==NULL)
    {
        return head;
    }
    while (n > 1)
    {
        temp1 = temp1->next;
        --n;
    }
    while (temp2->next != NULL)
    {
        temp2 = temp2->next;
    }
    temp2->next=head;
    a=temp1->next;
    temp1->next=NULL;
    return a;
}
int main()
{
    system("cls");
    Node *head = takeinput();
    print(head);
    int a;
    cout << "enter the up end index\n";
    cin >> a;
    head = append(head, a);
    print(head);
}