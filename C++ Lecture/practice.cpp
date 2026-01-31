// #include <iostream>
// #include <iomanip> // For controlling the decimal precision
// using namespace std;

// // Class to represent a Bank ATM
// class BankATM {
// private:
//     int atmID;
//     string location;
//     float availableCash;

// public:
//     // Constructor to initialize ATM details
//     BankATM(int id, string loc, float cash) : atmID(id), location(loc), availableCash(cash) {}

//     // Function to withdraw cash
//     void withdrawCash(float amount) {
//         if (amount > availableCash) {
//             cout << "Insufficient cash in the ATM" << endl;
//         } else {
//             availableCash -= amount;
//             cout << "Withdrawal successful. Available cash: " << fixed << setprecision(1) << availableCash << endl;
//         }
//     }

//     // Function to deposit cash
//     void depositCash(float amount) {
//         availableCash += amount;
//         cout << "Deposit successful. Available cash: " << fixed << setprecision(1) << availableCash << endl;
//     }

//     // Function to display the current available cash in the ATM
//     void displayAvailableCash() {
//         cout << "Available cash in ATM: " << fixed << setprecision(1) << availableCash << endl;
//     }
// };

// int main() {
//     int atmID;
//     string location;
//     float initialCash, withdrawalAmount, depositAmount;

//     // Reading input
//     cin >> atmID;
//     cin.ignore(); // To ignore newline after integer input
//     getline(cin, location);
//     cin >> initialCash;
//     cin >> withdrawalAmount;
//     cin >> depositAmount;

//     // Create an object of BankATM
//     BankATM atm(atmID, location, initialCash);

//     // Perform operations
//     atm.withdrawCash(withdrawalAmount);
//     atm.depositCash(depositAmount);
//     atm.displayAvailableCash();

//     return 0;
// }
// #include <iostream>
// #include <sstream>
// #include <string>
// using namespace std;

// int main() {
//     string str {"Steve jobs"};
//     istringstream iss(str);
//     string token;

//     while (iss >> token) {
//         cout << token << "\n";
//     }

//     return 0;
// }

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float i, j, k;
    cout << "Width:"<<i<<endl;
    cin >> i;
    cout << "Length:"<<j<<endl;
    cin >> j;
    cout << "Height:"<<j<<endl;
    cin >> k;
    float Base_Height = i * j;
    cout << Base_Height << setprecision(1);
    float Base = i * j * k;
    cout << Base << setprecision(2);
}