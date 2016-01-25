import java.util.Scanner;

public class MediaMaiorMenorModular{

  public static double media(double vetor[]){
    double media = vetor[0];
    for(int i = 1;i<vetor.length;i++){
    	media += vetor[i];
    }
    return media/vetor.length;
  }  

  public static double menor(double vetor[]){
    double menor = vetor[0];
    for(int i = 1;i<vetor.length;i++){
    	if(vetor[i] < menor )
	   menor = vetor[i];
    }
    return menor;
  }

  public static double maior(double vetor[]){
    double maior = vetor[0];
    for(int i = 1;i<vetor.length;i++){
    	if(vetor[i] > maior)
	   maior = vetor[i];
    }
    return maior;
  }  

  public static double[] ler(int n){
    double[] vetor = new double[n];
    Scanner scan = new Scanner(System.in);
    //alimentando o vetor	
    for(int i=0;i<n;i++){
	System.out.println("Digite x: ");
	vetor[i] = scan.nextDouble();
    }
    return vetor;
  } 


  public static void main(String args[]){
	
	
	double vetor[] = ler(5); 
	

	System.out.println("Media: " + media(vetor));
	System.out.println("Maior: " + maior(vetor));
	System.out.println("Menor: " + menor(vetor));

  }

}



















