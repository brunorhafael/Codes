/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package MultiplicaçãoDeMatrizes;

/**
 *
 * @author AntonioFilho
 */
public class MultiplicarMatrizes implements Runnable
{
	private int linha;
	private int coluna;
	private int[][] matrizC;
	
	public MultiplicarMatrizes(int linha,int coluna, int[][] matrizC)
	{
		this.linha = linha;
		this.coluna = coluna;
		this.matrizC = matrizC;
	}
	
	@Override
	public void run()
	{
		int soma = 0;
		
		for(int k = 0; k< InicializarMatrizes.n; k++)
		{
			int ProdMatriz = InicializarMatrizes.matrizA[linha][k] * InicializarMatrizes.matrizB[k][coluna];
			soma += ProdMatriz;
		}
		
		matrizC[linha][coluna] = soma;
	}
	
}


