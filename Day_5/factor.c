#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factors of %d: ", n);

    for (int i = 1; i <= (int)sqrt(n); i++) {
        if (n % i == 0) {
            printf("%d ", i);
            if (i != n / i)
                printf("%d ", n / i);
        }
    }
    printf("\n");
    return 0;
}