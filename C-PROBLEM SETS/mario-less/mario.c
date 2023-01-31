#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int altura;
    int count = 0;
    do
    {
        altura = get_int("Altura del bloque: ");

    }
    while (altura < 1 || altura > 8);

    for (int i = 0; i < altura; i++)
    {
        for (int j = altura - 1; j > i; j--)
            printf(" ");
        for (int j = 0; j <= i; j++)
            printf("#");
        printf("\n");

            }


    }


