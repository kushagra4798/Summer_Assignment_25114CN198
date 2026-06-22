#include <stdio.h>

int main()
{
    long balance;
    int pin;
    int enteredPin;
    int choice;
    long amount;
    int running;

    balance = 98000;
    pin = 6969;
    running = 1;

    printf("Welcome to the ATM\n");
    printf("Enter your 4 digit PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin != pin)
    {
        printf("Incorrect PIN. Exiting...\n");
        return 0;
    }

    printf("PIN accepted successfully.\n");

    while (running == 1)
    {
        printf("\n----- ATM Menu -----\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Your current balance is: %ld\n", balance);
        }
        else
        {
            if (choice == 2)
            {
                printf("Enter amount to deposit: ");
                scanf("%ld", &amount);

                if (amount > 0)
                {
                    balance = balance + amount;
                    printf("Amount deposited successfully.\n");
                    printf("New balance is: %ld\n", balance);
                }
                else
                {
                    printf("Invalid amount entered.\n");
                }
            }
            else
            {
                if (choice == 3)
                {
                    printf("Enter amount to withdraw: ");
                    scanf("%ld", &amount);

                    if (amount <= 0)
                    {
                        printf("Invalid amount entered.\n");
                    }
                    else
                    {
                        if (amount > balance)
                        {
                            printf("Insufficient balance.\n");
                        }
                        else
                        {
                            balance = balance - amount;
                            printf("Amount withdrawn successfully.\n");
                            printf("New balance is: %ld\n", balance);
                        }
                    }
                }
                else
                {
                    if (choice == 4)
                    {
                        printf("Thank you for using the ATM. Goodbye!\n");
                        running = 0;
                    }
                    else
                    {
                        printf("Invalid choice. Please try again.\n");
                    }
                }
            }
        }
    }

    return 0;
}