#include <stdio.h>
#include <ctype.h>

int main()
{
    char schway[100];
    int i, vow = 0, consonants = 0;

    printf("Enter a String: ");
    fgets(schway, sizeof(schway), stdin);

    for (i = 0; schway[i] != '\0'; i++)
    {
        char ch = tolower(schway[i]);
        if (ch >= 'a' && ch <= 'z')
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                vow++;
            }
            else
            {
                consonants++;
            }
        }
    }
    printf("The number of ,\nvowels : %d \n consonants : %d", vow, consonants);
    return 0;
}