#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int a;
    cout <<"Enter the number of element:";
    cin>>a;
    int arr[a];
    cout<<"Enter the numbers";
    for(int i = 0;i<a;i++){
        cin>>arr[i];
    }

    // cout<<"Base Address"<<arr<<endl;
    // cout<<"Address of 2nd index element:"<<*(arr+2)<<endl;
    // cout<<"Value at index 2:"<<*(arr+5)<<endl;
    // cout<<&arr[2]<<endl;
    //Creating pointer to array

    int *ptr = arr;
    cout<<"Address using ptr"<<ptr<<endl;
    cout<<"Element at 4th index using ptr:"<<*(ptr+3)<<endl;
}