package org.example;

import javax.swing.*;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        boolean triangulo = false;
        Scanner entrada = new Scanner(System.in);


        String as = JOptionPane.showInputDialog("Digite o valor de A");
        String bs = JOptionPane.showInputDialog("Digite o valor de B");
        String cs = JOptionPane.showInputDialog("Digite o valor de C");

        int a = Integer.parseInt(as);
        int b = Integer.parseInt(bs);
        int c = Integer.parseInt(cs);


//        System.out.println("=======================");
//        System.out.println("Digite o valor de A:");
//        a = entrada.nextInt();
//        System.out.println("Digite o valor de B: ");
//        b = entrada.nextInt();
//        System.out.println("Digite o valor de C: ");
//        c = entrada.nextInt();

        System.out.println("========= RESULTADO =========");
        if ( a < b+c || b < a+c || c < a+b){
            System.out.println("É um triangulo!");
            triangulo = true;
        }else {
            System.out.println("Não é um triangulo!");
        }

        if (triangulo){
            if(a == b && b == c){
                System.out.println("Triangulo equilátero");
            }else if (a != b && b != c){
                System.out.println("Triangulo escaleno");
            }else{
                System.out.println("Triangulo isósceles");
            }
        }
    }
}