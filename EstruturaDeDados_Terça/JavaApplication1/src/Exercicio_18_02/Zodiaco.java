/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Exercicio_18_02;

/**
 *
 * @author 18113143
 */
public class Zodiaco {
    
    static final String AQUARIO = "1 signo do zodíaco: Aquário (21/jan à 19/fev)";
    static final String PEIXE = "2 signo do zodíaco: Peixes (20/fev à 20/mar)";
    static final String ARIES = "3 signo do zodíaco: Áries (21/mar à 20/abr)";
    static final String TOURO = "4 signo do zodíaco: Touro (21/abr à 20/mai)";
    static final String GEMEOS = "5 signo do zodíaco: Gêmeos (21/mai à 20/jun)";
    static final String CANCER = "6 signo do zodíaco: Câncer (21/jun à 21/jul)";
    static final String LEAO = "7 signo do zodíaco: Leão (22/jul à 22/ago)";
    static final String VIRGEM = "8 signo do zodíaco: Virgem (23/ago à 22/set)";
    static final String LIBRA = "9 signo do zodíaco: Libra (23/set à 22/out))";
    static final String ESCORPIAO = "10 signo do zodíaco: Escorpião (23/out à 21/nov)";
    static final String SARGITARIO = "11 signo do zodíaco: Sagitário (22/nov à 21/dez)"; 
    static final String CAPRICORNIO = "12 signo do zodíaco: Capricórnio (22/dez à 20/jan)";
    
    void imprimeSigno(int numero)
    {
        if(numero == 1)
        {
            System.out.println(""+AQUARIO);
        }else if(numero ==2)
        {
             System.out.println(""+PEIXE);
        }else if(numero ==3)
        {
             System.out.println(""+ARIES);
        }else if(numero ==4)
        {
             System.out.println(""+TOURO);
        }else if(numero ==5)
        {
             System.out.println(""+GEMEOS);
        }else if(numero ==6)
        {
             System.out.println(""+CANCER);
        }else if(numero ==7)
        {
             System.out.println(""+LEAO);
        }else if(numero ==8)
        {
             System.out.println(""+VIRGEM);
        }else if(numero ==9)
        {
             System.out.println(""+LIBRA);
        }else if(numero ==10)
        {
             System.out.println(""+ESCORPIAO);
        }else if(numero ==11)
        {
             System.out.println(""+SARGITARIO);
        }else if(numero ==12)
        {
             System.out.println(""+CAPRICORNIO);
        }
    }
}
