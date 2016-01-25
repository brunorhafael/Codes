#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 5
   typedef struct{
        char autor[15];
        char titulo[10];
        int codigo;
        char estilo[20];
        float preco;
}Livro;
void imprime(Livro l[], int i){
        printf("\nautor %s\n", l[i].autor);
        printf("\ntitulo %s\n", l[i].titulo);
        printf("\ncodigo %d\n", l[i].codigo);
        printf("\nestilo %s\n", l[i].estilo);
        printf("\npreco %f\n", l[i].preco);

}
void menu(){
        printf("Digite I para incluir um livro\n");
        printf("Digite L para listar o nome de todos os livros. \n" );
        printf("Digite A para procurar livro por autor. \n" );
        printf("Digite T para procurar livro por título. \n" );
        printf("Digite E para procurar livro por estilo. \n" );
        printf("Digite M para calcular a média de preço de todos os livros. \n" ) ;
        printf("Digite S para sair \n");

}
Livro incluir(){
   Livro l;
   printf("Digite o autor:\n");
   scanf("%s", l.autor);
   printf("Digite o Titulo:\n");
   scanf("%s", l.titulo);
   printf("Digite o Codigo:\n");
   scanf("%d", &l.codigo);
   printf("Digite o Estilo:\n");
   scanf("%s", l.estilo);
   printf("Digite o Preço:\n");
   scanf("%f", &l.preco);
return l;
}
void listar(Livro vet[]){
        int i=0;
        for(i=0; i<max && vet[i].codigo!=-1; i++){
        printf("\n\nLivro %d\n", i);
               
        imprime(vet,i);
}

}
int Bautor(Livro vet[], char autor[]){
        int i=0;
        int cont=0;
        for(i=0; i<max; i++){
                if(strcmp(vet[i].autor, autor)==0){
                imprime(vet,i);
                cont++;
                }
        
        }
        return cont;
}
int Btitulo(Livro vet[], char titulo[]){
        int i=0;
        int cont=0;
        for(i=0; i<max; i++){
                if(strcmp(vet[i].titulo, titulo)==0){
                imprime(vet,i);
                cont++;
                }
        
        }
        return cont;
}
int Bestilo(Livro vet[], char estilo[]){
        int i=0;
        int cont=0;
        for(i=0; i<max; i++){
                if(strcmp(vet[i].estilo, estilo)==0){
                imprime(vet,i);
                cont++;
                }
        
        }
        return cont;
}
int media(Livro vet[]){
        int i=0;
        float media=0.0;
        for(i=0; i<max && vet[i].codigo != -1; i++){
         media= media + vet[i].preco;
        }
        return media/i;
        
}
void inicializar(Livro vet[]){
        int i;
        for(i=0; i<max; i++){
                vet[i].codigo = -1;
        }

}

int main(){
Livro vetlivros[max];
        char ch[1]; int i=0;
        char autor[15];
        int cont=0;
        int numlivros=0;
        
        inicializar(vetlivros);
        printf("Digite a quantidade de Livros\n");
        scanf("%d", &numlivros);

 
        for(i=0;strcmp(ch,"s")!=0;i++){
                menu();
                scanf("%s",ch);
                if(ch[0]=='i'){
                        if(cont>(max-1)){
                        printf("\tNão é possível armazenar!!\n");
                        }else{ 
                        vetlivros[cont]= incluir();
                        cont++;
                    }
                }
           if(ch[0]=='l'){
               if(cont==0){
               printf("\nLista vazia");
               }else{
               listar(vetlivros);
               }
           }
        if(ch[0]=='a'){
              char autor[15];
        printf("Digite o autor a ser procurado\n");
              scanf("%s", autor);
              int v=Bautor(vetlivros, autor);
              if(v==0){
              printf("\nNão existe nenhum autor");
              }
        }
        if(ch[0]=='t'){
              printf("Digite o titulo a ser procurado\n");
              char titulo[15];
              scanf("%s", titulo);
              int v=Btitulo(vetlivros, titulo);
              if(v==0){
              printf("\nNão existe nenhum titulo");
              }
              
              }
        if(ch[0]=='e'){
                printf("Digite o estilo a ser procurado\n");
              char estilo[15];
              scanf("%s", estilo);
              int v=Bestilo(vetlivros, estilo);
              if(v==0){
              printf("\nNão existe nenhum autor");
              }
                }
        if(ch[0]=='m'){
           float m= media(vetlivros);
                printf("A média eh: %f", m);
        
        
}
}
}
