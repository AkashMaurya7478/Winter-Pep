#include <iostream>
using namespace std;



int val = 100;
auto df = [&](int val) {
    val = val + 10;
    return val; //capturing external variable by reference
};
auto add = [](int x, int y) {
    val += 10; //modifying the captured variable
    return x + y;
};

int main() {
    int n = 20;
    int a = 5, b = 10;
    int ans = add(a, b);
    cout << "Sum of numbers is: " << ans << endl;
    cout << "Value of val after addition: " << val << endl;
    return 0;
}