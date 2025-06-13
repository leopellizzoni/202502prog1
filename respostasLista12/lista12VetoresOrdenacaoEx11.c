#include <stdio.h>

int main(){
    int candidatos[5], totalVotos[5];
    int regCandidato, voto, i, j, temp, min, contadorRegVoto;

    //Inicializa o vetor dos votos com zero
    for (i = 0; i < 5; i++){
        totalVotos[i] = 0;
    }

    printf("Registre os canditados");

    //Registra todos os cantidatos
    for(i = 0; i < 5; i++){
        printf("\nNumero do cadastro do condidato %d: ", i + 1);
        scanf("%d", &candidatos[i]);
    }

    //faz a ordena��o dos cadastros dos candidatos
    //Depois de organizado o vetor em ordem crescente vamos registrar os votos
    for (i = 0; i < 4; i++) {
        min = i;
        for (j = i + 1; j < 5; j++) {
            if (candidatos[j] < candidatos[min]) {
                min = j;
            }
        }

        temp = candidatos[i];
        candidatos[i] = candidatos[min];
        candidatos[min] = temp;
    }

    printf("Numeros disponiveis: \n");
    for (i = 0; i < 5; i++){
        printf(" %d ", candidatos[i]);
    }
    printf("\n");

    //Fazemos um loop infinito e esse la�o vai parar quando chamarmos o break
    while(1){
        printf("Qual o numero do candidato: ");
        scanf("%d", &regCandidato);

        if (regCandidato <= 0){
            break; //Esse break aqui vai parar o la�o do while que esta infinito
        }

        //Vai procurar o candidato no vetor para saber onde incrementar os votos depois
        contadorRegVoto = -1; //assume que nao achou o candidato
        for (i = 0; i < 5; i++){
            if(candidatos[i] == regCandidato){
                contadorRegVoto = i;
                break; //Quando achar para o la�o do for. O la�o do while vai continuar.
            }
        }

        if (contadorRegVoto == -1){
            printf("\nVoce digitou um numero de candidato que nao existe.\n");
            continue;
        }

        printf("Informe a quantidade de votos para o candidato %d: ", candidatos[contadorRegVoto]);
        scanf("%d", &voto);

        if (voto <= 0){
            break; //Esse break aqui vai parar o la�o do while que esta infinito
        }

        totalVotos[contadorRegVoto] = totalVotos[contadorRegVoto] + voto;
    }

    //Depois de registrado todos os votos vamos imprimir o candidato e seus votos

    for (i = 0; i < 5; i++){
        printf("Votos do candidato %d: %d\n", candidatos[i], totalVotos[i]);

    }
}
