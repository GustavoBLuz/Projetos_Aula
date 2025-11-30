/**
 *
 * @author 18113143
 * 5. Faça um programa que leia dois valores do tipo float e calcule +, -, *, / e o %.
 */
import javax.swing.*;
public class Exercicio5 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
         float pri, seg, soma, subt, mult, div, resto;
            
            String primeiro = JOptionPane.showInputDialog(null,"Digite o primeiro valor");
            pri = Float.parseFloat(primeiro);
            
            String segundo  = JOptionPane.showInputDialog(null,"Digite o segundo valor");
            seg = Float.parseFloat(segundo);
            soma  = (pri + seg);
            JOptionPane.showMessageDialog(null,"Resultado da soma: "+soma);
            
            subt  = (pri - seg);
            JOptionPane.showMessageDialog(null,"Resultado da subtração: "+subt);
            
            mult  = (pri * seg);
            JOptionPane.showMessageDialog(null,"Produto da multiplicação: "+mult);
            
            div   = (pri / seg);
            JOptionPane.showMessageDialog(null,"Resultado da Divisão: "+div);
            
            resto = (pri % seg);
            JOptionPane.showMessageDialog(null,"Resto da Divisão: "+resto);
    }
}
