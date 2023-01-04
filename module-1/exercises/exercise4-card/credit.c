#include <cs50.h>
#include <stdio.h>
#include <math.h>

int get_card_length(long card_number);

int main(void)
{
    // Pede o número do cartão
    long card = get_long("Card Number: \n");

    // Conta o tamanho do número do cartão
    int digit_count = get_card_length(card);

    // Verifica o tamanho do número
    if (digit_count < 13 || digit_count > 16)
    {
        printf("INVALID\n");
        return 0;
    }

    int card_module = 0;
    int pair_odd = 0;
    int number_sum = 0;
    int initial_num = 0;

    // Faz a soma dos números do cartão
    while (card)
    {
        card_module = card % 10;
        pair_odd++;
        card /= 10;

        // Se for uma posição par
        if (pair_odd % 2 == 0)
        {
            // Múltiplica por 2
            card_module *= 2;
            // Se for maior ou igual a 10
            if (card_module >= 10)
            {
                // Soma os dois dígitos e depois soma
                card_module = (card_module % 10) + (card_module / 10);
                number_sum += card_module;
            }
            else
            {
                number_sum += card_module;
            }
        }
        // Se for uma posição ímpar (se não)
        else
        {
            // Apenas soma o número
            number_sum += card_module;
        }

        // Guarda os números iniciais do cartão
        if (card < 100 && card >= 10)
        {
            initial_num = card;
        }
    }

    if (initial_num == 34 || initial_num == 37 && (number_sum % 10) == 0)
    {
        printf("AMEX\n");
    }
    else if (initial_num >= 51 && initial_num <= 55 && (number_sum % 10) == 0)
    {
        printf("MASTERCARD\n");
    }
    else if ((initial_num / 10) == 4 && (number_sum % 10) == 0)
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
        return 0;
    }
}

int get_card_length(long card_number)
{
    int digit_count = 0;

    while (card_number)
    {
        card_number /= 10;
        digit_count++;
    }

    return digit_count;
}
