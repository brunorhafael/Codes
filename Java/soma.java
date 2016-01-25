import java.util.Scanner;

public class soma {
	public static void main(String args[]){
		int x,y;
		Scanner scan;
		scan = new Scanner (System.in);
		System.out.println("Digite o x: ");
		x = scan.nextInt ();
		System.out.println("Digite o y: ");
		y = scan.nextInt ();
		System.out.println("Soma =" + (x+y));
	}
}

