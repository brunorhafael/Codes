import java.util.Scanner;

 public class Area {
      
        public static float quadrado ( float n ){
          float calc = n * n;
		  return calc;
		  }   
        public static float triangulo ( float base , float altura ){
          float calc2 = base * altura / 2;
		  
		  return calc2;
         }
     	public static double circulo ( double raio ){
          double calc3 =  (raio * raio)* 3.14;
		  
		  return calc3;
        }
		public static float retangulo ( float base , float lado ){
          float calc4 = base * lado;
		  
		  return calc4;		  
         }
	  
	   public static void main (String args[]){
	      
	      Scanner ler = new Scanner(System.in);
		  float x;
		  System.out.println("Menu para calculo das areas desejadas ");
		  System.out.println("1 para Calculo da area do Quadrado");
		  System.out.println("2 para Calculo da area do Triangulo");
	     	  System.out.println("3 para Calculo da area do Circulo");
             	  System.out.println("4 para Calculo da area do Retangulo");
          
		  x = ler.nextFloat();
         
		 if (x == 1){
		 System.out.println("Area : " + quadrado(x));
		 }
		 if (x == 2) {
		    float b;
			float h;
		     System.out.println("Digite a base do trinagulo:");
		     b = ler.nextFloat();
             	     System.out.println("Digite a base do trinagulo:");
                     h = ler.nextFloat();  			 
		     System.out.println("Area: " + triangulo( b,h));
			
		 }
		 if (x == 3) {
		    double r;
		        System.out.println("Digite o raio do circulo:"); 
			r = ler.nextFloat();
			System.out.println("Area : " + circulo(r));}
		 if (x == 4) {
		   float b;
                   float l;  		   
		        System.out.println("Digite a base: ");
			b = ler.nextFloat();
			System.out.println("Digite o lado: ");
			l = ler.nextFloat();
	                System.out.println("Area : " + retangulo( b,l )) ;
			}
		 
	   }
	   
	   
	   
 }
