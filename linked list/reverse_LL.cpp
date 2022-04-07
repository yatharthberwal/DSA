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
void printReverse(Node *head)
{
    //Write your code here
    if(head==NULL){
        return;
    }
    else{
        printReverse(head->next);
        cout<<head->data<<" ";
    }
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

int main()
{
    system("cls");
    Node *head = takeinput();
    print(head);
    cout<<"reversed linked list\n";
    printReverse(head);
}