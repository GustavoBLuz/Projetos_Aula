/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package prova1;

/**
 *
 * @author 18113143
 */
import javax.swing.*;
public class Exercicio10 {

    /**
     * @param args the command line arguments
     * 10)Escrever um programa que leia o nome de um vendedor, 
     * o seu salário fixo e o total de vendas efetuadas por ele no mês em dinheiro e cartão de crédito. 
     * Sabendo que este vendedor ganha 15% 
     * de comissão sobre suas vendas efetuadas com dinheiro e 5% sobre o cartão de crédito, 
     * informar o seu nome, o salário fixo e salário no final do mês.
     */
    public static void main(String[] args) {
        // TODO code application logic here
        float salaFixo = 0, totalVendas = 0,totalCartao =0, salaFinalMes, comissaoDin = 0.15F, comisCartao = 0.05F;
        
         String nome = JOptionPane.showInputDialog(null, "Digite o seu nome: ");
         
         String salario = JOptionPane.showInputDialog(null, "Digite o seu salario fixo");
         salaFixo = Float.parseFloat(salario);
         
         String compras = JOptionPane.showInputDialog(null, "Insira o valor de vendas em dinheiro");
         totalVendas= Float.parseFloat(compras);
         
         String comprasNoCartao = JOptionPane.showInputDialog(null, "Insira o valor de vendas no cartão");
         totalCartao = Float.parseFloat(comprasNoCartao);
         
         salaFinalMes = (totalVendas*comissaoDin)+(totalCartao*comisCartao)+salaFixo;
         
         JOptionPane.showMessageDialog(null, "O vendedor "+nome+" irá receber R$"+salaFinalMes+" no final do me s");
    }
}
