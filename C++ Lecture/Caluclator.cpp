#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a;
    cout << "Enter the 1st Num:";
    cin >> a;
    int b;
    cout << "Enter the 2nd Num:";
    cin >> b;
    char choice;
    cout << "Enter the choice:";
    cin >> choice;

    switch (choice)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '/':
        if (b != 0)
        {
            cout << a / b << endl;
        }
        else
        {
            cout << "Devision By Zero Not Allow";
        }
        break;
    case '*':
        cout << a * b << endl;
        break;
    default:
        cout << "Invalid opreator";
    }
}