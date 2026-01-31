#include <iostream>
#define PI 3.14
using namespace std;
class Area{
    public:
    //Static Binding 
    //All the functions or members of the  class are resolved at compile time
    int circleArea(int radius){
        int area = PI * radius *radius;
        return area;
    };

    int calculateArea(int length, int breadth){
        int area = length * breadth;
        return area;
    };

};

class Sum{
    public:
    int add(int a){
        int val = 10;
        return a + val;
    }

    int add(int a, int b){
        return a + b;
    }
    int add(int *arr,int n){
        int sum = 0;
        for(int i=0;i<n;i++){
            sum += arr[i];
        }
        return sum;
    }
};

int main(){
    Area a;
    cout<<"Area of Circle: "<<a.circleArea(5)<<endl;
    cout<<"Area of Rectangle: "<<a.calculateArea(5,10)<<endl;
    Sum s;
    cout<<"Sum of 1 number: "<<s.add(5)<<endl;
    cout<<"Sum of 2 number: "<<s.add(5,15)<<endl;
    int arr[] = {1,2,9,4,5};
    cout<<"Sum of array: "<<s.add(arr,5)<<endl;
}