#include <stdio.h>
#include <conio.h>
#include <math.h>

int main ()
{
    int decimal=0,binario,potencia2=1;
    printf("Digite um numero");
    scanf("%d",&binario);
    
    while(binario>0){
                    int digito=binario%10;
                    decimal=decimal+digito*potencia2;
                    binario=binario/10;
                    potencia2 *=2;
                    
                    }
                    printf("Decimal:%d\n",decimal);
    
    
    
    getch();
    return 0;
}
