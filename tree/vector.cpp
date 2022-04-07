#include <iostream>
#include <vector>//vector is a type of user defined data type where the size of array get double when needed
using namespace std;

int main()
{
    system("cls");
    vector<int> v;//this has alot of inbuild functions
    v.push_back(10);//use to insert the element
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);
    cout<<"size: "<<v.size()<<endl;//use to find the size of vector
    cout<<"cap:  "<<v.capacity()<<endl;//use to find the capacity of vector
    for(int i=0;i<v.size();i++)
    {
        cout<<v.at(i)<<"  ";//use to excess the element
    }
    v.pop_back();//use the delete the last element
    v.pop_back();
    cout<<"after delection"<<endl;

    cout<<"size: "<<v.size()<<endl;
    cout<<"cap:  "<<v.capacity()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v.at(i)<<"  ";
    }
}