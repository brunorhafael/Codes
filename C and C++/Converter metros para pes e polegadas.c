#include<stdio.h>
#include<conio.h>
// Converter de metros para pes e polegadas. Representação: 1,75 = 6'4" //
int main()
{ 
   float metros, polegadas;
   int pes;
   
   printf("Digite o valor da altura em metros");
   scanf("%f",&metros);
   
   while(metros<=0){
                    printf("\n Voce digitou uma altura negativa Digite a altura positiva : ");
                    scanf("%f",&metros);
                    }   
       metros = metros*100;
       pes = (metros/30.48);
       polegadas = ( metros - pes*30.48) / 2.54;
       
       printf("Altura em metros : %.2f", metros );
       printf("Altura em pes/polegadas eh: %d' %.2f'' ", pes,polegadas);
       
       
       
       
       
       getch();
       return 0;
       
}

