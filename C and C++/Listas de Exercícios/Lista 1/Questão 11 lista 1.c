#include <stdio.h>
#include <conio.h>

int main (void) {
  
      int media=0, num=0, conta=0;
      float soma=0;
               while(num>=0){
                    printf("Digite um valor positivo");
                    scanf("%d",&num);
                    if(num>0) {
                              soma=soma +num;
                              media=media +1;
                              conta=(soma/media);
                              }
                    if(num<0) {
                              printf("a soma eh %.0f\n", soma);
                              printf("a media eh %d\n", conta);
                              }    
                              }
   getch(); 
   return 0;  
}
