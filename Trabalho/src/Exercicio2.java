
import javax.swing.*;
public class Exercicio2 {

    /**
     * @param args the command line arguments
     2. Faça um programa que leia dois valores e calcula o resto da divisão do segundo pelo primeiro.
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int pri, seg, div;
            
            String primeiro = JOptionPane.showInputDialog(null,"Digite o primeiro valor inteiro");
            pri = Integer.parseInt(primeiro);
            
            String segundo  = JOptionPane.showInputDialog(null,"Digite o segundo valor inteiro");
            seg = Integer.parseInt(segundo);
            div = (seg%pri);
            JOptionPane.showMessageDialog(null,"Resultado da Divisão: "+div);
    }
}