#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int var = 450;

    //&-->Address of the opretor

    int *op = new int(23);
    cout<<op + 1<<endl;
    
    int *ptr = &var;
    cout << "Value of var: " << var << endl;
    cout <<"Value of var using dereferencing: " << *ptr <<  endl;
    cout << "Address of var: " << ptr << endl;
    cout <<"Adress of var using & operator: " << &var << endl;
    *ptr = *ptr + 1;
    *ptr += 2;
    (*ptr)++;
    cout << "New Value of var after updating using pointer: " << var << endl;
    cout<<sizeof(ptr)<<endl;

    double d = 34.56;
    double *dptr = &d;
    cout << "Value of d: " << d << endl;
    cout <<"Value of d using dereferencing: " << *dptr << endl;
    cout << "Address of d: " << dptr << endl;
    cout <<"Address of d using & operator: " << &d << endl;
    cout<<sizeof(d)<<endl;

    char ch = 'A';
    char *chptr = &ch;
    cout << "Value of ch: " << ch << endl;
    cout <<"Value of ch using dereferencing: " << *chptr << endl;
    cout << "Address of ch: " << (void*)chptr << endl;
    cout <<"Address of ch using & operator: " << (void*)&ch << endl;
}