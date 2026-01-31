#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array:";
    cin >> n;
    int *arr = new int[n]; //dynamic memory allocation
    cout << "Enter the elements of array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }
    cout<<"Size of ptr:"<<sizeof(arr)<<endl;
    delete[] arr; //deallocating the memory
}