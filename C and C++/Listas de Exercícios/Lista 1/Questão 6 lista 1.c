#include <stdio.h>
#include <conio.h>

int main (void)
{
    int h=0, n,i=1;
    printf("Digite o valor que vc deseja fazer a soma");
    scanf("%d", &n);
    while( h<=n ){
        h=h+i;
        i++;
        }
        printf("o valor total de h eh: %d \n", h);
        
        getch();
        return 0;       
        
        

}
