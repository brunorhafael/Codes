#include <stdio.h>
#include <conio.h>

int main ()
{
   int Cx, qtdproduto, preco,continuar=1;
   float porct, prazo, valorporct, valorfinal,valortotal;
   
   
   while(continuar){
      printf("\tDigite a quatidade de dinheiro existente no caixa:  ");
      scanf("%d",&Cx);
      printf("\tDigite a quatidade de produto:  ");
      scanf("%d",&qtdproduto);
      printf("\tDigite o preco de cada produto:  ");
      scanf("%d",&preco);
    
           valortotal = qtdproduto * preco; 
           porct = Cx * 0.80;
      
            if( valortotal > porct ) {
                 valorporct = valortotal * 0.10;
                 valorfinal = valortotal + valorporct;
                 prazo = valorfinal/3;
                 printf(" O valor total da compra foi %.1f \n Vai ser dividida em tres parcelas com cada uma no valor de : %.2f",valorfinal ,prazo);
                               }
            else{
                 valortotal = (valortotal) - ( valortotal * 0.05 );
                 printf("A compra vai ser a vista e o valor com desconto de 5 porcento vai ser de %.2f .",valortotal);
           }
                 printf("\n \t Se deseja continuar digite 1 senao digite qualquer outro valor");
               scanf("%d",&continuar);
            if ( continuar != 1){
                printf("Fim do programa");
                break;}
           }
                                      
      
 getch();
 return 0;   
    
}
