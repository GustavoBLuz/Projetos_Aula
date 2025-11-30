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
public class Exercicio7 {

    /**
     * @param args the command line arguments
     * 7. Elaborar um programa que efetue a apresentação do valor da conversão em real (R$) 
     * de um valor lido em EUROS (EUR$). O programa deverá solicitar o valor da cotação do Euro 
     * do dia e também a quantidade de EUROS disponíveis com o usuário para converter, 
     * se o valor da conversão for menor que EUR$ 100 então aplicar uma taxa de 2,5 de IOF sobre transação,
     * se for maior que EUR 1,000 então aplicar uma taxa de 3,5 IOF e no final 
     * de mostrar a taxa e a quantidade de euros convertidos. O valor do EURO 4,0165.
     */
    public static void main(String[] args) {
        // TODO code application logic here
        float valorConv = 0, valorReal = 0, cotaEuro = 0, taxa100 = 0.025F, taxa1000 = 0.035F, taxa = 0;
        String euroReceb = JOptionPane.showInputDialog(null, "Digite o valor disponivel do euro para troca");
        valorConv = Float.parseFloat(euroReceb);
        String cotacao = JOptionPane.showInputDialog(null, "Digite a cotação do Euro de hoje: ");
        cotaEuro = Float.parseFloat(cotacao);
        if(valorConv < 100)
        {
            taxa = (valorConv*taxa100);
            valorReal = (valorConv*cotaEuro) - taxa;
            JOptionPane.showMessageDialog(null, "Seu valor em Real(R$) após a conversão: R$"+valorReal+"\ncom uma taxa de R$"+taxa);
        }else
        {
            if(valorConv > 1000)
            {
                taxa = (valorConv*taxa1000);
                valorReal = (valorConv*cotaEuro) - taxa;
                JOptionPane.showMessageDialog(null, "Seu valor em Real(R$) após a conversão: R$"+valorReal+"\ncom uma taxa de R$"+taxa);
            }else
            {
            valorReal = valorConv*cotaEuro;
            JOptionPane.showMessageDialog(null, "Seu valor em Real(R$) após a conversão: R$"+valorReal);
            }
        }
        
        
        
    }
}
