#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Key value needed\n");
        return 1;
    }
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if ((argv[1][i] >= 'a' && argv[1][i] <= 'z') || (argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
        {
            printf("Key must be positive int\n");
            return 1;
        }
    }

    string text = get_string("plaintext: ");
    printf("ciphertext: ");
    
    int k = atoi(argv[1]);

    char cipher[strlen(text)];
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (text[i] >= 'a' && text[i] <= 'z')
        {
            cipher[i] = ((text[i] - 'a' + k) % 26) + 'a';
            printf("%c", cipher[i]);
        }
        else if (text[i] >= 'A' && text[i] <= 'Z')
        {
            cipher[i] = ((text[i] - 'A' + k) % 26) + 'A';
            printf("%c", cipher[i]);
        }
        else
        {
            printf("%c", text[i]);
        }
    }
    printf("\n");
}
