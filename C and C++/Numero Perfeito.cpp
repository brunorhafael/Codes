#include <stdio.h>
#include <conio.h>

int main(void){
    
    int resto=0, n, div=1, soma=0;
    printf("Digite o numero: ");
    scanf("%d", &n);
    
    while (div < n){
          resto = n%div;
          
          if (resto==0){
                        soma+=div;
                        }

          div++;

    }
    if (soma == n){
             printf("Numero perfeito\n");
    }else
    printf("Este numero nao eh perfeito e a soma dos divisores eh: %d", soma);
    
    getch();
    return 0;
}
