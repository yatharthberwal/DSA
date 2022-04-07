#include <iostream>
#include <cstring>
using namespace std;
class fraction
{
public:
    int num;
    int deno;
    fraction(int num, int deno)
    {
        this->num = num;
        this->deno = deno;
    }
    void simplyfy()
    {
        int hcf = 1;
        if (num > deno)
        {
            for (int i = 1; i < deno; i++)
                if (num % i == 0 && deno % i == 0)
                    hcf = i;
        }
        if (num < deno)
        {
            for (int i = 1; i < num; i++)
                if (num % i == 0 && deno % i == 0)
                    hcf = i;
        }
        num = num / hcf;
        deno = deno / hcf;
    }
    fraction operator+ const(fraction f2){
        int d = deno * f2.deno;
        num = (d / deno) * num;
        f2.num = (d / f2.deno) * f2.num;
        fraction ft(num+f2.num,d);
        return ft;
    }
    void print()
    {
        cout << "your answer is-\n"<< num << "/" << deno << endl;
    }
};
int main()
{
    system("cls");
    int n1, n2, d1, d2, c;
    cout << "enter the first fraction number\n";
    cin >> n1 >> d1;
    cout << "enter the second fraction number\n";
    cin >> n2 >> d2;
    fraction const f1(n1, d1);
    fraction f2(n2, d2);
    f1.simplyfy();
    f2.simplyfy();
    fraction f3 = f1 + f2;
    f3.simplyfy();
    f3.print();
    f1.print();
    f2.print();
}