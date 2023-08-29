Exercicios Lista 4 --

- 1 -
/*
 * Ler 10 valores inteiros e os armazene em um vetor. O programa deve percorrer o vetor e contar a quanti
 * dade de números pares e a quantidade de números impares. Apresente como resultado as quantidades
 * encontradas.
 */

#include<stdio.h>

int main (){
    int vetor[10];
    int contImp=0;
    int contPar=0;

    int i;

    for (i = 0; i < 10; i++){
        printf("Digite o valor de %d:", i);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 10; i++){
        if (vetor[i] % 2 == 0){
            contPar += 1;
        }else{
            contImp += 1;
        }
    }

    printf("Quantidade de numeros pares encontrados: %d\nQuantidade de numeros impares encontrados: %d", contPar, contImp);

}

- 2 -
/*
 * Leia um vetor de 10 valores inteiros e a seguir mostre quantos iguais ao ultimo valor existe no vetor.
 */

#include<stdio.h>

int main (){

    int vetor[10];
    int contador = 0;

    int i;

    for (i = 0; i < 10; i++) {
        printf("Digite o valor de %d:", i);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 10; i++){
        if (vetor[i] == vetor[9]) {
            contador +=1;
        }else{
            continue;
        }
    }

    printf("Valores iguais ao ultimo vetor %d: %d ",vetor[9], contador);
}
- 3 -
/*
 * Faça um programa que lê um conjunto de 10 valores. Após a leitura, coloque em 2 vetores conforme
 * forem pares ou ímpares. Mostre o vetor com os elementos pares e em seguida aquele com os elementos
 * impares. Cuide para imprimir somente os elementos válidos destes vetores.
 */

#include<stdio.h>

int main (){

    int vetor[10];
    int vetorPar[10];
    int vetorImpar[10];
    int contador1 = 0;
    int contador2 = 0;

    int i;

    for (i = 0; i < 10; i++){
        printf("Digite o valor de %d:", i);
        scanf("%d", &vetor[i]);
    }
    for (i = 0; i < 10; i++){
        if (vetor[i] % 2 == 0){
           vetorPar[contador1] = vetor[i];
           contador1 +=1;
        }else{
            vetorImpar[contador2] = vetor[i];
            contador2 +=1;
        }
    }

    printf("Vetor Par:\n");
    for ( i = 0; i < contador1; i++){
        printf("%d", vetorPar);
    }
    printf("\n");
    printf("Vetor Impar:\n");
    for ( i = 0; i < contador1; i++){
        printf("%d", vetorImpar);
    }

}