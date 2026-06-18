#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int freq[256];
    int i, len;

    for (i = 0; i < 256; i++)
    {
        freq[i] = 0;
    }
    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    i = 0;
    while (i < len)
    {
        freq[(int)str[i]] = freq[(int)str[i]] + 1;
        i = i + 1;
    }

    i = 0;
    while (i < 256)
    {
        if (freq[i] > 0)
        {
            printf("%c %d\n", i, freq[i]);
        }
        i = i + 1;
    }

    return 0;
}