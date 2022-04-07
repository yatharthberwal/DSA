#include <iostream>
using namespace std;
class Node
{
public:
    string name;
    int age;
    Node *next;
    Node(string name, int age)
    {
        this->name = name;
        this->age = age;
        next = NULL;
    }
};
int lenght(Node * head){
    int len =0;
    Node* temp = head;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}
Node *takeinput(Node *head)
{
    string name;
    int age;
    cout<<"enter name\n";
    cin>>name;
    cout<<"enter age\n";
    cin>>age;
    Node* node= new Node(name,age);
    if(lenght(head)==0){
        return node;
    }
    if(lenght(head)==1){
        head->next=node;
        return head;
    }
    else{
        Node* temp=head;
        while(temp!=NULL){
            temp=temp->next;
        }
        temp->next=node;
        return head;
    }
}
Node* remove(Node* head, int a){
    if(a==-1){
        head=head->next;
        return head;
    }
    Node* temp1 = head;
    while(a!=0){
        temp1=temp1->next;
        --a;
    }
    Node* temp2=temp1->next;
    temp1->next=temp2->next;
    delete(temp2);
    return head;
}
void list(Node * head){
    Node* temp= head;
    cout<<"No.\tName\t\tage\n";
    while(temp!=NULL){
        int i=1;
        cout<<i<<")\t"<<temp->name<<"\t"<<temp->age<<endl;
        temp=temp->next;
        i++;
    }
    cout<<endl;
}
int main()
{
    system("cls");
    Node *head=NULL; 
    cout<<"\twelcome to class register\n";
    cout<<"1)add student\n2)remove student\n3)list of student\n4)check a profile\n5)update a profile\n6)number of student in class\n7)exit\n";
    int a;
    cin>>a;
    while(a<7){
        if(a==1){
            head=takeinput(head);
            system("cls");
        }
        if(a==2){
            cout<<"enter the roll number of student\n";
            int b;
            cin>>b;
            head=remove(head,b-2);
            system("cls");
        }
        if(a==3){
            list(head);
        }
        cout<<"1)add student\n2)remove student\n3)list of student\n4)check a profile\n5)update a profile\n6)number of student in class\n7)exit\n";
        cin>>a;
    }
}