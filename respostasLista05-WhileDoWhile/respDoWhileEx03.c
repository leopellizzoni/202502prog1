#include <stdio.h>

int main() {
    int numero, menor, contagemMenor, contador = 0;

    menor = contagemMenor = 0;

    printf("Digite 20 n�meros inteiros:\n");

    do {
        printf("N�mero %d: ", contador + 1);
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (contador == 0 || numero < menor) {
            menor = numero;
            contagemMenor = 1;
        }

        else if (numero == menor) {
            contagemMenor++;
        }

        contador++;

    } while (contador < 20);


    if (contador < 20) {
        printf("\nVoc� inseriu menos de 20 n�meros.\n");
    }

    printf("\nO menor n�mero digitado foi: %d\n", menor);
    printf("Quantidade de n�meros iguais a %d: %d\n", menor, contagemMenor);

    return 0;
}
