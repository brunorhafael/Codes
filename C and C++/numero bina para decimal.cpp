#include <stdio.h>
#include <conio.h>

int main(void){
    int resto, decimal=0, potencia2=1, numero;
    printf("Digite o numero em binario: ");
    scanf("%d", &numero);
    while(numero > 0){
                 resto = numero%10;
                 decimal = decimal + resto * potencia2;
                 numero = numero/10;
                 potencia2 = potencia2*2;
                 }
                 printf("Decimal %d", decimal);
    getch();
    return 0;
}
