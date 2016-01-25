#include<stdio.h>
#include<conio.h>

#define MAX 10

void vetor (int v[]){
     
       int i;
      for(i=0;i<MAX;i++){
               printf("Digite o numero para a posição %d:\t",i);
               scanf("%d",&v[i]);          
              
              }
       }
       
       imprimir(int v[]){
                   int i;
                   for(i=0;i<MAX;i++){
                    printf("%d\n", v[i]);
                   }
       }
                    
                    
      int contpares(int v[]){
                     int cont;
                     int par = 0;
                     
                    for(cont=0;cont < MAX;cont++)
                    {
                                if((v[cont]%2)==0 && v[cont] !=0)
                                {                               
                                par++;
                                }
                    }    
       return par;
       }                
       
       main(){
              int par = 0;
              int v[MAX];
              vetor(v);
              imprimir(v);
              par = contpares(v);
              printf("\n Quantidade de pares: %d\n\n",par);
              
            
                    getch();
                    return 0;
                    
                    
       }            
