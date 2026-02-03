//You are given an array nums of integers that may contains duplicates values.
//figarout the freaquency of each element appearing in the array and print the frequency count using map

#include <iostream>
#include <vector>
#include <map>
using namespace std;

void frequency(vector<int> &nums){
    int size = nums.size();
    map <int, int> myMap;
    for(int i = 0; i<size; i++){
        int elem = nums[i];
        myMap[elem]++;
    }
    map<int ,int> :: iterator it;
    for(it = myMap.begin();it != myMap.end();it++){
        cout<<it -> first<< " Frequency = "<<it ->second<<endl;
    }
}

int main(){

    vector<int> nums = {10,20,5,5,3,9,8,7,5,6,6,7,9,2,4,6};
    frequency(nums);
    
    // newMap[0] = 1;
    // newMap[1] = 2;
    // newMap[2] = 3;
    // newMap[3] = 4;
}