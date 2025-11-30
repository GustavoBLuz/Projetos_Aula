/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package trabalho;

/**
 *
 * @author 18113143
 * 
   7. Crie um programa que leia 5 números
   inteiros e apresente a soma de todos os números lidos.
 */
import javax.swing.*;
public class Exercicio7 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int num1, num2, num3,num4,num5, result;
        
         String primeiro = JOptionPane.showInputDialog(null,"Digite o primeiro valor inteiro");
         num1 = Integer.parseInt(primeiro);
         String segundo = JOptionPane.showInputDialog(null,"Digite o segundo valor inteiro");
         num2 = Integer.parseInt(segundo);
         String terceiro = JOptionPane.showInputDialog(null,"Digite o terceiro valor inteiro");
         num3 = Integer.parseInt(terceiro);
         String quarto = JOptionPane.showInputDialog(null,"Digite o quarto valor inteiro");
         num4 = Integer.parseInt(quarto);
         String quinto = JOptionPane.showInputDialog(null,"Digite o quinto valor inteiro");
         num5 = Integer.parseInt(quinto);
         
         result = num1+num2+num3+num4+num5;
         
         JOptionPane.showMessageDialog(null,"Resultado da soma dos 5 valores: "+result);
    }
}
