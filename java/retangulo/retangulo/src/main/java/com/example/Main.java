package com.example;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int largura;
        int altura;

        try (Scanner teclado = new Scanner(System.in)) {
            Retangulo retangulo1 = new Retangulo();

            System.out.println("======================");
            System.out.println("Digite um valor para a largura[0,20]:");
            largura = teclado.nextInt();
            while (largura < 0 || largura > 20) {
                System.out.println("Número invalido, digite um valor entre 0 e 20:");
                largura = teclado.nextInt();
            }
            retangulo1.setLargura(largura);

            System.out.println("=====");
            ;
            System.out.println("Digite um valor para a altura[0,20]:");
            altura = teclado.nextInt();
            while (altura < 0 || altura > 20) {
                System.out.println("Número invalido, digite um valor entre 0 e 20:");
                altura = teclado.nextInt();
            }
            retangulo1.setAltura(altura);
            
            System.out.println("======================");
            retangulo1.calcularArea();
            retangulo1.calcularPerimetro();
        }
    }
}