#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char result[100];
    int len, i, j;
    int index = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    for (i = 0; i < len; i++)
    {
        int isDuplicate = 0;

        for (j = 0; j < index; j++)
        {
            if (str[i] == result[j])
            {
                isDuplicate = 1;
                break;
            }
        }

        if (isDuplicate == 0)
        {
            result[index] = str[i];
            index++;
        }
    }

    result[index] = '\0';

    printf("String after removing duplicates: %s\n", result);

    return 0;
}