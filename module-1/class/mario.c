#include <cs50.h>
#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        printf("?");
    }
    printf ("\n\n");
    
    //  Pega o valor de n com o usuário
    int n;
    do
    {
        n = get_int("Width: ");
    }
    while (n < 1);

   // Imprima pontos de interrogação
    for (int i = 0; i < n; i++)
    {
         printf("?");
    }
    printf("\n\n");
    
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            printf("#");
        }
        printf("\n");
    }
}
