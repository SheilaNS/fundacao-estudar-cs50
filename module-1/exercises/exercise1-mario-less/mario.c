#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int pyramid_height;
    do
    {
        pyramid_height = get_int("Height: \n");
    }
    while (pyramid_height < 1 || pyramid_height > 8);

    for (int row = 0; row < pyramid_height; row++)
    {
        for (int col = pyramid_height - 1; col >= 0; col--)
        {
            if (col <= row)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
