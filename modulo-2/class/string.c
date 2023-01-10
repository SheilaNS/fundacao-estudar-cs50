#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Input: ");
    printf("Output: ");

    // Uso sem a biblioteca string.h
    // for (int i = 0; s[i] != '\0'; i++) // Faz o loop enquanto s[i] for diferente de \0
    // Uso com a biblioteca string.h
    // int n = strlen(s); 
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}
