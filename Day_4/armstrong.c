#include <stdio.h>
#include <math.h>

int main() {
    int num, original, digits = 0, sum = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;

    /* count digits */
    temp = num;
    while (temp != 0) { digits++; temp /= 10; }

    /* sum of each digit raised to power of digit count */
    temp = num;
    while (temp != 0) {
        int d = temp % 10;
        sum += (int)pow(d, digits);
        temp /= 10;
    }

    if (sum == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);
    return 0;
}