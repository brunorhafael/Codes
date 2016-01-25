#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){

   char dog[] = "dog";
   char cat[] = "cat";
   char galinha[] = "galinha";
   int i = 0;
   int n = 0;
       
   printf("Digite o numero de palavras\n");
   scanf("%d",&n);
   char* palavra[n];
     for(i=0;i<n;i++){
         printf("Digite os animais\n");
         scanf("%s",&palavra[i]);          
     }
     
     for(i=0;i<n;i++){
         if(strcmp(palavra[i],dog)==0){
            printf("auau..\n");
        }else if(strcmp(palavra[i],cat)==0){                     
            printf("miau..\n");
        }else if(strcmp(palavra[i],galinha)==0){                     
            printf("mooooounn..\n");
        }else{                              
            printf("Nao reconhecido!\n");
        }
     }        
getch();
return 0;
}
