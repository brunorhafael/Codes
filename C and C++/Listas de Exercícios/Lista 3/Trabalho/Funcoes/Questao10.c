/*9. Fa�a uma fun��o que leia um n�mero n�o determinado de valores positivos e retorna a m�dia 
aritm�tica dos mesmos. O programa deve parar quando o usu�rio digitar um n�mero negativo.*/

#include <stdio.h>
#include <conio.h>

float media()
{

    float media= 0, i = 0, mediar=0;
    int numero;

    printf("\n\t Digite um numero positivo para iniciar o programa: ");
    scanf("%d", &numero);
    while(numero<0){
                    printf("\n\t Valor invalido, digite um numero positivo: ");
                    scanf("%d", &numero);
                    }
    while(numero>=0)
    {
            media += numero;
            i++;
            printf("\n\t Qual o outro n%cmero???", 163);
            scanf("%d", &numero);
     }
     mediar = (media/i);
     return mediar;
}

int main(void)
{
    float Media;
    Media = media();
    printf("\n\t A media Aritmetica dos numeros digitado foi: %0.2f",Media);
    getch();
    return 0;
}
