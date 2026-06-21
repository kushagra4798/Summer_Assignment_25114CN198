#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    printf("Common characters: ");

    for (int i = 0; i < len1; i++)
    {
        int found = 0;

        for (int j = 0; j < len2; j++)
        {
            if (str1[i] == str2[j])
            {
                found = 1;
            }
        }

        if (found == 1)
        {
            int alreadyPrinted = 0;

            for (int k = 0; k < i; k++)
            {
                if (str1[k] == str1[i])
                {
                    alreadyPrinted = 1;
                }
            }

            if (alreadyPrinted == 0)
            {
                printf("%c ", str1[i]);
            }
        }
    }

    return 0;
}