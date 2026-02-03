#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    unordered_set <int> Uset = {1,5,6,3,7,4,51,4};
    Uset.insert(10);
    auto it = Uset.find(99);
    if(it != Uset.end()){
        cout<<" 99 is Present"<<endl;

    }else{
        cout<<"Element is not present"<< endl;
    }

    cout <<"Print: "<<endl;
    for(auto it1 : Uset){
        cout<<it1<<" ";
    }
}