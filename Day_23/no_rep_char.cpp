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

    int found = 0;

    for (i = 0; i < len; i++)
    {
        if (count[(int)str[i]] == 1)
        {
            printf("First non-repeating character: %c\n", str[i]);
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("No non-repeating character found\n");
    }

    return 0;
}