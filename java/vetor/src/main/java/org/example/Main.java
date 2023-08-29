/*
Escreva um algoritmo que leia um vetor de 5 elementos inteiros. Encontre e mostre o maior elemento e a sua posição.
*/

package org.example;

import java.lang.reflect.Array;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int vet[] = new int[5];
        int i;
        int maiorValor = 0;
        int indiceMaiorValor = 0;
        Scanner teclado = new Scanner(System.in);

        for (i = 0; i < vet.length; i++){
            vet[i] = teclado.nextInt();
            if (vet[i] > maiorValor){
                maiorValor = vet[i];
                indiceMaiorValor = i;
            }
        }

        System.out.println("=====================");
        System.out.println("Maior valor encontrado: " + maiorValor + "\n" + "Indice do valor encontrado: " + indiceMaiorValor);
    }
}