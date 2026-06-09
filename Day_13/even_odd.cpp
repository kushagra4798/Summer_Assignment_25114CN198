#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int even = 0, odd = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even = even + 1;
        } else {
            odd = odd + 1;
        }
    }
    printf("Even count: %d\n", even);
    printf("Odd count: %d\n", odd);
    return 0;
}