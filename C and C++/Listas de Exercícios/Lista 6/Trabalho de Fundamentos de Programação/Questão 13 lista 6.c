#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 5
   typedef struct{
        char abate[1];
        int codigo,leite,alim;
        struct{
        int mes,ano;
        }nasc;
        }Gado
        ;
void lerGado(Gado vet[], int n){
      int i=0;
      for(i=0;i<n;i++){
        printf("\nVaca %d \n",i);      
        printf("Digite o codigo : \n");
        scanf("%d",&vet[i].codigo);
        printf("Digite a qtd de litros : \n");
        scanf("%d",&vet[i].leite);
        printf("Digite o alimento: \n");
        scanf("%d",&vet[i].alim);
        printf("Digite a data: mes/ano\n");
        scanf("%d %d",&vet[i].nasc.mes,&vet[i].nasc.ano);
      }
}
int idade(int a,int m){
     int ta,tmes;
     ta=2011-(a-1);
     tmes=m+6;
     if(tmes>=12){
     ta=ta+(tmes/12);
     tmes=tmes%12;
     }
     return ta;
}

void abate(Gado v[],int n){
   int i=0;
   for(i=0;i<n;i++){
     if(idade(v[i].nasc.ano,v[i].nasc.mes)>5|| v[i].leite<40 || (50<v[i].leite<70 && v[i].alim>=50)){
        strcpy(v[i].abate,"S");
     }else{
     strcpy(v[i].abate,"N");
     }
   }
}
void menu(){
 printf("\n1. Total de leite por semana : \n");
 printf(" 2.Total de alimentos por semana : \n");
 printf(" 3.Total de leites que vai ser produzida por semana : \n");
 printf(" 4.Total de alimentos que serao consumidos por semana : \n");
 printf("5.Gados para abate : \n");
 printf("6.Sair: \n");
 printf("Digite uma opcao : \n");
}
int valida(int op){
    while(op<1 && op>6){
  printf("\nERRO. Digite uma opcao : \n");
          scanf("%d",&op);
    }
}
int leite_semana(Gado v[],int n){
   int i,t=0;
   for(i=0;i<n;i++){
      t=t+v[i].leite;
   }
   return t;
  
}
int alim_semana(Gado v[],int n){
   int i,t=0;
   for(i=0;i<n;i++){
      t=t+v[i].alim;
   }
   return t;
 }
 
 int falim_semana(Gado v[],int n){
   int i,t=0;
   for(i=0;i<n;i++){
      if(strcmp(v[i].abate,"N")==0){
      t=t+v[i].alim;}
   }
   return t;
  }
 int fleite_semana(Gado v[],int n){
   int i,t=0;
   for(i=0;i<n;i++){
      if(strcmp(v[i].abate,"N")==0){
      t=t+v[i].leite;}
   }
   return t;
 }
int main(){
   int n;
   printf("Digite  n: \n");
   scanf("%d",&n);
   Gado* vet=(Gado*)malloc(sizeof(Gado)*n);
   lerGado(vet,n);
   int op=1;
   while(op!=6){
      menu();
      scanf("%d",&op);
      op=valida(op);
      if(op==1){
      printf("\nQuantidade de leite por semana: %d",leite_semana(vet,n));
      }
      if(op==2){
      printf("\nQuantidade de alimentos por semana: %d",alim_semana(vet,n));
      }
      if(op==3){
      printf("\nQuantidade de leite que serao produzidos por semana: %d",fleite_semana(vet,n));
      }
      if(op==4){
      printf("\nQuantidade de alimentos que serao produzidos por semana: %d",falim_semana(vet,n));
      }
      
   }
   
   
   
  
   
}
