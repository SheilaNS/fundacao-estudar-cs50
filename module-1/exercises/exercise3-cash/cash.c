#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float change;
    do
    {
        change = get_float("Change: \n");
    }
    while (change < 0);

    int total = round(change * 100);
    int coins = 0;

    // 0.25 cents
    int cash = total / 25;
    coins += cash;
    total -= cash * 25;

    // 0.10 cents
    cash = total / 10;
    coins += cash;
    total -= cash * 10;

    // 0.05 cents
    cash = total / 5;
    coins += cash;
    total -= cash * 5;

    // 0.01 cents
    cash = total / 1;
    coins += cash;

    printf("%i\n", coins);
}
