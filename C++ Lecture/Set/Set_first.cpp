#include <iostream>
#include <set>
using namespace std;
int main(){
    //Duplicate Not Allow
    //Store in sorted order
    set<int> mySet = {1,2,3,4,5,6};
    mySet.insert(5);
    mySet.insert(10);
    mySet.insert(15);
    mySet.insert(20);
    set <string> mySet1;
    mySet1.insert("Akula");
    mySet1.insert("Ram");
    mySet1.insert("Kalo");
    mySet1.insert("Halku");

    set<string> :: iterator it;
    for(it = mySet1.begin();it !=mySet1.end(); it++){
        cout<<*it<<endl;
    }
    cout <<"Printing My Set: "<<endl;
    for(auto it : mySet){
        cout <<it<<endl;
    }
    auto it1 = mySet1.find("Mohan");
    if(it1 != mySet1.end()){
        cout <<"Mohan Exist"<<endl;
    }else{
        cout<<"Mohan is not present in set: "<<endl;
    }
    auto it2 = mySet1.find("Ram");
    mySet1.erase(it2);
    mySet1.erase(mySet1.begin());
    cout<<"Updated Set: "<<endl;
    for(auto val : mySet1){
        cout<< val <<endl;
    }

}