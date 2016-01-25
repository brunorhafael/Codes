#include <stdio.h>
#include <conio.h>

int main()
{
    int continuar, cp, qp;
    float pp, total;
    continuar = 1;
    
    while( continuar == 1 )
    {
           printf("Qual o valor do produto?\n\t\t");
           scanf( "%f", &pp );
           printf( "Quantos produtos deseja comprar?\n\t\t" );
           scanf( "%d", &qp );
           
           total = total + qp * pp;
    
           printf( "Desja continuar? 1 - sim || 2 - Nao\n\t\t" );
           scanf( "%d", &continuar );
    }
    
    printf( "Qual a condicao de pagamento?\n\n1 - A vista em dinheiro ou cheque, com 10 por cento de desconto\n2 - A vista com cartao de credito com 5 porcento de desconto\n3 - Em 2 vezes, preco normal da etiqueta sem juros\n4 - Em 3 vezes no cartao, com acressimo de 10 porcento\n" );
    scanf( "%d", &cp );
    
    while( cp > 0)
    {
           if( cp == 1 )
           {
               total = total * 0.90;
               break;
           }
           if( cp == 2 )
           {
               total = total * 0.95;
               break;
           }      
           if( cp == 3 )
           {
               break;
           }
           if( cp == 4 )
           {
               total = total / 0.90;
               break;
           }
           if(cp != 1 && cp != 2 && cp != 3 && cp != 4){
                 printf("Valor invalido! Digite uma das 4 condicoes de pagamento: ");
                 scanf("%d", &cp);
                 }
    
    }
    printf( "O valor da compra e: %.2f", total );
    
    getch();
    return 0;
}
