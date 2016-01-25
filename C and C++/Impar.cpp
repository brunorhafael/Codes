#include <stdio.h>
#include <stdlib.h>
main(){
       int num,resto;
       num=1;
       
       printf("digte um numero\n");
       scanf("%d",&num);
       while(num <0){
                        printf("numero menor que zero digte um numero\n");
       scanf("%d",&num);
                 }
       resto=num % 2;

       if(resto==0){
                    printf("O numero eh par\n");
                    }else{
                          printf("o numero eh impar\n");
                          }
                         
                          
       system("pause");
       }
