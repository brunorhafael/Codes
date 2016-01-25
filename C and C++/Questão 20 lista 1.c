#include <stdio.h>
#include <conio.h>

int main() 
{
   float horasTrabalhadas=1,valorHoras=1,inss,test=1;
   int continuar=1;
   while(continuar == 1){
                   printf("Digite as horas trabalhadas ");
                   scanf("%f",&horasTrabalhadas);
                   printf("Digite o valor das horas trabalhadas ");
                   scanf("%f",&valorHoras);
                     test = horasTrabalhadas * valorHoras;

   
   
       if( test > 900 && test <= 1.800 ) {
       test = test - 135;
       }else
       if( test > 1.800){
       test = test - 360;  
       }else
       printf("O salario eh : \n %f",test);
       
       inss =  test * 0.89;
       printf("O salario liquido eh: %.1f",test);
       printf("Se deseja continuar digite 1 se nao digite 2");
       scanf("%d",&continuar);
       }
       
       printf("Fim do programa");
       
    getch();
    return 0;
}
