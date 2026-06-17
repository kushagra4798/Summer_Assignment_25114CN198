#include <stdio.h>

int main()
{
    char str[100];
    int vowels, consonants;
    char ch;

    vowels = 0;
    consonants = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        ch = str[i];

        if (ch >= 'A' && ch <= 'Z')
        {
            ch = ch + 32;
        }

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            vowels = vowels + 1;
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            consonants = consonants + 1;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d", consonants);

    return 0;
}