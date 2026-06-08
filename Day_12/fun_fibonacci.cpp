#include<iostream>
using namespace std;

void fibonacci(int n) {
    int a = 0, b = 1;
    for(int i = 0; i < n; i++) {
        printf("%d ", a);
        int c = a + b;
        a = b;
        b = c;
    }
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    fibonacci(n);
}
