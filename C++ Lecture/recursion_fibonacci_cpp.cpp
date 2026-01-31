#include <iostream>
using namespace std;

int fibonacci(int n){
    //base case
    if(n <= 1){
        return n;
    }

    int first = fibonacci(n-1);
    int second = fibonacci(n-2);
    
    //recursive case
    return first + second;
}

int main(){

    int n;
    cout<<"Enter a positive integer: ";
    cin>>n;
    int result = fibonacci(n);
    cout<<"Fibonacci of "<<n<<" is: "<<result<<endl;
}