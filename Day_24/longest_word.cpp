#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[200];
    char words[50][50];
    int wordCount = 0;
    int i = 0, j = 0;
    int len;

    printf("Enter a sentence: ");
    scanf(" %[^\n]s", sentence);

    len = strlen(sentence);

    int k = 0;
    for (i = 0; i <= len; i++)
    {
        if (sentence[i] == ' ' || sentence[i] == '\0')
        {
            words[wordCount][k] = '\0';
            wordCount++;
            k = 0;
        }
        else
        {
            words[wordCount][k] = sentence[i];
            k++;
        }
    }

    int maxIndex = 0;
    int maxLen = 0;

    for (i = 0; i < wordCount; i++)
    {
        int currentLen = strlen(words[i]);

        if (currentLen > maxLen)
        {
            maxLen = currentLen;
            maxIndex = i;
        }
    }

    printf("Longest word: %s\n", words[maxIndex]);

    return 0;
}