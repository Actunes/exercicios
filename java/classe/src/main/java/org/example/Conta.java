package org.example;

public class Conta {
    private int numero;

    public int getNumero() {
        return numero;
    }

    public void setNumero(int numero) {
        this.numero = numero;
    }

    public float getSaldo() {
        return saldo;
    }

    public void setSaldo(float saldo) {
        this.saldo = saldo;
    }

    private float saldo;
    private String titular;
    public String senha;

    public String getTitular(){
        return this.titular;
    }

    public void setTitular(String titular){
        this.titular = titular;
    }

    public boolean saque(float valor){
        if(valor < this.saldo){
            this.saldo -= valor;
            return true;
        }else{
            System.out.println("Saldo insuficiente!");
            return false;
        }

    }

    public void deposito (float valor){
        this.saldo += valor;
    }

    public void transfere (Conta contaDestino,float valor){
        if (this.saque(valor)){
            contaDestino.deposito(valor);
        }else{
            System.out.println("Saldo insuficiente para transferencia!");
        }

    }

}
