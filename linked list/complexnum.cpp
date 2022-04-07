#include <iostream>
#include <cstring>
using namespace std;
class ComplexNumbers
{
    // Complete this class
public:
    int real;
    int imag;
    ComplexNumbers(int real, int imag)
    {
        this->real = real;
        this->imag = imag;
    }
    void print()
    {
        if (imag > 0)
            cout << this->real << " + i" << this->imag << endl;
        if (imag < 0)
        {
            imag = imag * -1;
            cout << this->real << " - i" << this->imag << endl;
        }
    }
    int plus(ComplexNumbers c2)
    {
        real = real + c2.real;
        imag = imag + c2.imag;
    }
    int multiply(ComplexNumbers c2)
    {
        int a,b;
        a=real;
        b=imag;
        real = (a * c2.real) - (b * c2.imag);
        imag = (a * c2.imag) + (b * c2.real);
    }
};

int main()
{
    system("cls");
    int real1, imaginary1, real2, imaginary2;
    cout << "enter the real and imaginary part\n";
    cin >> real1 >> imaginary1;
    cout << "enter the real and imaginary part\n";
    cin >> real2 >> imaginary2;

    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);

    int choice;
    cout << "select a option\n1) plus\n2) multiply\n";
    cin >> choice;

    if (choice == 1)
    {
        c1.plus(c2);
        cout << "result\n";
        c1.print();
    }
    else if (choice == 2)
    {
        c1.multiply(c2);
        cout << "result\n";
        c1.print();
    }
    else
    {
        return 0;
    }
}