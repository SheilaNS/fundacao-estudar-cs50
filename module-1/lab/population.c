#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // Solicita a população inicial
    int start_pop;
    do
    {
        start_pop = get_int("Start size: ");
    }
    while (start_pop < 9);

    // Solicita a população final
    int end_pop;
    do
    {
        end_pop = get_int("End size: ");
    }
    while (end_pop < start_pop);

    // Calcula o número de anos até o limite
    int years = 0;
    while (start_pop < end_pop)
    {
        int new_born = round(start_pop / 3);
        int deaths = round(start_pop / 4);
        start_pop += new_born - deaths;
        years++;
    }


    // Imprime o número de anos
    printf("Years: %i\n", years);

}
