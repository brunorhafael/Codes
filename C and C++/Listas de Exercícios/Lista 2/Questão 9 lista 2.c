#include <stdio.h>
#include <conio.h>

int main(void)
{
 float tempC , tempF;
 printf("Digite o valor da temperatura em Celsius: \n");
 scanf("%f",&tempC);
 tempF= (tempC*1.8)+ 32;
 printf("A temperatura %f celsius corresponde a %f farenheit",tempC,tempF);
    
    
    
getch();
return 0;
    
}
