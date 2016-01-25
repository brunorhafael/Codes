import java.util.Scanner;

  public class MediaMaiorMenor{
      
          public static void main ( String args[]) {
             
             double media, maior, menor;
             double x;
             Scanner scan = new Scanner ( System.in);
             System.out.println("Digite x:");
             x = scan.nextDouble();   
             media = x;
             maior = x;
             menor = x; 
              
                for ( int i=0; i<9;i++) {
                    System.out.println("Digite x:"); 
                    x = scan.nextDouble();  
                    media+=x;
                    if(x < menor) menor = x;
                    if(x > maior) maior = x;

                    }
                    media = media/10;
                   System.out.println("Media:" + media); 
                   System.out.println("Menor:" + menor);
                   System.out.println("Maior:" + maior); 
                                                    }

                               }
