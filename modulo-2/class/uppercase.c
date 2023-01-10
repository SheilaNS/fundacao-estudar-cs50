#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");

    for (int i = 0, n = strlen(s); i < n; i++)
    {
        // Sem a biblioteca ctype.h
        // if (s[i] >= 'a' && s[i] <= 'z')
        // {
        //     printf("%c", s[i] - 32); // transforma a letra em maiúscula
        // }

        //Com a biblioteca ctype.h
        // Opção 1
        // if (islower(s[i]))
        // {
        //     printf("%c", toupper(s[i]));
        // }
        // else
        // {
        //     printf("%c", s[i]);
        // }

        // Opção 2
        printf("%c", toupper(s[i]));
    }
    printf("\n");

}
