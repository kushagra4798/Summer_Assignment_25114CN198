#include <stdio.h>

struct Account
{
    int accNo;
    char name[50];
    float balance;
};

int main()
{
    struct Account a[100];
    int n;
    int i;
    int choice;

    n = 0;

    while (1)
    {
        printf("\n1. Create Account\n");
        printf("2. Display All Accounts\n");
        printf("3. Search Account by Account Number\n");
        printf("4. Deposit Money\n");
        printf("5. Withdraw Money\n");
        printf("6. Delete Account\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Enter Account Number: ");
            scanf("%d", &a[n].accNo);
            printf("Enter Name: ");
            scanf("%s", a[n].name);
            printf("Enter Initial Balance: ");
            scanf("%f", &a[n].balance);
            n = n + 1;
            printf("Account Created Successfully\n");
        }
        else if (choice == 2)
        {
            if (n == 0)
            {
                printf("No Records Found\n");
            }
            else
            {
                for (i = 0; i < n; i = i + 1)
                {
                    printf("Account No: %d\n", a[i].accNo);
                    printf("Name: %s\n", a[i].name);
                    printf("Balance: %.2f\n", a[i].balance);
                    printf("-----------------------\n");
                }
            }
        }
        else if (choice == 3)
        {
            int searchAcc;
            int found;

            found = 0;
            printf("Enter Account Number to Search: ");
            scanf("%d", &searchAcc);

            for (i = 0; i < n; i = i + 1)
            {
                if (a[i].accNo == searchAcc)
                {
                    printf("Account Found\n");
                    printf("Name: %s\n", a[i].name);
                    printf("Balance: %.2f\n", a[i].balance);
                    found = 1;
                }
            }

            if (found == 0)
            {
                printf("Account Not Found\n");
            }
        }
        else if (choice == 4)
        {
            int depositAcc;
            float amount;
            int found;

            found = 0;
            printf("Enter Account Number: ");
            scanf("%d", &depositAcc);
            printf("Enter Amount to Deposit: ");
            scanf("%f", &amount);

            for (i = 0; i < n; i = i + 1)
            {
                if (a[i].accNo == depositAcc)
                {
                    a[i].balance = a[i].balance + amount;
                    printf("Amount Deposited Successfully\n");
                    printf("New Balance: %.2f\n", a[i].balance);
                    found = 1;
                }
            }

            if (found == 0)
            {
                printf("Account Not Found\n");
            }
        }
        else if (choice == 5)
        {
            int withdrawAcc;
            float amount;
            int found;

            found = 0;
            printf("Enter Account Number: ");
            scanf("%d", &withdrawAcc);
            printf("Enter Amount to Withdraw: ");
            scanf("%f", &amount);

            for (i = 0; i < n; i = i + 1)
            {
                if (a[i].accNo == withdrawAcc)
                {
                    found = 1;

                    if (amount > a[i].balance)
                    {
                        printf("Insufficient Balance\n");
                    }
                    else
                    {
                        a[i].balance = a[i].balance - amount;
                        printf("Amount Withdrawn Successfully\n");
                        printf("New Balance: %.2f\n", a[i].balance);
                    }
                }
            }

            if (found == 0)
            {
                printf("Account Not Found\n");
            }
        }
        else if (choice == 6)
        {
            int deleteAcc;
            int found;
            int j;

            found = 0;
            printf("Enter Account Number to Delete: ");
            scanf("%d", &deleteAcc);

            for (i = 0; i < n; i = i + 1)
            {
                if (a[i].accNo == deleteAcc)
                {
                    found = 1;

                    for (j = i; j < n - 1; j = j + 1)
                    {
                        a[j] = a[j + 1];
                    }

                    n = n - 1;
                }
            }

            if (found == 1)
            {
                printf("Account Deleted Successfully\n");
            }
            else
            {
                printf("Account Not Found\n");
            }
        }
        else if (choice == 7)
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