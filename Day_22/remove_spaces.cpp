#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    char result[200];
    int i, j, len;

    i = 0;
    j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);

    while (i < len)
    {
        if (str[i] != ' ')
        {
            result[j] = str[i];
            j = j + 1;
        }
        i = i + 1;
    }

    result[j] = '\0';

    printf("%s\n", result);

    return 0;
}