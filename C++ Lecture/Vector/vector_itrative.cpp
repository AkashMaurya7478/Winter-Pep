#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v = {1,6,3,5,8,9};
    cout<<"Print Using For Loop" <<endl;
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    vector<int> :: iterator it = v.begin();
    cout<< "Deferencing iterator: "<<(*it)<<endl;
    cout<< * (it +2)<<endl;

    cout<<"Printing All Using Iterator: "<<endl;
    for(it = v.begin(); it != v.end(); ++it){
        cout<< *(it)<<" ";
    }
    cout<<endl;

    vector<pair<int, int>> vp = {{10,20},{30,40},{50,60}};
    vector<pair<string, int>> vp1 = {{"Hello",1},{"World",2},{"Run",3}};

    vector<pair<string, int >> :: iterator it1;
    for(it1 = vp1.begin(); it1 != vp1.end();++it1){
        cout<< (*it1).first <<" " << (*it1).second
    }

    //Range Based Loop

    for (int val: v){
        cout<< val << " ";
    }
    cout <<endl;

    //Print vp1

    cout <<"Print vp1 using range based Loop: "<<endl;
    for(auto &p : vp1){
        cout
    }
}