#include <iostream>
#include <cstring>
using namespace std;
class member{
    public:
    static int total;
    int roll;
    int age;
    static int code;
    static int strenght(){
        return total;
    }
    member(int roll,int age){
        this->roll=roll;
        this->age=age;
        total++;
    }
    void print(){
        cout<<age<<"  "<<roll<<"  "<<code<<endl;
    }
};
    int member :: total=0;
    int member :: code = 101;
int main()
{
    system("cls");
    member a(1,17),b(2,18);
    cout<<a.total<<endl;//can excess the 
    cout<<member::strenght()<<endl;//use to excess the static property
    member c(3,18),d(4,19),e(5,17);
    cout<<a.total<<endl;
    cout<<member::strenght()<<endl; 
    a.print();
    b.print();
    a.code=201;//we can change the static value by any of the object
    c.print();
    d.print();
    e.print();

}