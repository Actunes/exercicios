/* 1.
 * Ler quatro valores numéricos inteiros e apresentar o resultado das adições e das multi
 * plicações utilizando a propriedade distribuitiva para a máxima combinação possivel entre
 * as quatro variaveis. Por exeplo, considerando o uso das variáveis A,B,C e D, devem
 * ser feitas seis adições e seis multiplicações, ou seja, deve ser combinada a
 * variavel A com B, A com C e A com D. Depois é necessário combinar a variável B com C
 * e B com D. Por último ocmbinar C com D.
 */


#include<stdio.h>

int main (){
    int a = 0, b = 0, c = 0, d = 0;
    int resA[6], resB[4], resC[2];

    printf("Digite o valor para A:");
    scanf("%d", &a);
    printf("Digite o valor para B:");
    scanf("%d", &b);
    printf("Digite o valor para C:");
    scanf("%d", &c);
    printf("Digite o valor para D:");
    scanf("%d", &d);

    resA[0] = a + b;
    resA[1] = a * b;
    resA[2] = a + c;
    resA[3] = a * c;
    resA[4] = a + d;
    resA[5] = a * c;

    resB[0] = b + c;
    resB[1] = b * c;
    resB[2] = b + d;
    resB[3] = b * d;

    resC[0] = c + d;
    resC[1] = c * d;


    printf("\n======================\n");
    printf("Resultados de A:\nA+B=%d\nA*B=%d\nA+C=%d\nA*C=%d\nA+D=%d\nA*D=%d", resA[0],resA[1],resA[2],resA[3],resA[4],resA[5]);
    printf("\n======================\n");
    printf("Resultados de B:\nB+C=%d\nB*C=%d\nB+D=%d\nB*D=%d\nA+D=%d\nA*D=%d", resB[0],resB[1],resB[2],resB[3]);
    printf("\n======================\n");
    printf("Resultados de C:\nC+D=%d\nC*D=%d", resC[0],resC[1]);

}
/* 2.
 *  Elabore um algoritmo que dada a idade de um nadador classifica-o em uma das seguintes
 *  categorias:
 *  infantil A = 5 - 7 anos
*   infantil B = 8 - 10 anos
*   juvenil A = 11-13 anos
*   juvenil B = 14-17 anos
*   adulto = maiores de 18 anos
*   sênior = 69 ou 70 anos
 */

#include<stdio.h>

int main (){
    int idade;
    printf("Digite uma idade para o nadador:");
    scanf("%d", &idade);

    if (idade < 5 || idade >= 70){
        printf("Digite uma idade VALIDA para o nadador:");
        scanf("%d", &idade);
    }

    if ( idade >= 5 && idade <= 7){
        printf("infantil A");
    }else if ( idade >= 8 && idade <= 10){
        printf("infantil B");
    }else if ( idade >= 11 && idade <= 13 ){
        printf("Juvenil A");
    }else if ( idade >= 14 && idade <= 17 ){
        printf("Juvenil B");
    }else if ( idade >= 18 && idade <= 68 ){
        printf("Adulto");
    }else{
        printf("Senior");
    }

}