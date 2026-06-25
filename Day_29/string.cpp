#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100];
    char str2[100];
    int choice;
    int i;
    int length;

    while (1)
    {
        printf("\n1. Find Length of String\n");
        printf("2. Concatenate Two Strings\n");
        printf("3. Reverse a String\n");
        printf("4. Check Palindrome\n");
        printf("5. Convert to Uppercase\n");
        printf("6. Convert to Lowercase\n");
        printf("7. Count Vowels\n");
        printf("8. Compare Two Strings\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Enter a String: ");
            scanf("%s", str1);
            length = strlen(str1);
            printf("Length of String: %d\n", length);
        }
        else if (choice == 2)
        {
            printf("Enter First String: ");
            scanf("%s", str1);
            printf("Enter Second String: ");
            scanf("%s", str2);
            strcat(str1, str2);
            printf("Concatenated String: %s\n", str1);
        }
        else if (choice == 3)
        {
            char reversed[100];
            int len;
            int j;

            printf("Enter a String: ");
            scanf("%s", str1);

            len = strlen(str1);
            j = 0;

            for (i = len - 1; i >= 0; i = i - 1)
            {
                reversed[j] = str1[i];
                j = j + 1;
            }

            reversed[j] = '\0';

            printf("Reversed String: %s\n", reversed);
        }
        else if (choice == 4)
        {
            int len;
            int isPalindrome;
            int start;
            int end;

            printf("Enter a String: ");
            scanf("%s", str1);

            len = strlen(str1);
            isPalindrome = 1;
            start = 0;
            end = len - 1;

            while (start < end)
            {
                if (str1[start] != str1[end])
                {
                    isPalindrome = 0;
                }

                start = start + 1;
                end = end - 1;
            }

            if (isPalindrome == 1)
            {
                printf("The String is a Palindrome\n");
            }
            else
            {
                printf("The String is Not a Palindrome\n");
            }
        }
        else if (choice == 5)
        {
            printf("Enter a String: ");
            scanf("%s", str1);

            length = strlen(str1);

            for (i = 0; i < length; i = i + 1)
            {
                if (str1[i] >= 'a' && str1[i] <= 'z')
                {
                    str1[i] = str1[i] - 32;
                }
            }

            printf("Uppercase String: %s\n", str1);
        }
        else if (choice == 6)
        {
            printf("Enter a String: ");
            scanf("%s", str1);

            length = strlen(str1);

            for (i = 0; i < length; i = i + 1)
            {
                if (str1[i] >= 'A' && str1[i] <= 'Z')
                {
                    str1[i] = str1[i] + 32;
                }
            }

            printf("Lowercase String: %s\n", str1);
        }
        else if (choice == 7)
        {
            int vowelCount;

            vowelCount = 0;

            printf("Enter a String: ");
            scanf("%s", str1);

            length = strlen(str1);

            for (i = 0; i < length; i = i + 1)
            {
                if (str1[i] == 'a' || str1[i] == 'e' || str1[i] == 'i' || str1[i] == 'o' || str1[i] == 'u' || str1[i] == 'A' || str1[i] == 'E' || str1[i] == 'I' || str1[i] == 'O' || str1[i] == 'U')
                {
                    vowelCount = vowelCount + 1;
                }
            }

            printf("Number of Vowels: %d\n", vowelCount);
        }
        else if (choice == 8)
        {
            int result;

            printf("Enter First String: ");
            scanf("%s", str1);
            printf("Enter Second String: ");
            scanf("%s", str2);

            result = strcmp(str1, str2);

            if (result == 0)
            {
                printf("Strings are Equal\n");
            }
            else
            {
                printf("Strings are Not Equal\n");
            }
        }
        else if (choice == 9)
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