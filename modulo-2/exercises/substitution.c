#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2) // 2 arguments verification
    {
        printf("Use: ./substitution key\n");
        return 1;
    }

    string key = argv[1];
    int key_length = strlen(key);

    if (key_length != 26) // Key length verification
    {
        printf("Key must have 26 characters.\n");
        return 1;
    }

    for (int i = 0; i < 26; i++)
    {
        if (!isalpha(key[i])) // Numeric key verification
        {
            printf("Use: ./substitution key\n");
            return 1;
        }
        int count = 0;
        for (int l = 0; l < 26; l++)
        {
            if (tolower(key[i]) == tolower(key[l])) // Repeat character verification
            {
                count++;
            }
        }
        if (count >= 2)
        {
            printf("No repeated characteres.\n");
            return 1;
        }
        count = 0;
    }

    string text = get_string("plaintext: "); // Get plaintext from user
    printf("ciphertext: ");

    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (isalpha(text[i])) // Alphabet verification
        {
            char letter = tolower(text[i]);
            int key_index = letter - 'a';
            if (islower(text[i])) // Case veification
            {
                printf("%c", tolower(key[key_index]));
            }
            else
            {
                printf("%c", toupper(key[key_index]));
            }
        }
        else
        {
            printf("%c", text[i]);
        }
    }
    printf("\n");
}
