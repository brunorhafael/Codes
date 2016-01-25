#include <stdio.h>           
#include <conio.h>

  int main(void) {
        int f;
        float calc;
        printf("Digite a temperatura em Fahrenheit: \n");
        scanf("%d",&f);
            if(f>=1 && f<=50){
              calc = (f-32)*5/9;
              printf("\t O valor em Celsius eh: \n %.2f", calc);
              }
             else 
              printf("Valor invalido, execute o programa novamente e informe um valor entre 1 e 50");
             
    
    
    
    getch();
    return 0;
   
}
