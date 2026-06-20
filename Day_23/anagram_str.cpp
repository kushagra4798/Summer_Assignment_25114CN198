#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str1[100], str2[100];
    int count[256] = {0};
    int i;
    printf("Enter two strings: ");
    scanf("%s", str1);
    scanf("%s", str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2)
    {
        printf("Not Anagram\n");
    }
    else
    {
        for (i = 0; i < len1; i++)
        {
            str1[i] = tolower(str1[i]);
        }

        for (i = 0; i < len2; i++)
        {
            str2[i] = tolower(str2[i]);
        }

        for (i = 0; i < len1; i++)
        {
            count[(int)str1[i]] = count[(int)str1[i]] + 1;
        }

        for (i = 0; i < len2; i++)
        {
            count[(int)str2[i]] = count[(int)str2[i]] - 1;
        }

        int isAnagram = 1;

        for (i = 0; i < 256; i++)
        {
            if (count[i] != 0)
            {
                isAnagram = 0;
                break;
            }
        }

        if (isAnagram == 1)
        {
            printf("Anagram\n");
        }
        else
        {
            printf("Not Anagram\n");
        }
    }

    return 0;
}