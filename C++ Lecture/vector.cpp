#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> arr = {1, 2, 9, 4, 7};
    // Range-based for loop to print elements
    // auto mod = [&](int count){
    //     for(int i = 0; i < arr.size(); i++){
    //         arr[i] = arr[i] + count;
    //     }
    // };

    auto compare = [](int a, int b){
        return a > b;
    };

    sort(arr.begin(), arr.end());

    // mod(10); // Increment each element by 10
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
}