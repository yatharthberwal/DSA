#include <iostream>
using namespace std;
class student{
    public:
    int roll;
    int age;
};
int main()
{
    system("cls");
    student yatharth, harshit;//default constructor will be called
    yatharth.roll=17;
    yatharth.age=19;
    harshit.roll=18;
    harshit.age=19;
    cout<<yatharth.roll<<endl<<yatharth.age<<endl;
    cout<<harshit.roll<<endl<<harshit.age<<endl;
    //dynamiclly allocate a menber of class
    student *manu=new student;
    cin>>manu->age;
    cout<<manu->age;
    
}