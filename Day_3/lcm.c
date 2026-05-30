#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int lcm = (a / gcd(a, b)) * b;
    printf("LCM of %d and %d = %d\n", a, b, lcm);
    return 0;
}