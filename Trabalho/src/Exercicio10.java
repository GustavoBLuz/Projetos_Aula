/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package trabalho;

/**
 *
 * @author 18113143
 * 10. Faça um programa que leia as 3 notas de um aluno 
 * e calcule a média final deste aluno. Considerar que a
   média é ponderada e que o peso das notas é: 2, 3 e 5, respectivamente
 */
import javax.swing.*;
public class Exercicio10 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
       float nota1, nota2, nota3, media;
       float p1 = 2, p2 = 3, p3 = 5;
        
            String primeiro = JOptionPane.showInputDialog(null, "Digite a primeira nota");
            nota1 = Float.parseFloat(primeiro);
            
            String segundo = JOptionPane.showInputDialog(null, "Digite a segunda nota");
            nota2 = Float.parseFloat(segundo);
            
            String terceiro = JOptionPane.showInputDialog(null, "Digite a terceira nota");
            nota3 = Float.parseFloat(terceiro);
                 
            media = (nota1*p1+nota2*p2+nota3*p3)/(p2+p1+p3);
            JOptionPane.showMessageDialog(null,"Média do aluno é: " + media);
    }
}
