#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string decToBin(int n) {
    if (n == 0) return "0";
    string result = "";
    while (n > 0) {
        result += (char)('0' + n % 2);
        n /= 2;
    }
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    int n;
    cout << "Enter decimal number: ";
    cin >> n;
    cout << "Binary: " << decToBin(n) << endl;
    return 0;
}