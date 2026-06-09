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
    int large = arr[0];
    int small = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > large) {
            large = arr[i];
        }
        if (arr[i] < small) {
            small = arr[i];
        }
    }
    printf("Largest: %d\n", large);
    printf("Smallest: %d\n", small);
    return 0;
}