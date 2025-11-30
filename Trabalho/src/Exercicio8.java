
/**
 *
 * @author 18113143
 *  8. Faça um programa que leia a idade de uma pessoa expressa em anos,
 *  meses e dias e mostre-a expressa apenas em dias.
 */
import javax.swing.*;
public class Exercicio8 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
            int ano,mes,dia,diaRes;
          String primeiro = JOptionPane.showInputDialog(null,"Digite sua idade");
          ano = Integer.parseInt(primeiro);
          mes = (ano*12);
          diaRes = (ano*365);
          JOptionPane.showMessageDialog(null,"Sua idade convertida para dias: "+diaRes);
    }
}
