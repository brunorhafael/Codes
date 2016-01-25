#include <stdio.h>
#include <conio.h>
#include <math.h>

int main ()
{
    int numero, decimal=0,cont=0,soma=0;
    printf("Digite um numero");
    scanf("%d",&numero);
    while(numero>0){
                    int digito=numero%10;
                    decimal=digito*pow(2,cont);
                    numero=numero/10;
                    soma=soma+decimal;
                    cont++;
                    printf("Numero: %d\n Digito: %d\n",numero,digito);
                    
                    }
                    printf("Soma:%d\n",soma);
    
    
    
    getch();
    return 0;
}
