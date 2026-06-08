#include<iostream>
#include<cmath>
using namespace std;

bool isArmstrong(int n) {
    int original = n, sum = 0, digits = 0, temp = n;
    while(temp > 0) { digits++; temp /= 10; }
    while(n > 0) {
        sum += pow(n % 10, digits);
        n /= 10;
    }
    return original == sum;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(isArmstrong(n))
        printf("Armstrong");
    else
        printf("Not Armstrong");
}