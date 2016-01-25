#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char M[3][3]; 
  
void desenha(){
     
        printf("\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0  JOGO DA VELHA"
               "  \xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\n\n\n");
        
        printf("\t\t     %c \xBA %c \xBA %c\n",M[0][0],M[0][1],M[0][2]);
        printf("\t\t    ÍÍÍ\xCEÍÍÍ\xCEÍÍÍ\n");
        printf("\t\t     %c \xBA %c \xBA %c\n",M[1][0],M[1][1],M[1][2]);    
        printf("\t\t    ÍÍÍ\xCEÍÍÍ\xCEÍÍÍ\n");
        printf("\t\t     %c \xBA %c \xBA %c\n\n\n\n\n\n\n\n\n",M[2][0],M[2][1],M[2][2]);
     
     }     
void inicializa(){
     
     M[0][0] = ' '; M[0][1] = ' '; M[0][2] = ' '; M[1][0] = ' '; M[1][1] = ' '; M[1][2] = ' '; M[2][0] = ' '; M[2][1] = ' '; M[2][2] = ' ';
}

int vencedor(){
     if ((M[0][0] == 'X' && M[0][1] == 'X' && M[0][2] == 'X') || (M[1][0] == 'X' && M[1][1] == 'X' && M[1][2] == 'X') || 
        (M[2][0] == 'X' && M[2][1] == 'X' && M[2][2] == 'X') || (M[0][0] == 'X' && M[1][1] == 'X' && M[2][2] == 'X') || 
        (M[2][0] == 'X' && M[1][1] == 'X' && M[0][2] == 'X') || (M[0][0] == 'X' && M[1][0] == 'X' && M[2][0] == 'X') || (M[0][1] == 'X' && M[1][1] == 'X' && M[2][1] == 'X') || 
        (M[0][2] == 'X' && M[1][2] == 'X' && M[2][2] == 'X'))
     {
        printf ("O jogador 1 %c o vencedor!!!\t%c%c", 130, 1, 2);
        return 1;
     }else if ((M[0][0] == 'O' && M[0][1] == 'O' && M[0][2] == 'O') || (M[1][0] == 'O' && M[1][1] == 'O' && 
              M[1][2] == 'O') || (M[2][0] == 'O' && M[2][1] == 'O' && M[2][2] == 'O') || (M[0][0] == 'O' && 
              M[1][1] == 'O' && M[2][2] == 'O') || (M[2][0] == 'O' && M[1][1] == 'O' && M[0][2] == 'O') || 
              (M[0][0] == 'O' && M[1][0] == 'O' && M[2][0] == 'O') || (M[0][1] == 'O' && M[1][1] == 'O' && 
              M[2][1] == 'O') || (M[0][2] == 'O' && M[1][2] == 'O' && M[2][2] == 'O'))
     {
           printf ("O jogador 2 %c o vencedor!!!", 130);
           return 1;
      }// Escreva aqui o código que indica o vencedor;
return 0;
     
     }
void play(){
  
  int x, y, i; //coordenadas
         i = 0;
         
          while(1){
            printf ("Jogador 1\n quais as coordenadas??\n");
            scanf ("%d %d", &x, &y);//Coordenadas para o jogador1
            while (x < 1 || x > 3 || y < 1 || y > 3)
            {
                  printf ("valores incorretos, tente de novo");
                  scanf ("%d %d", &x, &y);
             }
            x --; y --;
            while (M[x][y] == 'O' || M[x][y] == 'X')
            {
                  printf ("Estes valores j%c sair%co, tente de novo", 181, 198);
                  scanf ("%d %d", &x, &y);
                  x --; y --;
             }
            M[x][y] = 'X';
            system ("cls");
            
            desenha();
            
            if(vencedor()==1)
                break;       
            else { } // empate    
            i++;
            if (i == 9)
            {
               printf ("Deu velha !!!");
               break;
             }
             
            printf ("Jogador 2\n quais as coordenadas??\n");     
            
            scanf ("%d %d", &x, &y);// Coordenadas para o jogador2
            while (x < 1 || x > 3 || y < 1 || y > 3)
            {
                  printf ("valores incorretos, tente de novo");
                  scanf ("%d %d", &x, &y);
             }
             x --; y --;
            while ((M[x][y] == 'O') || (M[x][y] == 'X'))
            {
                  printf ("Estes valores j%c sair%co, tente de novo", 181, 198);
                  scanf ("%d %d", &x, &y);
                  x --; y --;
             }
            M[x][y] = 'O';
            system ("cls");
            
            desenha();
           
            if(vencedor()==1)
                break;       
            else { } // empate   
            i++;
          }            
}     
int main()
{
   
   desenha();
   inicializa();
   play();
   
   getch();
   return 0;
}
