/*8. Fa�a um procedimento que recebe a idade de um nadador por par�metro e retorna , tamb�m por 
par�metro, o tipo da categoria desse nadador, de acordo com a tabela abaixo:
Idade Tipo da Categoria
      5 a 7 anos 1
      8 a 10 anos 2
      11-13 anos 3
      14-17 anos 4
      Maiores de 18 anos (inclusive) 5
Escreva uma outra fun��o que recebe o tipo da categoria e imprime a descri��o dessa categoria de
acordo com a tabela abaixo:
Tipo Categoria Descri��o
     1 Infantil A
     2 Infantil B
     3 Juvenil A
     4 Juvenil B
     5 Adulto
Na fun��o main, crie um la�o para ler a idade de v�rios nadadores. Para cada itera��o, o usu�rio
deve digitar uma idade. A primeira fun��o acima deve ser usada para calcular o tipo da
categoria e a segunda fun��o para imprimir a descri��o dessa categoria. O la�o deve parar quando o
usu�rio digitar um n�mero negativo.*/

#include <stdio.h>
#include <conio.h>

int categoria(int idade)
{
    if(idade<5)
               return 0;
               else if(idade < 8)
                    return 1;
                    else if(idade < 11)
                         return 2;
                         else if(idade < 14)
                              return 3;
                              else if(idade < 18)
                                   return 4;
                                   else
                                       return 5;
 }
int descricao(int tipo)
{
    switch(tipo)
    {
    case 1:
         printf("\tInfantil A");
         break;
    case 2:
         printf("\tInfantil B");
         break;
    case 3:
         printf("\tJuvenil A");
         break;
    case 4:
         printf("\tJuvenil B");
         break;
    case 5:
         printf("\tAdulto.");
         break;
/*    default
           printf("");*/
     }
    
 }
int main()
{
    int idade;
    
    printf("\nQual a idade do nadador???\n\t");
    scanf("%d", &idade);
    while(idade<5 && idade>=0)
    {
           printf("Informe uma idade maior ou igual %c cinco\n", 133);
           scanf("%d", &idade);
     }
    while(idade>=0)
    {
            descricao(categoria(idade));
            printf("\nQual a idade do nadador???\n\t");
            scanf("%d", &idade);
            while(idade<5 && idade>=0)
            {
                   printf("Informe uma idade maior ou igual %c cinco\n", 133);
                   scanf("%d", &idade);
            }
     }
    
    getch();
    return 0;
}
