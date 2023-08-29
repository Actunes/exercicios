#include <stdio.h>

#define MAX 30

void leVetor(int vetor[MAX]) {
    int i;

    printf("===================================\n");
    for (i = 0; i < MAX; i++) {
        printf("Digite o %d valor: ", i);
        scanf("%d", &vetor[i]);
    }
}

int acha_maior(int vetor[MAX]) {
    int maior = 0;
    int i;

    for (i = 0; i < MAX; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }
    }
    return maior;
}

int conta_maior(int vetor[MAX], int maior){
    int repete = 0;
    int i;

    for (i = 0; i < MAX; i++){
        if(vetor[i] == maior){
            repete++;
        }
    }
    return repete;
}

int main() {
    int vetor[MAX];
    int maior;
    int repete;

    leVetor(vetor);
    maior = acha_maior(vetor);
    repete = conta_maior(vetor,maior);

    printf("============ RESULTADO ============\nMaior valor encontrado: %d\nVezes que se repete: %d",maior, repete);
    return 0;
}
