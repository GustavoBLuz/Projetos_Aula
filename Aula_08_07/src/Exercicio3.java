/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author 18113143
 */
public class Exercicio3 
{

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) 
    {
        // TODO code application logic here
        //3
        int nascimento = 1977;
        int anoatual = 2018;
        int idade = 0;
        
        idade = anoatual - nascimento;
        if(idade <= 18)
        {
           System.out.println("Voce eh uma crianca");
        }else
        {
            System.out.println("Voce eh um adulto");
        }
        
        System.out.println("A idade eh de: "+ idade);
        /////////////////////////////////////////////////
        //4
        int compra = 10;
        float preco = 0;
        
        if(compra >= 12)
        {
            preco = compra * 1f;
        }else
        {
            preco = compra * 1.30f;
        }
        
        System.out.println("Preco que Ana tera que pagar: " + preco);
        /////////////////////////////////////////////////////////////
        //5
        
        float nota1 = 6, nota2 = 7, nota3 = 8.9F, media;
        
        media = (nota1 + nota2 + nota3)/3;
        
        System.out.println("Media do aluno eh: " + media);
       
        
    }
    
}
