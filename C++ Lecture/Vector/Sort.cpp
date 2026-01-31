#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(vector<int> &v){
    for (int val : v){
        cout << val <<" ";
    }
}
bool compare(int a,int b){
    return a>b;
}

int main(){
    vector <int> v = {4,1,9,5,3,7,8};
    sort(v.begin(),v.end(),compare);
    print(v);
}