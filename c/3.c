#include <stdio.h>

int main() {
 // Criar vetor <tipo> <nome> [<dimensão>]
 float notas[4];
 int cont;

 // loop for
 for (cont = 0; cont < 4; cont++){
     scanf("%f", &notas[cont]);
    }

 for (cont = 0; cont < 4; cont++){
     printf("%f", notas[cont]);
    }
}



======= LISTA 5 - VETORES ======= 

/* 1.
 * Crie um programa que leia 15 elementos de um vetor A. Construir um vetor B de
 * mesmo tipo, observando a seguinte lei de formação: Todo elemento de B deve ser
 * o quadrado do elemento de A correspondente. Apresentar os 2 vetores no final
 * do algoritmo
 */

#include <stdio.h>

int main (){
    int elementos[15];
    int elementosQuadrado[15];
    int contador = 0;
    for ( contador = 0; contador < 15; contador++){
        printf("Digite o %d valor\n>", contador + 1);
        scanf("%d", &elementos[contador]);
        elementosQuadrado[contador] = elementos[contador] * elementos[contador];
    }

    printf("Elementos do vetor:\n");
    for (contador = 0; contador < 15; contador ++){
        printf("%d\n", elementos[contador]);
    }
    printf("------------------\n\n");
    printf("Elementos do vetor ao quadrado: \n");
    for (contador = 0; contador < 15; contador ++){
        printf("%d\n", elementosQuadrado[contador]);
    }
    printf("------------------\n\n");
}


/* 2.
 * Criar um programa que leia os valores 5 valores de um vetor do tipo inteiro, e
 * então, construir um segundo vetor de mesma dimensão, sendo que cada elemento
 * do segundo valor é o somatorio do elemento correspondente no primeiro:
 * Ex: Vet_A[0] = 5; logo, Vet_B[0] = 15 (1 + 2 + 3 + 4 + 5 = 15).
 */

#include <stdio.h>

int main (){
    int vet_A[5];
    int vet_B[5];
    int contador = 0;
    int contador2 = 0;
    int soma=0;
    int soma2=0;
    for ( contador = 0; contador < 5; contador ++){
        printf("Digite o %d valor\n>", contador);
        scanf("%d", &vet_A[contador]);
        for (contador2 = 0; contador2 < vet_A[contador]; contador2++){
            soma = contador2 + 1;
            soma2 = soma2 + soma;
        }
        printf("%d\n", soma2);
        vet_B[contador] = soma2;
        soma2 = 0;
    }

    printf("Valores do vetor:\n");
    for (contador = 0; contador < 5; contador++){
        printf("%d\n", vet_B[contador]);
    }
    printf("=====================");
}

/* 3.
 * Supondo que uma string contém o nome de um arquivo qualquer de imagem no formato gif.
 * Faça uma função que, através de ponteiros (nome do vetor), altere a substring "gif" por "png".
 * Ex: foto1.gif > foto2.png
 */


======= LISTA 6 - VETORES ======= 

/* 3.
 * Supondo que uma string contém o nome de um arquivo qualquer de imagem no formato gif.
 * Faça uma função que, através de ponteiros (nome do vetor), altere a substring "gif" por "png".
 * Ex: foto1.gif > foto2.png
 */

#include<stdio.h>

int main(){
    int contador = 0;
    char arquivo[] = "foto1.png";
    printf("Extensao do arquivo:\n>");
    for (contador = 5; contador < 9; contador++){
        printf("%c", arquivo[contador]);
    }
    for (contador = 5; contador < 9; contador++){
        
    }

}