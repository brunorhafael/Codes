#include <stdio.h>
#include <stdlib.h>

main() {
       int num,maior,menor,cont,qnum;
       cont=0;
       printf("Digite a quantidade de numeros que voce vai verificar: \n");
       scanf("%d",&qnum);
       while(cont<qnum){
                      printf("Digite um numero: \n");
                      scanf("%d",&num);
                      if(cont==0){
                                  maior=num;
                                  menor=num;
                                  } 
                                  else{
                                       if(num<menor){
                                                     menor=num;
                                                     }
                                       if(num>maior){
                                                     maior=num;
                                                     }
                                                     }
                                                     cont++;
                                                     }
                                                     printf("O maior valor fornecido foi %d e o menor valor fornecido foi %d .",maior, menor);
                                                     system("pause");
                                                     }              
