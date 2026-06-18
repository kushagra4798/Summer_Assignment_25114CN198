#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, len, flag;

    flag = 1;
    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    i = 0;
    while (i < len / 2)
    {
        if (str[i] != str[len - 1 - i])
        {
            flag = 0;
        }
        i = i + 1;
    }

    if (flag == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }

    return 0;
}