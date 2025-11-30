/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aula_10_02_while;

/**
 *
 * @author 18113143
 */
import javax.swing.*;
public class Aula_10_02_while 
{

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) 
    {
        // TODO code application logic here
        int nasci = 1998;
        int atual = 2018;
        int anos = 0;
        while (atual>nasci)
        {
            anos +=1;
            nasci+=1;
            if(nasci == 2007)
            {
                System.out.println("Este ano é "+nasci);
            }
        }
        System.out.println("Idade: "+anos);
    }
    
}
