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
        float x;
        Scanner teclado = new Scanner(System.in);
        Conta contaIgor = new Conta();
        Conta contaMaria = new Conta();

        contaIgor.setTitular("Igor");
        contaIgor.setNumero(1);
        contaIgor.setSaldo(1000);

        contaMaria.setTitular("Maria");
        contaMaria.setNumero(2);
        contaMaria.setSaldo(0);

        System.out.println("Digite o valor para transferencia: ");
        x = teclado.nextFloat();
        contaIgor.transfere(contaMaria,x);

        //operacoes

//        contaIgor.saque(60);
//        contaIgor.deposito(20);
//        contaIgor.saque(80);
//        contaIgor.saque(30);
//        contaIgor.deposito(30);
//        contaIgor.saque(70);

//        System.out.println("Titular: " + contaIgor.getTitular());
//        System.out.println("Número: " + contaIgor.getNumero());
//        System.out.println("Saldo: " + contaIgor.getSaldo());



    }
}