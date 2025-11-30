
/**
 *
 * @author 18113143
 *   6. Crie um programa que peça o nome e a altura de uma pessoa em centímetros e apresente na tela o nome e a
    altura em metros.
 */
import javax.swing.*;
public class Exercicio6 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
         float alt, metros;
         
            
            String nome = JOptionPane.showInputDialog(null,"Digite o seu nome");
            
            String altura  = JOptionPane.showInputDialog(null,"Digite sua altura em centimetros");
            alt = Float.parseFloat(altura);
            metros = (alt/100);  
            JOptionPane.showMessageDialog(null, "Seu nome é: "+ nome + " e sua altura em metros: "+ metros);
    }
}
