/*11. Escreva uma fun��o soma2 que recebe por par�metro um valor inteiro e positivo N e retorna 
o valor de S, de acordo com a soma abaixo.
S = 1 + 1/1! + 1/2! + 1/3! + 1 /N!
Obs. Voc� deve criar uma fun��o fatorial e cham�-la dentro dessa fun��o soma2 que voc� vai criar.
12*/
#include <stdio.h>
#include <conio.h>

int fatorial(int N)
{
    int i, fat=1;
    for(i=1;i<=N;i++)
    {
           fat= i * fat;
     }
    return fat;
}
float Soma2(int N)
{
      int i;
      float s=0;
      for(i=1;i<=N;i++)
      {
               s+=1.0/fatorial(i);        
      }
      return s;
}
int main()
{
    int N;
    
    printf("Informe um valor\n");
    scanf("%d", &N);
        
    printf("O valor de 'S' %c %.2f", 130, Soma2(N));
    getch();
    return 0;
}
