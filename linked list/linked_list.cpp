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
void print(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    system("cls");
    // statically creation of node
    Node n1(1);
    Node *head = &n1;
    Node n2(2);
    n1.next = &n2; // linking second node to first
    cout << n1.data << "  " << n1.next << endl
         << n2.data << "  " << n2.next << endl;
    cout << head->data << endl; //-> is used to excess the data at given pointer
    // dynamiclly creation of node
    Node *n3 = new Node(3);
    n2.next = n3;
    cout << n3->data << endl;
    Node n4(8);
    n3->next = &n4;
    Node n5(19);
    n4.next = &n5;
    cout << "your linked list is \n";
    Node *temp=head;
    while (temp != NULL)// printing the linked list
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }
    cout << endl;
    //ideal way of using linked list
    Node *node1 = new Node(10);
    Node *node2 = new Node(20);
    Node *node3 = new Node(30);
    Node *node4 = new Node(40);
    Node *node5 = new Node(50);
    Node *head1=node1;
    node1->next=node2;
    node2->next=node3;
    node3->next=node4;
    node4->next=node5;
    print(head1);
}