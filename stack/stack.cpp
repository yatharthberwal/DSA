#include <iostream>
#include <cstring>
using namespace std;
class Stack
{
    int *data;
    int nextindex;
    int capacity;

public:
    Stack()
    {
        data = new int[5];
        nextindex = 0;
        capacity = 5;
    }
    int size()
    {
        return nextindex;
    }
    bool isempty()
    {
        return nextindex==0;
    }
    void push(int element)
    {
        if (nextindex == capacity)
        {
            int *newdata=new int[capacity+5];
            for(int i =0;i<capacity;i++)
                newdata[i]=data[i];
            capacity += 5;
            delete []data;
            data=newdata;
        }
        data[nextindex] = element;
        nextindex++;
    }
    int pop()
    {
        if (isempty())
        {
            cout << "stack is empty\n";
            return INT8_MIN;
        }
        nextindex--;
        return data[nextindex];
    }
    int top()
    {
        if (isempty())
        {
            cout << "stack is empty\n";
            return INT8_MIN;
        }
        return data[nextindex - 1];
    }
};
int main()
{
    system("cls");
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    cout << s.isempty() << endl;
    cout << "the size of stack is " << s.size() << endl;
    cout << s.pop() << " is removed from stack\n";
    cout << s.pop() << " is removed from stack\n";
    cout << s.pop() << " is removed from stack\n";
    cout << s.pop() << " is removed from stack\n";
    cout << s.pop() << " is removed from stack\n";
    cout << s.isempty() << endl;
    cout << "size of stack is " << s.size() << endl;
}