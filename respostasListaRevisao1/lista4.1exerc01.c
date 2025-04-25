#include <stdio.h>

int main()
{
    printf("Bem vindo ao evento cultural");
    int idade, estudante;

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    if (idade <= 11 || idade >= 60)
    {
        printf("Entrada Gratuita");
    }
    else 
    {
        printf("Voce é estudante: (1 para sim e 0 para não)");
        scanf("%d", &estudante);
        
        if (idade >= 12 && idade <= 17)
        {
            if (estudante == 1)
            {
                printf("Entrada com 50% de desconto");
            }
            else
            {
                printf("Entrada com 25% de desconto");
            }
        }
        if (idade >= 18 && idade <= 59)
        {
            if (estudante == 1)
            {
                printf("Entrada com 25% de desconto");
            }
            else
            {
                printf("Entrada normal");
            }
        }
    }


    return 0;
}