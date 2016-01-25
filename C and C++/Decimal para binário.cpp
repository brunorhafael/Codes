#include <stdio.h>
#include <conio.h>

int main(void){
    int resto, binario=0, poten10=1, n;
    printf("Digite o numero em Decimal: ");
    scanf("%d", &n);
    
    while(n >=1){
                  resto = n % 2;
                  binario = binario + resto * poten10;
                  
                  n /=2;
                  poten10 *=10;
    }
    printf("O numero em Binario eh: %d", binario);
    getch();
    return 0;
}
