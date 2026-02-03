#include <iostream>
#include <vector>
#include <map>
using namespace std;

void Intersection(vector<int> &H1,vector <int> &H2){
map<int , int> MyMap;
for(int num:H1){
    MyMap[num]++;
}
// map<int,int> MyMap1;
for(int num1: H2){
    MyMap[num1]++;
}
for(auto it:MyMap){
    if(it.second>1){
        cout<<it.first<<" ";
    }
}
cout<<endl;

MyMap[10] = 99;
MyMap[11] = 111;
cout<<"Size: "<<MyMap.size()<<endl;
auto it = MyMap.find(19);
if(it != MyMap.end()){
    cout<<"Erasing: "<<endl;
    MyMap.erase(it);
}
else{
    cout<<"Key is Not Found"<<endl;
}
cout<<"Size after erasing: "<< MyMap.size()<<endl;

}
void PrintIntersectionContainsDuplicate(vector<int> &K1,vector <int> &K2){
    map<int ,int> myMap;
    for(int val : K1){
        myMap[val]++;
    }
    vector<int> out;
    for(int val2: K2){
        auto it = myMap.find(val2);
        if(it != myMap.end()){
            out.push_back(val2);
            myMap.erase(it);
        }
    }
    for(int value: out){
        
    }
}

int main(){
    
    vector<int> H1 = {1,2,3,4,5};
    vector<int> H2 = {3,4,6,7};
    vector<int> K1 = {1,6,1,6,4,5,1,4};
    vector<int> K2 = {4,1,3,6,4,6};
    Intersection(H1,H2);
    PrintIntersectionContainsDuplicate(K1,K2);
    return 0;
 }