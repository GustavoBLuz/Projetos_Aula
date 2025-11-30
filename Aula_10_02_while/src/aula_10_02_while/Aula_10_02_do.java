/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aula_10_02_while;

/**
 *
 * @author 18113143
 */
import javax.swing.*;
public class Aula_10_02_do {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here

        int matricula = 18113143;
        int senha = 2018;
        int login;
        int password;
        do
        {
            String validacao = JOptionPane.showInputDialog(null, "Login");
            login = Integer.parseInt(validacao);
            String validacao2 = JOptionPane.showInputDialog(null, "Digite sua senha");
            password = Integer.parseInt(validacao2);
       } while(matricula != login || password != senha);
        System.out.println("Você esta logado no sistema. Usuario: "+login);
    }
    
}
