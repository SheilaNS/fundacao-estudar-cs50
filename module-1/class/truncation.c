#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");

    float z = (float) x / (float) y; // conveerte x e y em fldoat antes de fazer a operação de ddivisão

    printf("%f\n", z);
}
