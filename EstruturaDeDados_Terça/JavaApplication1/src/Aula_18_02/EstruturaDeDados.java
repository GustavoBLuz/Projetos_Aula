/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Aula_18_02;

/**
 *
 * @author 18113143
 */
public class EstruturaDeDados {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        //Método de inicialização de classe
        Caixa caixaSapato = new Caixa();
        //Populando o objeto criado
        caixaSapato.largura = 1;
        caixaSapato.altura = 1;
        caixaSapato.profundidade = 5;
        
        System.out.println(""+caixaSapato.volume());
    }
    
}
