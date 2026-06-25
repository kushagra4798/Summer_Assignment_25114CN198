#include <stdio.h>

int main()
{
    int choice;
    float num1;
    float num2;
    float result;

    while (1)
    {
        printf("\n1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 5)
        {
            printf("Exiting Program\n");
            break;
        }

        if (choice == 1 || choice == 2 || choice == 3 || choice == 4)
        {
            printf("Enter First Number: ");
            scanf("%f", &num1);
            printf("Enter Second Number: ");
            scanf("%f", &num2);

            if (choice == 1)
            {
                result = num1 + num2;
                printf("Result: %.2f\n", result);
            }
            else if (choice == 2)
            {
                result = num1 - num2;
                printf("Result: %.2f\n", result);
            }
            else if (choice == 3)
            {
                result = num1 * num2;
                printf("Result: %.2f\n", result);
            }
            else if (choice == 4)
            {
                if (num2 == 0)
                {
                    printf("Error: Division by Zero is Not Allowed\n");
                }
                else
                {
                    result = num1 / num2;
                    printf("Result: %.2f\n", result);
                }
            }
        }
        else
        {
            printf("Invalid Choice. Try Again\n");
        }
    }

    return 0;
}