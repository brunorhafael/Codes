#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 2

typedef struct{
        float area,valor;
        char nome[50];
        int n,nm;    
          }Apartamento;
void lerVetor(Apartamento v[]){
     int i;
     for(i=0;i<max;i++)
     {  printf("\n\n\tMorador %d\n",i);
            printf("\nDigite o nome do morador : \n");
            scanf("%s",v[i].nome);            
            printf("Digite o numero de moradores : \n");
            scanf("%d",&v[i].nm);            
            printf("Digite o numero do apartamento : \n");
            scanf("%d",&v[i].n);
            printf("Digite a area : \n");
            scanf("%f",&v[i].area);
            printf("Digite o valor /: \n");
            scanf("%f",&v[i].valor);                                    
                        }      
     }
float areaT(Apartamento v[]){
     int i;
     float t=0;
     for(i=0;i<max;i++){
               t=t+v[i].area;         
                        }
      return t;
      }
float despesas(Apartamento v[],float at){
      printf("\nDigite as despasas do condominio \n ");
      float dt;
      scanf("%f",&dt);   int i;   
      for(i=0;i<max;i++){
             float d;
             d=(v[i].area*dt)/at;
             printf("Apartamento %d-->%.2f\n",i,d);            
                         }
      }
void AMH(Apartamento v[]){
     int m=v[0].nm,i;
     for(i=0;i<max;i++){
                       if(v[i].nm>m){
                                     m=v[i].nm;
                                     } 
                        }
     for(i=0;i<max;i++){
                       if(v[i].nm==m){
            printf(" \nNome do morador  %s: \n",v[i].nome);            
            printf("Numero de moradores :%d \n ",v[i].nm);            
            printf("Numero do apartamento :%d \n ",v[i].n);         
            printf("Area %f\n",v[i].area);
            printf("Valor /:%f \n",v[i].valor);                                    

                                     } 
                        }
     }               
void menu(){
     printf("1. Inserir os valores \n");
     printf("2. Area total do condominio \n");     
     printf("3. Despesas por apartamento : \n");
     printf("4. Apartamento com MNM: \n");     
     printf("5. sair \n");  
     }               
int main(){
    Apartamento vet[max];
    int op=1;float at;
    while(op!=5){
                 menu();
                 scanf("%d",&op);
                 if(op==1){
                        lerVetor(vet);   
                           }
                  if(op==2){
                   at=areaT(vet);
                  printf("\nArea total do condominio : %.2f\n\n",at);          
                            }
                  if(op==3){
                            despesas(vet,at);
                        }
                   if(op==4){
				AMH(vet);

                              }     


                  }
    

    }
