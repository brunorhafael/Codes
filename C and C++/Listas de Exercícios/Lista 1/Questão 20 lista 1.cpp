#include <stdio.h>
#include <conio.h>

int main()
{
    float sl, sb, ht, vh;
    int continuar;
    
    continuar = 1;
    
    while(continuar == 1)
    {
    
    printf( "Informe quantas horas seu funcionario trabalhou por mes: " );
    scanf( "%f", &ht );
    printf( "Informe quanto vale a trabalhada pelo seu funcionario: " );
    scanf( "%f", &vh );
    
    sb = vh * ht;
    
    if(sb > 900 && sb <= 1800 )
    {
          sb = sb - 135;
    }
    if(sb > 1800)
    {
         sb = sb - 360;
    }
    sl = sb * 0.89;
    
    printf( "O salario liquido do seu funcionario e: %.2f\n", sl );
    printf( "Deseja continuar? Sim - 1 \t Nao - 2: " );
    scanf( "%d", &continuar );
    
    if(continuar != 1 && continuar != 2){
                 printf("Valor invalido! Digite 1 para continuar ou 2 para sair: ");
                 scanf("%d", &continuar);
                 }
    }
    
    getch();
    return 0;
}
    

    
