/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package MultiplicaçãoDeMatrizes;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

/**
 *
 * @author AntonioFilho
 */
public class InicializarMatrizes {
        public static final int linha = 4;
        public static final int coluna = 4;
	public static final int n = 2;
	

	public static final int matrizA[][] = preencherMatrizA();
	public static final int matrizB[][] = preencherMatrizB();
	
	public static int[][] preencherMatrizA()
	{
		try
		{
			int[][] m = new int [linha][n];
			
			FileReader ler = new FileReader("Matriz_A.txt");
			BufferedReader br = new BufferedReader(ler);
			
			for(int i=0;i<InicializarMatrizes.linha;i++)
			{
				for(int j=0;j<InicializarMatrizes.n;j++)
				{
					m[i][j] = Integer.parseInt(br.readLine());
				}
			}
			
		 return m;
		}
		catch(IOException ex){return null;}
		
	}
	
	public static int[][] preencherMatrizB()
	{
		try
		{
			int[][] m = new int[n][coluna];
			
			FileReader ler = new FileReader("Matriz_B.txt");
			BufferedReader br = new BufferedReader(ler);
			
			for(int i=0;i<InicializarMatrizes.n;i++)
			{
				for(int j=0;j<InicializarMatrizes.coluna;j++)
				{
					m[i][j] = Integer.parseInt(br.readLine());
				}
			}
			
			return m;
		}
		catch(IOException ex){return null;}
	}
 
}
