import java.util.Scanner;

public class PapelPedraTesoura
{
    public static void main(String args[])
    {   
	//Escreve tipos de jogada
	menu();
	//Chamando metodo jogar 
	jogar();
	System.out.println("Deseja jogar novamente/Sim =1,Nao =2");
	Scanner ler = new Scanner(System.in);
	int resposta = ler.nextInt ();
	//Valida entrada para continuar jogando	
	while(resposta == 1){
		menu();		
		jogar();
		System.out.println("Deseja jogar novamente/Sim =1,Nao =2");
		resposta = ler.nextInt ();
		
	}    
     }
	/*
	Lógica do Jogo
	*/
	public static void jogar(){
		    
	
	int j1;
	int j2;        
	Scanner ler = new Scanner(System.in);
	/*1=pedra 2 =tesoura 3=papel*/ 
	System.out.println("Jogador 1, Digite a entrada:");
	//Lendo os Dados
        j1=ler.nextInt();
	while ( j1 <1 || j1>3 ){
		System.out.println("Jogador 1, Digite a entrada novamente: ");
        	j1=ler.nextInt();
	}	
	
	System.out.println("Jogador 2, Digite a entrada:");
        j2 = ler.nextInt();
	while ( j2 <1 || j2>3 ){
		System.out.println("Jogador 2, Digite a entrada novamente:");
        	j2=ler.nextInt();
        }
	

	        if(j1==j2){
			System.out.println("Empate!");
			return;
		}
          	if(j1==1 && j2==2){
            	  	System.out.println("Jogador 1 venceu!");
	  	}else if(j1==1 && j2==3){
			System.out.println("Jogador 2 venceu!");
	 	}else if(j1==2 && j2==1){
			System.out.println("Jogador 2 venceu");	
		}else if(j1==2 && j2==3){
                        System.out.println("Jogador 1 venceu");
                }else if(j1==3 && j2==1){
                        System.out.println("Jogador 1 venceu");
		}else if(j1==3 && j2==2){
                         System.out.println("Jogador 2 venceu");   
                }
	}

	public static void menu(){
		System.out.println("\t Pedra = 1 \n\t Tesoura = 2 \n\t Papel = 3");
        }
}	
