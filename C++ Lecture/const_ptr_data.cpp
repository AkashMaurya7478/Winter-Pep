#include <iostream>
using namespace std;
int main(){
    int a = 10;
    const int* const ptr = &a; // pointer to constant integer
    int b = 20;
    // ptr = &b; // ptr can point to another variable
    *ptr = *ptr + 5; // error: cannot modify value through ptr
}
