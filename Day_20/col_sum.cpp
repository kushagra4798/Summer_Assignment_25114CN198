#include<stdio.h>

int main()
{
    int a[10][10];
    int r, c, i, j, sum;

    printf("Enter rows and cols: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(j = 0; j < c; j++)
    {
        sum = 0;
        for(i = 0; i < r; i++)
        {
            sum = sum + a[i][j];
        }
        printf("Sum of col %d = %d\n", j + 1, sum);
    }

    return 0;
}