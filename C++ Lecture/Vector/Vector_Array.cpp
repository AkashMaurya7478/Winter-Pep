#include <iostream>
#include <vector>
using namespace std;
int main(){
    // vector<int> v; //Empty Vector
    // vector<int> a(5); //Vector of size 5 with default values 0
    // vector<int> b(5, 10); //Vector of size 5 with all values 10
    vector<int> c = {1, 2, 3, 4, 5}; //Vector initialized with values

    c.push_back(23); //Adding element at the end
    c.push_back(16);
    c.push_back(12);
    cout<<"Size of vector c: "<<c.size()<<endl;
    cout<<"Elements of vector c: ";
    for(int i = 0; i<c.size(); i++){
        cout<<c[i]<<" ";
    }

    // cout<<endl;

    // for(auto element : c){
    //     cout<<element<<" ";
    // }

    cout<<endl;
    // c.pop_back(); //Removes last element
    // for(int element : c){
    //     cout<<element<<" ";
    // }
    cout<<endl;
    for(int i = 0; i<c.size();i++){
        
        c.pop_back();
        
    }

    if (c.empty()){
        cout<<"Vector v is empty"<<endl;
    }else{
        cout<<"Vector v is not empty"<<endl;
    }
}