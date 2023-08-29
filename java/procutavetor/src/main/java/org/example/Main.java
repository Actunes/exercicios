/*
Faã um  algoritmo que leia um vetor  V de 10 posições e, após, verifica se um número N, fornecido pelo usuario, existe
no vetor. Se existir, indicar a(s) posição(ões), senão escrever a mensagem "O número fornecido não existe no vetor"
*/

package org.example;

import java.lang.reflect.Array;
import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
       int vetor[] = new int [10];
       boolean existe = false;
       int posicao = 0;
       Scanner teclado = new Scanner(System.in);

       System.out.println("Lendo valores do vetor:");
       for ( int i = 0; i < vetor.length ; i++){
           vetor[i] = teclado.nextInt();
       }
       System.out.println("Digite o valor para procurar no vetor");
       int escolhaUsuario = teclado.nextInt();

       for (int i = 0; i < vetor.length; i++){
           if (escolhaUsuario == vetor[i]){
               existe = true;
               posicao = vetor[i];
           }
       }

       if (existe){
           System.out.println("Numero digitado: " + escolhaUsuario);
           System.out.println("Posição encontrada: " + posicao);
       }else{
           System.out.println("O número fornecido não existe!");
       }


//       int posicao = Arrays.binarySearch(vetor, escolhaUsuario);
//       System.out.println(posicao);

    }
}