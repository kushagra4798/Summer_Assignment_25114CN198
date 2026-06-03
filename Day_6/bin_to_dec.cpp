#include <iostream>
#include <string>
using namespace std;

int binToDec(string bin) {
    int result = 0;
    for (char bit : bin) {
        result = result * 2 + (bit - '0');
    }
    return result;
}

int main() {
    string bin;
    cout << "Enter binary number: ";
    cin >> bin;
    cout << "Decimal: " << binToDec(bin) << endl;
    return 0;
}