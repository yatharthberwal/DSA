#include <iostream>
#include <cstring>
using namespace std;
class student{
public:
    int age;
    int roll;
    char *name;
    student(int age, int roll, char *name)
    {
        this -> age = age;
        this -> roll = roll;
        //shallow copy
        //this ->name=name;
        //deep copy
        this -> name = new char[strlen(name)+1];
        strcpy(this->name,name);
    }
    void print(){
        cout << "s1  "<<name<<"  " <<age << "  " <<roll<< endl;
    }
};
int main()
{
    system("cls");
    // default constructor
    student s1(19, 17,"abc"); 
    s1.print();
    //cout << "s1  "<<s1.name<<"  " << s1.age << "  " << s1.roll<< endl;
    student s2(s1); // copy constructor
    cout << "s2  "<<s1.name<<"  " << s2.age << "  " << s2.roll<<endl;
    student s3(18,15,"xyz");
    cout << "s3 before  "<<s2.name<<"  " << s3.age << "  " << s3.roll<<endl;
    s3 = s1; // copy operator
    cout << "s3 after  "<<s3.name<<"  " << s3.age << "  " << s3.roll<<endl;
}