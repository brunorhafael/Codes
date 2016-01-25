/*8. Fa�a uma fun��o que l� N n�meros informados pelo usu�rio e retorna a soma dos n�meros 
perfeitos e a m�dia dos n�meros primos. Para isso, utilize as fun��es feitas na quest�o 3 
e 7. A fun��o deve parar quando o usu�rio digitar um n�mero negativo.*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int primo(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
                    if ((n % i) == 0)
                    {
                          return 1;
                     }
     }
    return 0;
 }

int nPerfeito(int n)
{
    int i, divisores;
    divisores = 0;
    for(i=1;i<n;i++)
    {
                    if(n%i==0)
                    {
                              divisores += i;
                     }
     }
    if(divisores == n)
                 return 1;
    else
        return 0;
 }
 
int main()
{
    int soma=0, N;
    float media=0, i=0;
    
    printf("Informe um numero\n");
    scanf("%d", &N);
    while(N>=0)
    {
                     if(nPerfeito(N)==1)
                                     soma += N;
                     if(primo(N)==0)
                     {
                                    media += N;
                                    i++;
                      }
                     printf("Informe outro numero\n");
                     scanf("%d", &N);
                     if(i==0)
                             media = 0;
                     else if(N<0)
                            media = media / i;
                     
     }
    
    system ("cls");
    printf("A soma dos numeros perfeitos %c %d\n", 130, soma);
    printf("A m%cdia dos numeros primos %c %0.2f\n", 130, 130, media);
    
    getch();
    return 0;
}
