#include <iostream>
using namespace std;

int countSetBits(int n) {
    int count = 0;
    while (n != 0) {
        n = n & (n - 1);
        count++;
    }
    return count;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Number of set bits (1s) in " << n
         << " = " << countSetBits(n) << endl;
    return 0;
}