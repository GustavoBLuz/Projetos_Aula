/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package pkg08_28_aula;

/**
 *
 * @author 18113143
 */
import javax.swing.*;
public class Main {
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        //x é uma variavel q tem o valor 521 guardado nela
        int x = 521;
        int idade = 0;
        int idade2 = 0;
        JOptionPane.showMessageDialog(null, "Não\nme\ndiga\n"+(3+7), "Atenção", JOptionPane.ERROR_MESSAGE);
        JOptionPane.showMessageDialog(null, "O conteudo de x é "+x);
        
        String nome = JOptionPane.showInputDialog(null, "Digite o seu nome ");
        JOptionPane.showMessageDialog(null, "☻ Bem vindo "+nome+" ☺");
        
        String idade_string = JOptionPane.showInputDialog(null, "Informe a sua idade");
        idade = Integer.parseInt(idade_string);
   
        String idade2_string = JOptionPane.showInputDialog(null, "Informe outra idade");
        idade2 = Integer.parseInt(idade2_string);
        
        x= 2018 - idade;
        JOptionPane.showMessageDialog(null, "Você nasceu em: "+ x);
        if(idade > idade2)
        {
            x= idade - idade2;
        }else
        {
            x=idade2 - idade;
        }
        JOptionPane.showMessageDialog(null, "A diferença de idade é: "+x);

        String genero = JOptionPane.showInputDialog(null, "Digite seu Genero");
        if(genero.equalsIgnoreCase("F"))
        {
            JOptionPane.showMessageDialog(null, "Genero Feminino");
        }else
        {
            JOptionPane.showMessageDialog(null, "Genero Masculino");
            
        }
        
        System.exit(0);
        
    }
}
