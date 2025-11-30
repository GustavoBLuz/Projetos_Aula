/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package prova1;

/**
 *
 * @author 18113143
 */
import javax.swing.*;
public class Exercicio9 {

    /**
     * @param args the command line arguments
     * 9 .A padaria Severino vende uma certa quantidade de pães franceses e 
     * uma quantidade de broas a cada dia. Cada pãozinho custa R$ 0,25 e a broa custa R$ 3,50. 
     * Ao final do dia, o dono quer saber quanto arrecadou com a venda dos pães e broas (juntos), 
     * e quanto deve guardar numa conta de poupança (25% do total arrecadado). 
     * Você foi contratado para fazer os cálculos para o dono. 
     * Com base nestes fatos, faça um algoritmo para ler as quantidades de pães e de broas,
     * e depois calcular os dados solicitados.
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int qntPao = 0, qntBroa = 0;
        float valorPao = 0.25F, valorBroa = 3.50F, valorGuardado = 0, valorTotal = 0, qntPoup = 0.25F;
        
        String paes = JOptionPane.showInputDialog(null, "Digite quantos pãezinhos foram vendidos");
        qntPao = Integer.parseInt(paes);
        String broas = JOptionPane.showInputDialog(null, "Digite a quantidade de Broas vendidas");
        qntBroa = Integer.parseInt(broas);
        
        valorTotal = (qntPao*valorPao)+(qntBroa*valorBroa);
        valorGuardado = (valorTotal*qntPoup);
        
        JOptionPane.showMessageDialog(null, "Valor arrecadado das vendas: R$"+valorTotal+"\nValor a ser guardado na poupança: R$"+valorGuardado);
    }
}
