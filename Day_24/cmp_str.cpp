#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char result[100];
    int len, i, count;
    int index = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    for (i = 0; i < len; i++)
    {
        count = 1;

        while (i + 1 < len && str[i] == str[i + 1])
        {
            count++;
            i++;
        }

        result[index] = str[i];
        index++;

        if (count > 1)
        {
            char countStr[10];
            sprintf(countStr, "%d", count);

            int k = 0;
            while (countStr[k] != '\0')
            {
                result[index] = countStr[k];
                index++;
                k++;
            }
        }
    }

    result[index] = '\0';

    printf("Compressed string: %s\n", result);

    return 0;
}