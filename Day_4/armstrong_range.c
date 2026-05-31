#include <stdio.h>
#include <math.h>

int isArmstrong(int n) {
    int digits = 0, sum = 0, temp = n;
    while (temp != 0) { digits++; temp /= 10; }
    temp = n;
    while (temp != 0) {
        int d = temp % 10;
        sum += (int)pow(d, digits);
        temp /= 10;
    }
    return sum == n;
}

int main() {
    int low, high;
    printf("Enter range (low high): ");
    scanf("%d %d", &low, &high);
    printf("Armstrong numbers between %d and %d:\n", low, high);
    for (int i = low; i <= high; i++) {
        if (isArmstrong(i))
            printf("%d\n", i);
    }
    return 0;
}