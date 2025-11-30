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
public class Exercicio6 {

    /**
     * 6. Implemente um programa que recebe um número de 1 a 5 e imprime o seguintes:
     * Obs: Usar JoptionPane...
            1 – Bom Dia.(Nome da pessoa)
            2- Boa Tarde.
            3 – Gostaria de Compartilhar seu dia (dia do aniversário)
            4- Volte sempre! 
            5- Retornar
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int numeroRec = 0, dataAniv = 0;
        String nome = JOptionPane.showInputDialog(null, "Digite o seu nome abaixo");
        String aniver = JOptionPane.showInputDialog(null, "Insira o dia em que nasceu: ");
        dataAniv = Integer.parseInt(aniver);
        String numero = JOptionPane.showInputDialog(null, "Digite a opção desejada(1 a 5)");
        numeroRec = Integer.parseInt(numero);
        
        if(numeroRec == 1)
        {
            JOptionPane.showMessageDialog(null, "Bom Dia. "+nome);
        }else
        {
            if(numeroRec == 2)
            {
                JOptionPane.showMessageDialog(null, "Bom Tarde.");
            }else
            {
                if(numeroRec == 3)
                {
                    JOptionPane.showMessageDialog(null, "Gostaria de Compartilhar seu dia:  "+dataAniv);
                }else
                {
                    if(numeroRec == 4)
                    {
                        JOptionPane.showMessageDialog(null, "Volte Sempre!");
                    }else
                    {
                        JOptionPane.showMessageDialog(null, "Retornar");
                    }
                }
            }
        }
    }
}
