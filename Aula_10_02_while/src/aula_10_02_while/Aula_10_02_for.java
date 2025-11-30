/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aula_10_02_while;

import javax.swing.JOptionPane;

/**
 *
 * @author 18113143
 */
public class Aula_10_02_for {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int ano =0;
        int IdadeIni = 0;
        int AnoFinal = 0;
        String validacao = JOptionPane.showInputDialog(null, "Digite o ano em que nasceu");
        IdadeIni = Integer.parseInt(validacao);
        String validacao2 = JOptionPane.showInputDialog(null, "Digite o ano atual");
        AnoFinal = Integer.parseInt(validacao2);
        for(int i = IdadeIni; i<AnoFinal;i++)
        {
            ano++;
        }
        System.out.println("Sua idade: "+ano);
    }
    
}
