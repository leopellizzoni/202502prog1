#include <stdio.h>

int main()
{
    float nota1, nota2, media;
    int totalAtividades;
    
    printf("Nota 1: ");
    scanf("%f", &nota1);
    printf("Nota 2: ");
    scanf("%f", &nota2);
    printf("Atividades: ");
    scanf("%d", &totalAtividades);

    media = (nota1 + nota2) / 2;

    if (media < 6)
    {
        printf("Reprovado");
    }
    else if (media >= 6)
    {
        if (totalAtividades >= 5)
        {
            printf("Aprovado com bônus");
        }
        else
        {
            printf("Aprovado");
        }
    }
}