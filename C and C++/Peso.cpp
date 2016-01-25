#include <stdio.h>
#include <stdlib.h>
main(){
       int peso_total,peso_caixa,cont;
cont=1;
peso_total=0;
 while(cont<=3){
         printf("Digite o peso da caixa : \n");
         scanf("%d",&peso_caixa);
         peso_total=peso_total+peso_caixa;
         cont++;
         }      
         printf("O peso total eh : %d ", peso_total);
       system("pause");
}
