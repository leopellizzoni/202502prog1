#include <stdio.h>

int main()
{
    float maior, menor, atual;
    int i;

    for (i = 0; i <= 9; i ++)
    {
        printf("Informe qualquer número real (positivo ou negativo): ");
        scanf("%f", &atual);

        if (i == 0)
        {
            maior = atual;
            menor = atual;
        }
        else
        {
            if (atual > maior)
            {
                maior = atual;
            }

            if (atual < menor)
            {
                menor = atual;
            }
        }
    }

    printf("O maior numero é %f e o menor %f", maior, menor);
}