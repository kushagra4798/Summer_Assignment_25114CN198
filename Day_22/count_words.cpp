#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    int i, len, count;

    count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);

    if (len > 0)
    {
        count = 1;
    }

    i = 0;
    while (i < len)
    {
        if (str[i] == ' ')
        {
            count = count + 1;
        }
        i = i + 1;
    }

    printf("%d\n", count);

    return 0;
}