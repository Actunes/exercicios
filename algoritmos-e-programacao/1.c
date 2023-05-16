1 --

/*
 * Faça um algoritmo que receba a parte fracionária de um númerode ponto
 * flutuante.
 */

#include <stdio.h>

int main(){
    float numeroFlutuante = 0;
    int numeroInteiro = 0;
    float resultado = 0;
    printf("Digite o numero:\n>");
    scanf("%f", &numeroFlutuante);
    numeroInteiro = (int) numeroFlutuante;
   // printf("%f",numeroFlutuante);
    resultado = numeroFlutuante - numeroInteiro;
    printf("%f", resultado);
}

2 --

/*
 * Faça um algoritmo que receba um número inteiro de dois algarismos, e
 * imprima o número com os algorismos invertidos.
 */

#include <stdio.h>

int main (){
    int numeroInteiro = 0;
    int primeiro = 0;
    int segundo = 0;
    int resultado = 0;
    printf("Digite o numero inteiro de dois algorismos\n>");
    scanf("%d", &numeroInteiro);
    //printf("%d", numeroInteiro);
    primeiro = numeroInteiro / 10;
    segundo = numeroInteiro % 10;
    resultado = segundo * 10 + primeiro;
    printf("%d", resultado);
}

6 --

/*
 *  - Uma loja vende seus produtos no sistema entrada mais duas prestações, sendo a
 *  entrada maior do que ou igual ás duas prestações; estas devem ser iguais,
 *  inteiras e as maiores possiveis.
 *  - Por exemplo, se o valor da mercadorio for R$279,00, a entrada e as duas
 *  prestações são iguais a R$ 90,00; se o valor da mercadoria for R$ 302,75, a
 *  entrada é de R$ 102,75 e as duas prestações são iguais a R$ 100,00
 *  > Escrava um programa que receba o valor da mercadoria e forneça o valor da
 *  entrada e das duas prestações, de acordo com as regras.
 *  - Obreserve que uma justificativa para a adoção desta regra é que ela facilita
 *  a confecção e o consequente pagamento dos boletos das duas prestações.
 */

#include <stdio.h>

int main (){
    float valorMercadoria = 0;
    float entrada = 0;
    int prestacao1 = 0;
    float sobra1 = 0;
    int prestacao2 = 0;
    float sobra2 = 0;
    printf("Digite o valor da mercadoria\n> ");
    scanf("%f", &valorMercadoria);
    prestacao1 = (int)valorMercadoria / 3;
    sobra1 = prestacao1 - (valorMercadoria / 3 );
    prestacao2 = (int)valorMercadoria / 3;
    sobra2 = prestacao2 - (valorMercadoria / 3);
    entrada = (valorMercadoria - (prestacao1 + prestacao2));
    printf("Valor da mercadoria: R$%f\n\nEntrada: R$%f\nPrimeira Prestacao: R$%d\nSegunda Prestacao: R$%d", valorMercadoria, entrada, prestacao1, prestacao2);
}

7 --

/* - Um intervalo de tempo pode ser dado em dias, horas, minutos, segundos ou
 * sequências "decrescentes" destas unidades (em dias e horas; em horas e minutos;
 * em horas, minutos e segundos), de acordo com o interesse de quem o está manipulando.
 * - Escreva um programa que converta um intervalo de tempo dado em segundos para horas
 * minutos e segundos. Por exemplo, se o tempo dado for 3 850 segundos, o programa deve
 * fornecer 1 h 4 min 10 s.
 */
#include<stdio.h>

int main (){
    int segundosUsuario = 0;

    int dias = 0;
    int horas = 0;
    int minutos = 0;
    int segundos = 0;

    printf("Digite o intervalo de tempo em segundos:\n> ");
    scanf("%d", &segundosUsuario);
    //printf("%d", segundosUsuario);
    while(segundosUsuario != 0){
        segundosUsuario--;
        segundos++;
        if (segundos == 60){
            minutos++;
            segundos = 0;
        }
        if (minutos == 60){
            horas++;
            minutos = 0;
        }
        if (horas == 24){
            dias++;
            horas = 0;
        }
    }
    printf("%d dias %d horas %d minutos %d segundos", dias, horas, minutos, segundos);
}

8 --

/* De acordo com a Matemática Financeira, o cálculo das prestações para amoritização
 * de um financiamento de valor F em n prestações e a uma taxa de jutos i é dada
 * pela formula
 * • P = F/an¬i, onde an¬i = ((1 + i)n – 1)/(i * (1 + i)n).
 *
 * Escreva um programa que determine o valor das prestações para amortização de um
 * financiamento, dados o valor do financiamento, o número de prestações para
 * amortização e a taxa de juros.
 */

#include <stdio.h>

int main(){
    float valorFinanciamento = 0;
    int numeroPrestacoes = 0;
    float taxaJuros = 0;

    
}

9 -- 

/*
 * Faça um programa que leia um intervalo de tempo (ínicio e fim de intervalos são inseridos
 * em horas e minutos) e apresenta ao usuário o intervalo entre os horários em minutos.
 * O algoritmo deve avisar o usuário caso o horário final seja anterior ao horário inicial.
 */

