#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("hello world!\n");

    string nome = get_string("Qual é seu nome? \n");
    printf("hello,%s \n", nome);
}
