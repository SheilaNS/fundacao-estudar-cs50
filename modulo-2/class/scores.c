#include <cs50.h>
#include <stdio.h>

const int TOTAL = 3;

float average(int length, int array[]);

int main(void)
{
    // int score1 = 72;
    // int score2 = 73;
    // int score3 = 33;
    // printf("Average: %f", (score1 + score2 + score3) / 3.0);
    
    // int scores[3]; // int array with 3 values
    // scores[0] = 72;
    // scores[1] = 73;
    // scores[2] = 33;
    // printf("Average: %f", (scores[0] + scores[1] + scores[2]) / 3.0);

    // int scores[3]; // int array with 3 values
    // scores[0] = get_int("Score: ");
    // scores[1] = get_int("Score: ");
    // scores[2] = get_int("Score: ");
    // printf("Average: %f", (scores[0] + scores[1] + scores[2]) / 3.0);

    int scores[TOTAL]; // int array with 3 values
    for(int i = 0; i < TOTAL; i++)
    {
        scores[i] = get_int("Score: ");
    }
    printf("Average: %f", average(TOTAL, scores));
}

float average(int length, int array[])
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return sum / (float) length;
}
