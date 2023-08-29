/*
Faça um programa que escreva na tela um número por extenso de um determinado valor entre 1 e 1000
 */

package org.example;
import javax.swing.*;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        String as = JOptionPane.showInputDialog("Digite um número");
        int numero = Integer.parseInt(as);
        int milhar = numero / 1000;
        int dezena = numero % 100;
        int centena = (numero - dezena)/10;

        System.out.println(milhar);
        System.out.println(centena);
        System.out.println(dezena);

    }
}