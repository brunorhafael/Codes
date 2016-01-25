#include <stdio.h>
#include <conio.h>

int main (void) {
      int num, i, cont=0, menor=999999;
      printf("\tPrograma para obter o menor valor informado pelo usuario \n");
      for(i=1; i>0; i++){
          printf("Digite 1 para entrar no programa e 2 para sair do programa \n");
          scanf("%d",&cont);
          if(cont==1){
                      printf("Digite um numero");
                      scanf("%d",&num); 
                        if(num<menor)  
                            menor=num;} else
          if(cont==2){
                      break;}   
                      }               
            printf("O menor valor eh:%d", menor);



    getch();
    return 0;
    
}
