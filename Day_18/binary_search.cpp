#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[100];
    printf("Enter elements in sorted order:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    int target;
    printf("Enter number to search: ");
    scanf("%d", &target);

    int low = 0, high = n - 1, found = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (a[mid] == target) {
            found = mid;
            break;
        } else if (a[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (found != -1) {
        printf("Element found at index %d", found);
    } else {
        printf("Element not found");
    }

    return 0;
}