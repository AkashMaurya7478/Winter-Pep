#include <iostream>
using namespace std;
int main(){
    int age = 25;
    int *ptr = &age;
    cout<<"Address of age variable: "<<ptr<<endl;
    int age1 = 30;
    ptr = &age1; //ptr can point to another variable
    cout<<"Address of new age variable: "<<ptr<<endl;

    const int *cptr = &age; //pointer to constant integer
    cout<<"Address of age using cptr: "<<cptr<<endl;
    cout<<"Value of age: "<<age<<endl;
    *cptr = *cptr + 5; //error: cannot modify value through cptr
    cout<<"New value of age: "<<age<<endl;

    int anotherAge = 35;
    cptr = &anotherAge; //cptr can point to another variable
    cout<<"Address of anotherAge using cptr: "<<cptr<<endl;


    int t = 40;
    int *const constPtr = &t; //constant pointer to integer
    cout<<"Address of t using constPtr: "<<constPtr<<endl;
    *constPtr = *constPtr + 5; //modifying value through constPtr
    cout<<"New value of t: "<<t<<endl;
}