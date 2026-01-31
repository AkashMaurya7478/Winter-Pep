#include <iostream>
using namespace std;
class DynamicArray {
    int *arr;
    int nextIndex;
    int capacity;
    int i;
public:

    DynamicArray(){
        capacity = 1;
        arr = new int [capacity];
        nextIndex = 0;
        
    }

    
    void push_back(int element){
        if (nextIndex == capacity){
            capacity = 2 * capacity;
            int *newArr = new int [capacity];
            for(int i = 0; i<nextIndex;i++){
                newArr[i] = arr[i];
            }
            delete [] arr;
            arr = newArr;

        }
        arr[nextIndex] = element;
        nextIndex++;
    

    }

    void pop_back(){
        if(nextIndex>0){
            nextIndex--;
        }

    }
    int operator[](int i){
        if(i>=nextIndex){
            cout<<"Array Index out of bound"<<endl;
            return -1;
        }
        return arr[i];
    };
    int get_size(){
        return nextIndex;
    }

    ~DynamicArray(){
        delete [] arr;
    }
};

int main(){

    DynamicArray d1;
    d1.push_back(10);
    d1.push_back(20);
    d1.push_back(30);
    d1.push_back(40);

    int size = d1.get_size();
    for(int i = 0; i<size;i++){
        cout<<d1[i]<<" " <<endl;
    }
    cout<<endl;
    d1.pop_back();
    for(int i = 0; i<d1.get_size();i++){
        cout<<d1[i]<<" "<<endl;
    }


}