#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int count[256] = {0};
    int i;
    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);

    for (i = 0; i < len; i++)
    {
        count[(int)str[i]] = count[(int)str[i]] + 1;
    }

    int maxCount = 0;
    char maxChar = str[0];

    for (i = 0; i < len; i++)
    {
        if (count[(int)str[i]] > maxCount)
        {
            maxCount = count[(int)str[i]];
            maxChar = str[i];
        }
    }

    printf("Maximum occurring character: %c\n", maxChar);
    printf("Count: %d\n", maxCount);

    return 0;
}