#include <stdio.h>

int main()
{
    int n1, n2;
    printf("Enter size of first array: ");
    scanf("%d", &n1);

    int a[50];
    for (int i = 0; i < n1; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int b[50];
    for (int i = 0; i < n2; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &b[i]);
    }

    int merged[100];
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            merged[k] = a[i];
            i++;
            k++;
        }
        else
        {
            merged[k] = b[j];
            j++;
            k++;
        }
    }

    while (i < n1)
    {
        merged[k] = a[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        merged[k] = b[j];
        j++;
        k++;
    }

    printf("Merged sorted array: ");
    for (int m = 0; m < k; m++)
    {
        printf("%d ", merged[m]);
    }

    return 0;
}