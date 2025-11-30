/*
 *
 * @author 18113143
 * 4. Leia três notas de um aluno e calcule sua média aritmética.
 */
import javax.swing.*;
public class Exercicio4 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
         int nota1, nota2, nota3, media;
        
            String primeiro = JOptionPane.showInputDialog(null, "Digite a primeira nota");
            nota1 = Integer.parseInt(primeiro);
            
            String segundo = JOptionPane.showInputDialog(null, "Digite a segunda nota");
            nota2 = Integer.parseInt(segundo);
            
            String terceiro = JOptionPane.showInputDialog(null, "Digite a terceira nota");
            nota3 = Integer.parseInt(terceiro);
                 
            media = (nota1+nota2+nota3)/3;
            JOptionPane.showMessageDialog(null,"Média do aluno é: " + media);
    }
}
