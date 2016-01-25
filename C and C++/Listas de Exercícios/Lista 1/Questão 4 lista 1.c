#include <stdio.h>
#include <conio.h>

int main (void) {
    int horas, salario, calc=1, i=1;
    printf("Digite quantos horas trabalhou hoje: \n");
    scanf("%d", &horas);
    for(i=1; i<5; i++) {
             printf("Continue digitando as horas que trabalhou durante os 5 dias \n");
             scanf("%d",&horas);
             calc = calc + horas;
             }
             salario = calc*10; 
             printf("o valor de horas trabalhadas eh de : %d \n", calc);
             printf("e o salario bruto eh de : %d \n", salario);
             
             getch ();
             return 0; 
        
    
    
    
    
    
    
}
