#include <stdio.h>
#include <conio.h>

 main() 
 {
  int num, soma,cont=0;
  printf("Digite os valores :\n");
  scanf("%d",&num);
  while(num>0){
               cont=cont+num;
               soma=cont;
               scanf("%d",&num);}
  if(num<0){
            printf("A soma dos valores eh: %d \n",soma);
            }     
        
        
        
 getch();
 return 0;       
        
 }
