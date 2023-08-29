package com.example;

public class Retangulo {
    private int altura;
    private int largura;

    public int getAltura() {
        return altura;
    }
    public void setAltura(int altura) {
        this.altura = altura;
    }
    public int getLargura() {
        return largura;
    }
    public void setLargura(int largura) {
        this.largura = largura;
    }

    public void calcularArea(){
        int area = this.largura * this.altura;
        System.out.println("Area calculada: " + area);
    }
    public void calcularPerimetro(){
        int perimetro = 2 * (this.largura + this.altura);
        System.out.println("Perimetro calculado: " + perimetro);
    }
}
