#include <stdio.h>

int main()
{
    int arr[100];
    int n;
    int i;
    int choice;

    n = 0;

    while (1)
    {
        printf("\n1. Insert Element\n");
        printf("2. Display Array\n");
        printf("3. Search Element\n");
        printf("4. Delete Element\n");
        printf("5. Find Sum of Array\n");
        printf("6. Find Maximum Element\n");
        printf("7. Find Minimum Element\n");
        printf("8. Sort Array Ascending\n");
        printf("9. Reverse Array\n");
        printf("10. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Enter Element to Insert: ");
            scanf("%d", &arr[n]);
            n = n + 1;
            printf("Element Inserted Successfully\n");
        }
        else if (choice == 2)
        {
            if (n == 0)
            {
                printf("Array is Empty\n");
            }
            else
            {
                printf("Array Elements: ");

                for (i = 0; i < n; i = i + 1)
                {
                    printf("%d ", arr[i]);
                }

                printf("\n");
            }
        }
        else if (choice == 3)
        {
            int searchValue;
            int found;

            found = 0;
            printf("Enter Element to Search: ");
            scanf("%d", &searchValue);

            for (i = 0; i < n; i = i + 1)
            {
                if (arr[i] == searchValue)
                {
                    printf("Element Found at Position %d\n", i + 1);
                    found = 1;
                }
            }

            if (found == 0)
            {
                printf("Element Not Found\n");
            }
        }
        else if (choice == 4)
        {
            int deleteValue;
            int found;
            int j;

            found = 0;
            printf("Enter Element to Delete: ");
            scanf("%d", &deleteValue);

            for (i = 0; i < n; i = i + 1)
            {
                if (arr[i] == deleteValue)
                {
                    found = 1;

                    for (j = i; j < n - 1; j = j + 1)
                    {
                        arr[j] = arr[j + 1];
                    }

                    n = n - 1;
                }
            }

            if (found == 1)
            {
                printf("Element Deleted Successfully\n");
            }
            else
            {
                printf("Element Not Found\n");
            }
        }
        else if (choice == 5)
        {
            int sum;

            sum = 0;

            if (n == 0)
            {
                printf("Array is Empty\n");
            }
            else
            {
                for (i = 0; i < n; i = i + 1)
                {
                    sum = sum + arr[i];
                }

                printf("Sum of Array Elements: %d\n", sum);
            }
        }
        else if (choice == 6)
        {
            int max;

            if (n == 0)
            {
                printf("Array is Empty\n");
            }
            else
            {
                max = arr[0];

                for (i = 1; i < n; i = i + 1)
                {
                    if (arr[i] > max)
                    {
                        max = arr[i];
                    }
                }

                printf("Maximum Element: %d\n", max);
            }
        }
        else if (choice == 7)
        {
            int min;

            if (n == 0)
            {
                printf("Array is Empty\n");
            }
            else
            {
                min = arr[0];

                for (i = 1; i < n; i = i + 1)
                {
                    if (arr[i] < min)
                    {
                        min = arr[i];
                    }
                }

                printf("Minimum Element: %d\n", min);
            }
        }
        else if (choice == 8)
        {
            int j;
            int temp;

            if (n == 0)
            {
                printf("Array is Empty\n");
            }
            else
            {
                for (i = 0; i < n - 1; i = i + 1)
                {
                    for (j = 0; j < n - i - 1; j = j + 1)
                    {
                        if (arr[j] > arr[j + 1])
                        {
                            temp = arr[j];
                            arr[j] = arr[j + 1];
                            arr[j + 1] = temp;
                        }
                    }
                }

                printf("Array Sorted Successfully\n");
            }
        }
        else if (choice == 9)
        {
            int start;
            int end;
            int temp;

            if (n == 0)
            {
                printf("Array is Empty\n");
            }
            else
            {
                start = 0;
                end = n - 1;

                while (start < end)
                {
                    temp = arr[start];
                    arr[start] = arr[end];
                    arr[end] = temp;
                    start = start + 1;
                    end = end - 1;
                }

                printf("Array Reversed Successfully\n");
            }
        }
        else if (choice == 10)
        {
            printf("Exiting Program\n");
            break;
        }
        else
        {
            printf("Invalid Choice. Try Again\n");
        }
    }

    return 0;
}