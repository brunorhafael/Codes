/*10. Escreva uma função soma1 que recebe por parâmetro um valor inteiro e positivo N e retorna o 
valor de S, de acordo com a soma abaixo.
S = 1 + 1/2 + 1/3 + 1/4 + 1/5 + ... + 1/N.*/
#include <stdio.h>
#include <conio.h>

void Soma1(int N, float *s)
{
      int i;
      for(i=1;i<=N;i++)
      {
               *s+=1.0/i;        
      }
}
int main()
{
    int N;
    float s=0;
    
    printf("Informe um valor\n");
    scanf("%d", &N);
    
    Soma1(N,&s);
        
    printf("O valor de 'S' eh %0.2f",s);
    getch();
    return 0;
}
