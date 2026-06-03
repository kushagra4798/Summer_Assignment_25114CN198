#include <iostream>
#include <cmath>
using namespace std;

int countDigits(int n) {
    if (n == 0) return 0;
    return 1 + countDigits(n / 10);
}

int reverse(int n, int digits) {
    if (n / 10 == 0) return n;
    int lastDigit = n % 10;
    return lastDigit * (int)pow(10, digits - 1)
           + reverse(n / 10, digits - 1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int d = countDigits(n);
    cout << "Reversed: " << reverse(n, d) << endl;
    return 0;
}