#include <stdio.h>
#include <conio.h>

int main (void){
    int r, i, res;
    float  v=(4/3), pi=3.14, calc;
    printf("Digite o valor de R: \n");
    scanf("%d", &r);
    res=r;
    for (i=1; i<3; i++){
        res=res*r;
        }
        printf("O valor de R ao cubo eh: %d \n", res);
    calc=v*pi*r;
    printf("O valor do Raio eh: %.2f", calc);
    
    getch();
    return 0;
}
