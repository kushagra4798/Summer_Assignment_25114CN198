#include <stdio.h>

int main()
{
    char str[100];
    char ch;

    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        ch = str[i];

        if (ch >= 'a' && ch <= 'z')
        {
            str[i] = ch - 32;
        }
    }

    printf("Uppercase string is: %s", str);

    return 0;
}