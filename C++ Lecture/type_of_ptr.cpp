#include <iostream>
using namespace std;

int * fun(){
    int x = 10;
    return &x; //returning address of local variable (dangerous)
}
int main(){
    // int a = 10;
    // double f = 23.65;
    // char c = 'A';

    // void *ptr = &a;
    // cout<<"address of a using void pointer: "<<ptr<<endl;
    // cout<<"value of a using void pointer: "<<*(int*)ptr<<endl;

    // void *ptr1 = &f;
    // cout<<"address of f using void pointer: "<<ptr1<<endl;
    // cout<<"value of f using void pointer: "<<*(double*)ptr1<<endl;

    // void *ptr2 = &c;
    // cout<<"address of c using void pointer: "<<ptr2<<endl;
    // cout<<"value of c using void pointer: "<<*(char*)ptr2<<endl;
    // //Void pointer not Supported for arithmetic operations because it doesn't know the type of data it is pointing to.


    // //Dangling Pointer
    // int *val = new int(45); //dynamic memory allocation
    // cout<<"Value of val: "<<*val<<endl;
    // cout<<"Address of val: "<<val<<endl;
    // delete val; //deallocating memory
    // val = NULL; //nullifying the pointer after deleting
    // if(val != NULL){
    //     cout<<"Value of val after deleting: "<<*val<<endl;
    // }
    // else{
    //     cout<<"val is a null pointer now."<<endl;
    // }

    // int *danglingPtr = fun(); //dangling pointer
    // cout<<"Dangling Pointer value: "<<*danglingPtr<<endl; //undefined behavior

    int *dn;
    {
        int a = 10;
        dn = &a; //dangling pointer
    }
    cout<<"Dangling Pointer value: "<<*dn<<endl; //undefined behavior
    

}