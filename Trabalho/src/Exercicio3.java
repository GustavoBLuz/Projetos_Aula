
import javax.swing.JOptionPane;

/**
 *
 * @author 18113143
 *  3. Elaborar um programa que leia dois valores inteiros e troque o valor, a e b de forma que a fique com o valor de
    b, b com o valor de a.
 */
import javax.swing.*;
public class Exercicio3 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
         int a, b, save;
            
            String valorA = JOptionPane.showInputDialog(null,"Digite o primeiro valor inteiro");
            a = Integer.parseInt(valorA);
            
            String valorB  = JOptionPane.showInputDialog(null,"Digite o segundo valor inteiro");
            b = Integer.parseInt(valorB);
            save = a;
            a = b;
            b = save;
            JOptionPane.showMessageDialog(null,"Valor de a foi invertido com o de b, agora o valor de a é: "+ a + " e o valor de b: " + b);
    }
}
