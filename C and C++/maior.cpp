#include <stdio.h>
#include <stdlib.h>
main(){
       int num,maior,menor,cont,qnum; 
       int resp;
       resp=0;
cont=1;
       while(resp>=0){
                         
                       printf("Digite um numero: \n");
                       scanf("%d",&num);
                       if(cont==1){
                                  maior=num;
                                  menor=num;
                                  }else{                                        
                                   if(num<menor){
                                                menor=num;                                            
                                               }              
                                    if(num>maior){
                                                  maior=num;                                                  
                                                  }    
                                        }
 
                       printf("deseja continuar < 0 sai ? \n");
                       scanf("%d",&resp);
                       cont++;
                       }
                       printf("o maior numero digitado foi : %d , menor = %d",maior,menor);
                       system("pause");
                       
       }
