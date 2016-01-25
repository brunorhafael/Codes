#include <stdio.h>
#include <conio.h>

int main(void){
    int resto, decimal=0, poten2=1, n;
    printf("Digite o numero em BINARIO: ");
    scanf("%d", &n);
    while(n>0){
               resto = n%10;
               decimal = decimal + resto * poten2;
               
               n /= 10;
               poten2 *= 2;
    }
    printf("O numero em Decimal eh: %d", decimal);
    getch();
    return 0;
}
