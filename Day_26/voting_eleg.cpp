#include <stdio.h>

int main()
{
    int age;
    char citizen;
    char idCard;

    printf("Voting Eligibility System\n");

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Are you a citizen of the country? (y/n): ");
    scanf(" %c", &citizen);

    printf("Do you have a valid ID card? (y/n): ");
    scanf(" %c", &idCard);

    if (age >= 18)
    {
        if (citizen == 'y' || citizen == 'Y')
        {
            if (idCard == 'y' || idCard == 'Y')
            {
                printf("You are eligible to vote.\n");
            }
            else
            {
                printf("You are not eligible to vote. Valid ID card is required.\n");
            }
        }
        else
        {
            printf("You are not eligible to vote. You must be a citizen.\n");
        }
    }
    else
    {
        printf("You are not eligible to vote. Minimum age required is 18.\n");
        printf("Years remaining to become eligible: %d\n", 18 - age);
    }

    return 0;
}