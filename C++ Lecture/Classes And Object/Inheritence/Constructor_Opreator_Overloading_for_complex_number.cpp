#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class Complex
{
    int real, imag;

public:
    Complex(int r=0, int i=0)
    {
        real = r;
        imag = i;
    }

    Complex operator + (const Complex &ot)
    {
        Complex res;
        res.real = real + ot.real;
        res.imag = imag + ot.imag;
        return res;
    }

    void display()
    {
        cout << "Complex Number: " << real << " + " << imag << "i" << endl;
    }
};

int main()
{

    Complex c1(3,8);
    Complex c2(8,7);
    Complex c3 = c1 + c2; // Using overloaded + operator
    c3.display();
    return 0;
}