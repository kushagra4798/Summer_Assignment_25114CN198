#include <stdio.h>

int fibonacci(int n) {
    if (n == 1) return 0;
    if (n == 2) return 1;
    int a = 0, b = 1, result;
    for (int i = 3; i <= n; i++) {
        result = a + b;
        a = b;
        b = result;
    }
    return result;
}

int main() {
    int n;
    printf("Enter the position (n): ");
    scanf("%d", &n);
    printf("The %dth Fibonacci term = %d\n", n, fibonacci(n));
    return 0;
}