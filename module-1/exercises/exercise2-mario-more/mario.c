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

    int main_axis = pyramid_height;
    int left_bricks = pyramid_height;
    int right_bricks = pyramid_height;

    for (int row = 0; row < pyramid_height; row++)
    {
        left_bricks--;
        right_bricks++;
        for (int col = 0; col < (pyramid_height * 2) + 1 ; col++)
        {
            if (col == main_axis)
            {
                printf("  ");
            }
            else if (col >= left_bricks && col <= right_bricks && col != main_axis)
            {
                printf("#");
            }
            else if (col > right_bricks)
            {
              printf("");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
