#include <iostream>
using namespace std;
template <typename T, typename V> // name the template and we can have multipe template
class Pair
{
    T x;
    V y;

public:
    void setX(T x)
    {
        this->x = x;
    }
    T getX() // function type should be of same template
    {               
        return x;
    }
    void setY(V y)
    {
        this->y = y;
    }
    V getY()
    {
        return y;
    }
};
int main()
{
    system("cls");
    Pair<int,char> a;//we can declare the data type at the time of allocation
    a.setX(10);
    a.setY('a');
    cout << a.getX() << " " << a.getY() << endl;
    Pair<char,int> b;
    b.setX('b');
    b.setY(20);
    cout << b.getX() << " " << b.getY() << endl;
    //we can pass user defined type into a templates
    Pair<Pair<int,float>, char> p3;
    p3.setY('c');
    Pair<int, float> p4;//then we have to create that data type which we want in p3
    p4.setX(10);
    p4.setY(10.5);
    p3.setX(p4);//we will have to pass p4 cz we are setting x of p3 of pair type
    cout<<p3.getX().getX()<<"  "<<p3.getX().getY()<<"  "<<p3.getY()<<endl;
    //   this will print p4 x     this will print p4 y
}
