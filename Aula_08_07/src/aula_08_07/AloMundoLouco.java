/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aula_08_07;

/**
 *
 * @author 18113143
 */
public class AloMundoLouco 
{
    
   public static void main(String[] args)
   {
       boolean obrigatorio = false;
       int semestre = 2;
       String mensagem = "Alo Mundo";
        System.out.println(obrigatorio);   

        
       //Exemplo de variavel que suporta valores booleanos
       boolean anoBisexto = false;
       boolean anoPar = true;
       /*Apesar de uma varoavel pode ser declarada
       sem receber um valor, ela so podera ser usada
       apos a atribuiÃ§Ã£o de algum valor a ela.
       */
       boolean valido = true;
       System.out.println(anoBisexto);
       System.out.println(anoPar);
       System.out.println(valido);

       //Exemplo de representacao de caracteres UNICODE
       char primeiraLetra = 'a';
       char tabulacao = '\t';
       /*Codigo UNICODE pra o caractere de interrogacao
       char unicode = '/uoAoz';
       Lembre-se: Uma variavel so podera ser manipulada apos receber um valor.*/
       char inutil; // variavel sem utilidade no momento
       inutil = '@'; //variavel util a partir de agora
       String planeta = "Urano";
       /*
       byte a = -127;
       short b = 32767;
       int i = 654683486;
       long l = 9223372036547758580L;
       float pi = 3.141516F;
       float taxa = 6.0264F;
       double valor = 123.4684684864D;
       */
       
       boolean bo = false;
       char c = 'c';
       byte b = -2;
       short s = 5878;
       int i = 684846;
       long l = 651268484L;
       float f = 3.8548F;
       double d = 3.4848484D;
       
       c = 65;
       System.out.println("=========");
       System.out.println("char");
       //Note a diferenÃ§a entre a impressao das duas linhas abaixo
       System.out.println("==============================");
       System.out.println("valor de c como char =" + c);
       System.out.printf("valor do c como numero = %d\n", (int)c);
       System.out.println("--------------------");
       
       
       b = 10;
       s = b;
       i = s;
       System.out.println("==============================");
       System.out.println("valor de c como char =" + c);
       System.out.println("==============================");
       System.out.println("i = s = b =" +i);
       
       
       i *= 100;
       System.out.println("novo valor de i = "+i);
       
       b =(byte)i;
       System.out.println("novo valor de b = "+b);
       /*Porque o valor é -24?
       Saida da impressão:
       novo valor de b = -24
       */
       
       /* valor de d = 125.32
       valor de d = 125.319999969482422
       */
       
       
       d = 125.32;
       f = (float)125.32;
       System.out.println("valor de f ="+f);
       f = 125.32F;
       System.out.println("valor de f ="+d);
       f = (float)125.32D;
       System.out.println("valor de f ="+d);
       System.out.println("--------------");
       
       System.out.println("====================");
       System.out.println("Vamos brincar com os tipos");
       System.out.println("====================");
       System.out.println("Posso converter int para o float?");
       System.out.println("i antes da conversao ="+i);
       System.out.println("f antes da conversao ="+f);
       f =i;
       System.out.println("i depois da conversao ="+i);
       System.out.println("f depois da conversao ="+f);
       System.out.println("--");
       System.out.println("====================");
       int x = 0;
       int y = 5;
       int z = 5;
       x = y - z;
       System.out.println("valor de x = "+x);
       x = y*z;
       System.out.println("valor de x = "+x);
       x = y/z;
       System.out.println("valor de x = "+x);
       x = y+z;
       System.out.println("valor de x = "+x);
       x = y%z;
       System.out.println("valor de x = "+x);
       System.out.println("===================="); 
   }
}
