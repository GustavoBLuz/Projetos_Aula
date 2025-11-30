/**
 *
 * @author 18113143
 * 
 */
import javax.swing.*;
public class Exercicio1 {

    /**
    1. Faça um programa que leia três variáveis do tipo int e que calcula e mostra o produto dos 
    * três inteiros e a divisão do primeiro pelo segundo.
   
     */
    
    public static void main(String[] args) {
        // TODO code application logic here
        int pri, seg, ter, mult, div;
        
            String primeiro = JOptionPane.showInputDialog(null, "Digite o primeiro valor inteiro");
            pri = Integer.parseInt(primeiro);
            
            String segundo = JOptionPane.showInputDialog(null, "Digite o segundo valor inteiro");
            seg = Integer.parseInt(segundo);
            
            String terceiro = JOptionPane.showInputDialog(null, "Digite o terceiro valor inteiro");
            ter = Integer.parseInt(terceiro);
                 
            mult = (pri*seg*ter);
            div = (pri/seg);
            JOptionPane.showMessageDialog(null,"Produto: " + mult + " Resultado da Divisão: "+ div);
            
    }
}
