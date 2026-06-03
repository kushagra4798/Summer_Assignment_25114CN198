#include <iostream>
using namespace std;

long long power(long long x, int n) {
    long long result = 1;
    while (n > 0) {
        if (n % 2 == 1)
            result *= x;
        x *= x;
        n /= 2;
    }
    return result;
}

int main() {
    long long x;
    int n;
    cout << "Enter base (x) and exponent (n): ";
    cin >> x >> n;
    cout << x << "^" << n << " = " << power(x, n) << endl;
    return 0;
}