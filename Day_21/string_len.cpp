#include <stdio.h>

int main()
{
    char str[100];
    int count;

    count = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        count = count + 1;
    }

    printf("Length of the string is: %d", count);

    return 0;
}