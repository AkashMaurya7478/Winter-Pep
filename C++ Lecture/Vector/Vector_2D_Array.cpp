#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <vector<int>> v = {{1,2,72,41},{7,6,14,23},{4,3,56,24}};

    for(int i = 0;i<v.size();i++){
        for(int j = 0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    //User define 2D Vector
   vector< vector<int>> arr(5,vector<int>(3,8));
    for(int i = 0;i<arr.size();i++){
        for(int j = 0;j<arr[i].size();j++){
            cout <<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //Remove 1st row

    v.erase(v.begin()+1);

    cout<<"Remove last row: "<<endl;
    for(int i = 0;i<v.size();i++){
        for(int j = 0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    
}