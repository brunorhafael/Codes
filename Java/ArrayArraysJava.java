import java.util.Scanner;

public class ArrayArraysJava{

  public static void main(String args[]){
	 
	int m = 3;
	int n = 2;
	int matriz[][] = new int[m][n];
	Scanner ler = new Scanner(System.in);
	
	//leitura
	for(int i=0;i<matriz.length;i++){
	 for(int j=0;j<matriz[i].length;j++){
	    matriz[i][j] = ler.nextInt();
	 }
	}

	//impressao
	for(int i=0;i<matriz.length;i++){
	 for(int j=0;j<matriz[i].length;j++){
	    System.out.print(" " + matriz[i][j]);
	 }
	 System.out.print("\n");
	}
  }

}








