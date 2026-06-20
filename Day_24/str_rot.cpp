#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100];
    char str2[100];
    char combined[200];
    int len1, len2;

    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    if (len1 != len2)
    {
        printf("Not a rotation\n");
        return 0;
    }

    strcpy(combined, str1);
    strcat(combined, str1);

    int found = 0;
    int i, j;

    for (i = 0; i < len1 * 2; i++)
    {
        int match = 1;

        if (i + len2 > len1 * 2)
        {
            break;
        }

        for (j = 0; j < len2; j++)
        {
            if (combined[i + j] != str2[j])
            {
                match = 0;
                break;
            }
        }

        if (match == 1)
        {
            found = 1;
            break;
        }
    }

    if (found == 1)
    {
        printf("Yes, it is a rotation\n");
    }
    else
    {
        printf("Not a rotation\n");
    }

    return 0;
}