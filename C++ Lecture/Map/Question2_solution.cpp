#include <iostream>
#include <vector>
#include <map>
using namespace std;

void Intersection(vector<int> &H1, vector<int> &H2) {
    map<int, int> freq;
    for (int num : H1) {
        freq[num]++;
    }
    vector<int> result;
    for (int num : H2) {
        if (freq[num] > 0) {
            result.push_back(num);
            freq[num]--;  // To handle duplicates if needed
        }
    }
    // Print the intersection
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> H1 = {1, 2, 3, 4, 5};
    vector<int> H2 = {3, 4, 6, 7};
    Intersection(H1, H2);
    return 0;
}
