#include<stdio.h>

int main()
{
    int a[10][10];
    int n, i, j, flag;

    printf("Enter size of matrix: ");
    scanf("%d", &n);

    printf("Enter matrix:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    flag = 1;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(a[i][j] != a[j][i])
            {
                flag = 0;
            }
        }
    }

    if(flag == 1)
    {
        printf("Matrix is Symmetric");
    }
    else
    {
        printf("Matrix is Not Symmetric");
    }

    return 0;
}