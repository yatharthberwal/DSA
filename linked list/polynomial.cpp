#include <iostream>
#include <cstring>
using namespace std;
class polynomial{
    public:
    int deg;
    int coff;
    
};
int main()
{
    system("cls");
    int a,b;
    cout<<"enter the degree of polynomial\n";
    cin>>a;
    cout<<"enter the degree of polynomial\n";
    cin>>b;
    int *first=new int[a];
    int *second=new int[b]; 
    cout<<"enter the first polynomial\n";
    for(int i =0;i<a;i++)
        cin>>first[i];
    cout<<"enter the second polynomial\n";
    for(int i =0;i<b;i++)
        cin>>second[i];
    system("cls");

}