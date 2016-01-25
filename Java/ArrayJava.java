import java.util.Scanner;

public class ArrayJava{

  public static void main(String args[]){
	
	int v[] = new int[10];
	int v2[] = {1,4,8,0,45};
	Scanner ler = new Scanner(System.in);	
	//alimentar	
	for(int i=0;i<v.length;i++){
	  System.out.println("Digite elemento "+ i);
	  v[i] = ler.nextInt();
	}
	
	//imprimir
	for(int i=0;i<v.length;i++){
	  System.out.println("Elemento "+ i +"="+v[i]);
	}

  }

}








