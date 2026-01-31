#include <iostream>
using namespace std;

int sumOfArr(int arr[], int size){
    if(size == 0){
        return 0;

    }
    //recursive case
    int sum = sumOfArr(arr, size - 1);
    return sum + arr[size - 1];
} 
int main(){
    int arr[5] = {10,20,30,40,50};
    int size = sizeof(arr)/sizeof(arr[0]);
    int out = sumOfArr(arr, size);
    
    }

    
