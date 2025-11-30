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
public class Exercicio8 {

    /**
     * @param args the command line arguments
     * 8. A Loja Marieta está vendendo seus produtos em 6 (seis) prestações sem juros. Faça um
        programa que receba um valor de uma compra e mostre o valor das prestações.
     */
    public static void main(String[] args) {
        // TODO code application logic here
        float valorCompra = 0, valorParcela = 0;
        float valorConv = 0, valorReal = 0, cotaEuro = 0, taxa100 = 0.025F, taxa1000 = 0.035F, taxa = 0;
        
        String compra = JOptionPane.showInputDialog(null, "Digite o valor da compra para ser parcelado");
        valorCompra = Float.parseFloat(compra);
        
        valorParcela = (valorCompra/6);
        JOptionPane.showMessageDialog(null, "O valor de cada prestação será de: R$"+valorParcela);
    }
}
