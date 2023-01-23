#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{   
    string names[] = {"Bill", "Charlie", "Fred", "George", "Ginny", "Percy", "Ron"};

    for (int i = 0; i < 7; i++)
    {
        if (strcmp(names[i], "Ron") == 0) // Compara 2 strings retorna 0 quando encontra um match. Case sensitive!
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}