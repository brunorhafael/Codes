#include <stdio.h>
#include <conio.h>

int main()
{
 int decimal;
 int binario=0;
 int potencia10 = 1;
 
 printf("Digite um numero em decimal : ");
 scanf("%d",&decimal);
 
 while(decimal > 0){
               int resto = decimal % 2;
               binario = binario + resto*potencia10;
               
               decimal = decimal/2;
               
               potencia10 *= 10;
               }   
               
               printf("O valor  em binario  e  %d  ",binario);
               
               
    getch();
    return 0;
    
}
