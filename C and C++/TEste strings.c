#include <stdio.h>
#include <conio.h>
#include <string.h>

int main (){
    int i;
    for ( i=0;i<400;i++){
        printf("%d-%c\t",i,i);
                        }
       printf("\t\t% c %c %c %c %c %c %c\n ", 164,165,166,167,26,26,26);                 
        
        char palavra[100];
        scanf("%[^ \n]",palavra);
        printf("  Palavra digitada foi:  %s \n",palavra);
        
        getch();
        return 0;
        }
