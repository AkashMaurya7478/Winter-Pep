#include <iostream>
using namespace std;
int * fun(){
    int *x = new int(10);
    return x; //returning address of local variable (dangerous)


}

int main(){
    int *danglingPtr = fun(); //dangling pointer

    cout<<"Dangling Pointer value: "<<*danglingPtr<<endl; //undefined behavior

    delete danglingPtr; //freeing the allocated memory
    danglingPtr = nullptr; //nullifying the pointer after deleting
    cout<<"Dangling Pointer after deleting: "<<danglingPtr<<endl;
}