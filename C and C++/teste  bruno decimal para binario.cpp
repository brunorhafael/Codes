#include <stdio.h>
#include <conio.h>

int main() 
{
 int n,bin=0,resto,cont=1;
 printf("Digite o numero que voce deseja converter para binario: ");
 scanf("%d",&n);
 while(n>0){
            resto=n%2;
            bin=bin+resto*cont;
            cont=cont*10;
            n=n/2;
            }
            printf("BIN =  %d ",bin);
            
    
    
    
    
    
 getch();
 return 0;   
    
    
}
