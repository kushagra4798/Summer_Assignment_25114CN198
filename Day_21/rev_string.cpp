#include <stdio.h>

int main()
{
    char str[100];
    int length;
    int i, j;
    char temp;

    printf("Enter a string: ");
    scanf("%s", str);

    length = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        length = length + 1;
    }

    i = 0;
    j = length - 1;

    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i = i + 1;
        j = j - 1;
    }

    printf("Reversed string is: %s", str);

    return 0;
}