#include<iostream>
using namespace std;

bool isPalindrome(int n) {
    int original = n, rev = 0;
    while(n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return original == rev;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(isPalindrome(n))
        printf("Palindrome");
    else
        printf("Not Palindrome");
}