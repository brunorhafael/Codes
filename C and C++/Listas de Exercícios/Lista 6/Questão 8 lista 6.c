#include <stdio.h>
#include <conio.h>

 typedef struct{
           char nome[10];
           int matricula;
           float nota;
 }Aluno; 

 void inicializa ( Aluno * vetor[], int tamanho ){
      int i=0;
      for ( i=0;i<tamanho;i++){
          vetor[i] = (Aluno*)malloc(sizeof(Aluno)); 
      }
 } 
                                
                                
 void levetor( Aluno* vetor[], int tamanho){
      int i=0;
      
         for ( i=0; i<tamanho; i++)
         {
             printf("Digite o nome do aluno\n");
             scanf(" %[^\n]",vetor[i]->nome);
             
             printf("Digite o numero da matricula\n");
             scanf("%d",&vetor[i]->matricula);
             
             printf("Digite a nota do aluno\n");
             scanf("%f",&vetor[i]->nota);
         } 
}
      
 void imprimevetor ( Aluno** vetor, int tamanho){
      int i=0;
      
      for ( i=0;i<tamanho;i++){
          
          printf("Aluno: %s \n", vetor[i]->nome);
          printf("Matricula: %d\n",vetor[i]->matricula);
          printf("Nota do aluno: %f\n",vetor[i]->nota);
          
          }
           
      } 

int main(){
  
  Aluno** vet;
  int tamanho;
  
  
    printf("Digite a quantidade de alunos que voce vai cadastrar");
    scanf("%d",&tamanho);
    
    vet = (Aluno**) malloc (sizeof(Aluno*)*tamanho);
  
    inicializa(vet,tamanho);
    levetor(vet,tamanho);
    imprimevetor(vet,tamanho);
  
getch();
return 0;

}
