#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int altura, linha, coluna, espacos;

    do
    {
        altura = get_int("altura: "); // Correção na atribuição
    }
    while (altura < 1 || altura > 8);

    for (linha = 0; linha < altura; linha++) // Correção no operador de atribuição
    {
        // Imprimir espaços
        for (espacos = 0; espacos < (altura - linha - 1); espacos++) // Correção no operador de atribuição
        {
            printf(" ");
        }

        // Imprimir hashes
        for (coluna = 0; coluna <= linha; coluna++) // Correção no operador de comparação
        {
            printf("#");
        }

        printf("\n");
    }
}
