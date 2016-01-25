/*10. Escreva uma função soma1 que recebe por parâmetro um valor inteiro e positivo N e retorna o 
valor de S, de acordo com a soma abaixo.
S = 1 + 1/2 + 1/3 + 1/4 + 1/5 + ... + 1/N.*/
#include <stdio.h>
#include <conio.h>

float Soma1(int N)
{
      int i;
      float s=0;
      for(i=1;i<=N;i++)
      {
               s+=1.0/i;        
      }
      return s;
}
int main()
{
    int N;
    
    printf("Informe um valor\n");
    scanf("%d", &N);
        
    printf("O valor de 'S' %c %.2f", 130, Soma1(N));
    getch();
    return 0;
}
