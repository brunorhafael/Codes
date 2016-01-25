#include <stdio.h>
#include <conio.h>

int main() 
{

   float salnovo,sal=1,total = 0, total1 = 0;
   
         printf("Digite o valor de seu salario para fazer os reajustes necessarios: \n");
         scanf("%f",&sal);
   
   while ( sal > 0 ) {

         
         if ( sal < 500 ){
              salnovo = ( sal * 0.15 ) + sal;
              }
         if ( sal >= 500 && sal <= 1000 ) {
              salnovo = ( sal * 0.10 ) + sal;
              }
         if ( sal > 1000 ) {
              salnovo = ( sal * 0.05 ) + sal;
              }  
              
              total = total + sal;
              total1 = total1 + salnovo;
                      
         printf( " O valor do salrio com os reajustes eh de \n %.1f R$...",salnovo );
         printf( "Se nao deseja continuar digite um salario negativo senao continue informando o salario do funcionario \n");
         scanf("%f",&sal);
         }
         
         printf( "\tO total gasto pela empresa sem os reajustes era de : %.1f\n ",total );
         printf( "\tE o total gasto pela empresa com os reajustes e de : %.1f\n",total1);
         

         printf("\t \n Obrigado por usar o programa.");

    getch();
    return 0;
}
