#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(void){
    char arm;
    system("color a");
    printf("Opiniao\n");
    scanf("%d", &arm);
    switch (arm){
           case 1:
                printf("Otimo");
                break;
           case 2:
                printf("Foda-se");
                break;
           default:
                   printf("Morra");
                   break;
                   
    }
    
    
    getch();
    return 0;
}
