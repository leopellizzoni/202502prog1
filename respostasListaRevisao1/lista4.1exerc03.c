#include <stdio.h>

int main()
{
    int contador, juradoMenorNota;
    float menor = 11, maior = 0, media, notaAtual;

    for (contador = 1; contador <= 7; contador++)
    {
        printf("Jurado %d | Informe a nota (0 até 10): ", contador);
        scanf("%f", notaAtual);

        if (notaAtual > maior)
        {
            maior = notaAtual;
        }

        if (notaAtual < menor)
        {
            menor = notaAtual;
            juradoMenorNota = contador;
        }

        media = media + notaAtual;
    }

    media = media / 7;

    printf("\nMenor das Notas: %f pelo Jurado %d", menor, juradoMenorNota);
    printf("\nMaior das Notas: %f", maior);
    printf("\nMédia das Notas: %f", media);
}