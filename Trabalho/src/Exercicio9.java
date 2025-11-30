/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package trabalho;

/**
 *
 * @author 18113143
 *  9. Faça um programa que leia a idade de uma pessoa expressa 
 *  em dias e mostre-a expressa em anos, meses e dias.
 */
import javax.swing.*;
public class Exercicio9 {

    /**
     * @param args the command line arguments
     */
    
    public static void main(String[] args) {
        // TODO code application logic here
          int ano,mes,dia,diaLeitura;
          String primeiro = JOptionPane.showInputDialog(null,"Digite sua idade");
          diaLeitura = Integer.parseInt(primeiro);
          dia = diaLeitura;
          mes = (dia)/30;
          ano = (mes)/12;
          JOptionPane.showMessageDialog(null,"Sua idade em dias: "+dia+" sua idade em meses: "+mes+" sua idade em anos: "+ano);
    }
}
