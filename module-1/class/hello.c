#include <cs50.h> // header file dá acesso a funções que podemos usar de forma automática, por exemplo "get_string"
#include <stdio.h>

int main(void) // função inicial principal, retorna void(nada)
{
    string answer = get_string("What's your name? ");
    
    printf("hello, %s!\n", answer);
}
