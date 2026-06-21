#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    printf("Enter number of words: ");
    scanf("%d", &n);

    char words[50][50];

    for (int i = 0; i < n; i++)
    {
        printf("Enter word %d: ", i + 1);
        scanf("%s", words[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            int len1 = strlen(words[j]);
            int len2 = strlen(words[j + 1]);

            if (len1 > len2)
            {
                char temp[50];
                strcpy(temp, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], temp);
            }
        }
    }

    printf("Words sorted by length:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", words[i]);
    }

    return 0;
}