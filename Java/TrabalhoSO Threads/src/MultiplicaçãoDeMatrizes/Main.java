/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package MultiplicaçãoDeMatrizes;

import java.io.File;
import java.io.FileOutputStream;

/**
 *
 * @author AntonioFilho
 */
public class Main {
    private static final int NUM_THREADS = InicializarMatrizes.linha * InicializarMatrizes.n;
    private static int matrizC[][] = new int[InicializarMatrizes.linha][InicializarMatrizes.coluna];
    private static File arquivo;
			
	public static void main(String[] args) 
	{
		Thread[] workers = new Thread[NUM_THREADS];
		for(int i=0; i< InicializarMatrizes.linha; i++)
		{
			for(int j=0; j< InicializarMatrizes.coluna; j++)
			{
				MultiplicarMatrizes celula = new MultiplicarMatrizes(i, j, matrizC);
				Thread thread = new Thread(celula);
				workers[i] = thread;
				workers[i].start();
				
				try
				{
					workers[i].join();
				}
				catch(InterruptedException in)
				{
				}
			}
		}
		
		
		for(int i=0; i< InicializarMatrizes.linha; i++)
		{
                    
			for(int j=0; j< InicializarMatrizes.coluna; j++)
			{
         			
                           arquivo = new File("ResulMatriz.txt");  
                           try 
                            (FileOutputStream fos = new FileOutputStream(arquivo, true)) 
                           {
                                String texto = ("  celula " +j + " da coluna " +i +  " = valor "  +matrizC[i][j] );
                                fos.write(texto.getBytes());  
                           }  
                         
                         catch (Exception ee) 
                         { 
                         } 
			
                        }
			System.out.println();
                       
		}
                System.out.println("Lembrete: o Arquivo foi salvo dentro do diretorio de execução no arquivo com nome RESULMATRIZ.TXT (pasta do projeto)");
	} 

}
