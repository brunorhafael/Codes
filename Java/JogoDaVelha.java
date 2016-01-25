import java.util.Scanner;
public class JogoDaVelha{
	public static void alimentarJogador1(char matriz[][], int contador){	
		int x;			
		Scanner scan = new Scanner(System.in);
		int sair=1;
		while(sair ==1){		
			System.out.println("JOGADOR 1\nDigite o número da posição onde deseja colocar o X: ");
			x = scan.nextInt();		
			for(int i=0;i<3;i++){
				for(int j=0;j<3;j++){
					if (x==1){
						if (matriz[0][0] =='-'){
							matriz[0][0]='x';	
						sair=2;							
						} 
					}
					if (x==2){
						if(matriz[0][1]=='-'){
							matriz[0][1]='x';
						sair=2;
						}
					}
					if (x==3){
						if(matriz[0][2]=='-'){
							matriz[0][2]='x';
						sair=2;
						}
					}

					if (x==4){
						if(matriz[1][0]=='-'){
							matriz[1][0]='x';
						sair=2;
						}
					}
					if (x==5){
						if(matriz[1][1]=='-'){
							matriz[1][1]='x';
						sair=2;
						}
					}
					if (x==6){
						if(matriz[1][2]=='-'){
							matriz[1][2]='x';
						sair=2;
						}
					}
					if (x==7){
						if(matriz[2][0]=='-'){
							matriz[2][0]='x';
						sair=2;
						}
					}
					if (x==8){
						if(matriz[2][1]=='-'){
							matriz[2][1]='x';
						sair=2;
						}
					}
					if (x==9){
						if(matriz[2][2]=='-'){
							matriz[2][2]='x';
						sair=2;
						}
					}


				}
			}		

	}	
		contador++;
		
		imprimir(matriz);
		verificar(matriz, contador);
		if (contador<10){
		alimentarJogador2(matriz, contador);
		}		
	}


	public static void alimentarJogador2(char matriz[][], int contador){
		int x;			
		Scanner scan = new Scanner(System.in);
		int sair=1;
		while(sair ==1){		
			System.out.println("JOGADOR 2\nDigite o número da posição onde deseja colocar o O: ");
			x = scan.nextInt();		
			for(int i=0;i<3;i++){
				for(int j=0;j<3;j++){
					if (x==1){
						if (matriz[0][0] =='-'){
							matriz[0][0]='O';	
						sair=2;							
						} 
					}
					if (x==2){
						if(matriz[0][1]=='-'){
							matriz[0][1]='O';
						sair=2;
						}
					}
					if (x==3){
						if(matriz[0][2]=='-'){
							matriz[0][2]='O';
						sair=2;
						}
					}

					if (x==4){
						if(matriz[1][0]=='-'){
							matriz[1][0]='O';
						sair=2;
						}
					}
					if (x==5){
						if(matriz[1][1]=='-'){
							matriz[1][1]='O';
						sair=2;
						}
					}
					if (x==6){
						if(matriz[1][2]=='-'){
							matriz[1][2]='O';
						sair=2;
						}
					}
					if (x==7){
						if(matriz[2][0]=='-'){
							matriz[2][0]='O';
						sair=2;
						}
					}
					if (x==8){
						if(matriz[2][1]=='-'){
							matriz[2][1]='O';
						sair=2;
						}
					}
					if (x==9){
						if(matriz[2][2]=='-'){
							matriz[2][2]='O';
						sair=2;
						}
					}


			}
			}		
		}
		
		contador++;
		System.out.println("Contador: " + contador);
		imprimir(matriz);
		verificar(matriz, contador);
		if (contador<10){
			alimentarJogador1(matriz, contador);
		}		

	}



	public static void informe(){
		System.out.println("\n\nAbaixo estão enumeradas as posições no jogo da velha: ");		
		int matriz[][] = new int[3][3];
		int valor=1;		
		for (int i=0;i<3;i++){
			for (int j=0;j<3;j++){			
				matriz[i][j] = valor;	
				System.out.print(" | " + matriz[i][j]  + " | " );
				valor++;
				}
		System.out.print("\n");
	
		}
	}

	public static void imprimir(char matriz[][]){
		System.out.println("\nO JOGO ESTÁ ASSIM: ");		
		//int matriz[][] = new int[3][3];
		//int valor=1;		
		for (int i=0;i<3;i++){
			for (int j=0;j<3;j++){			
				//matriz[i][j] = valor;	
				System.out.print(" | " + matriz[i][j]  + " | " );
				//valor++;
				}
		System.out.print("\n");
	
		}
	}

	public static void verificar(char matriz[][], int contador){
		if (contador>4){
			if((matriz[0][0] == 'x' && matriz[0][1] == 'x' && matriz[0][2] == 'x') || (matriz[1][0] == 'x' && matriz[1][1] == 'x' && 					matriz[1][2] == 'x') || 
        			(matriz[2][0] == 'x' && matriz[2][1] == 'x' && matriz[2][2] == 'x') || (matriz[0][0] == 'x' && matriz[1][1] == 'x' && 					matriz[2][2] == 'x') || 
  			      (matriz[2][0] == 'x' && matriz[1][1] == 'x' && matriz[0][2] == 'x') || (matriz[0][0] == 'x' && matriz[1][0] == 'x' && 					matriz[2][0] == 'x') || (matriz[0][1] == 'x' && matriz[1][1] == 'x' && matriz[2][1] == 'x') || 
        			(matriz[0][2] == 'x' && matriz[1][2] == 'x' && matriz[2][2] == 'x')){
				contador = 10;
				System.out.println("O Jogador 1 venceu!");

			}
		}
	}


	public static void main (String args[]){
	int contador=1;	
	char matriz[][] = new char[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			matriz[i][j]='-';	
			
		}
	}					
	informe();
	alimentarJogador1(matriz, contador);
	verificar(matriz, contador);

}


}
