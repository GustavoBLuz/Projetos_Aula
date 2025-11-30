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
public class Exercicio {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        //1
         JOptionPane.showMessageDialog(null, "Calculo: "+(1+2+3+4+5+6+7+8+9+10));
      
         //2
         int a =7, b=3,c=5, mult,div;
         mult = a*b*c;
         div = a/b;
         JOptionPane.showMessageDialog(null, "Valor da Multiplicação: "+mult+"\n Valo da Divisão: "+div);
        
         //2.1
         String primeiro = JOptionPane.showInputDialog(null, "Digite o primeiro valor");
         a = Integer.parseInt(primeiro);
         String segundo = JOptionPane.showInputDialog(null, "Digite o segundo valor");
         b = Integer.parseInt(segundo);
         String terceiro = JOptionPane.showInputDialog(null, "Digite o terceiro valor");
         c = Integer.parseInt(terceiro);
         mult = a*b*c;
         div = a/b;
         JOptionPane.showMessageDialog(null, "Valor da Multiplicação: "+mult+"\n Valo da Divisão: "+div);
         
         //3
         int x=10,y=6;
         JOptionPane.showMessageDialog(null, "Resto da divisão: "+(x%y));
         
         //3.1
         String valor1 = JOptionPane.showInputDialog(null, "Digite o primeiro valor");
         x = Integer.parseInt(valor1);
         String valor2 = JOptionPane.showInputDialog(null, "Digite o segundo valor");
         y = Integer.parseInt(valor2);
         JOptionPane.showMessageDialog(null, "Resto da divisão: "+(x%y));
       
         //4
         JOptionPane.showMessageDialog(null, "Idade: "+(2018-1945));
       
         //4.1
         String idade = JOptionPane.showInputDialog(null, "Digite o ano em que nasceu");
         String ano = JOptionPane.showInputDialog(null, "Digite o ano em que nasceu");
         x = Integer.parseInt(idade);
         y = Integer.parseInt(ano);
         JOptionPane.showMessageDialog(null, "Idade: "+(y-x));
         
         
         Float.parseFloat(segundo);
         //4
         float n1=6,n2=7,n3=8.9f;
         JOptionPane.showMessageDialog(null, "A média deste aluno: "+((n1+n2+n3)/3));
         
         //4.1
         String nota1 = JOptionPane.showInputDialog(null, "Digite a primeira nota");
         String nota2 = JOptionPane.showInputDialog(null, "Digite a segunda nota");       
         String nota3 = JOptionPane.showInputDialog(null, "Digite a terceira nota");
         n1 = Float.parseFloat(nota1);
         n2 = Float.parseFloat(nota2);
         n3 = Float.parseFloat (nota3);
         JOptionPane.showMessageDialog(null, "A média deste aluno: "+((n1+n2+n3)/3));
         
    }
}
