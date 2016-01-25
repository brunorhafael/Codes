#include <stdio.h>
#include <conio.h>

int main (void){
    int azul=10, preta=30, verde=50, tipo_azul, tipo_verde, tipo_preta, calculoa, calculop, calculov, i, calculototal;
    printf("Digite a quantidade de caixas AZUL a serem somadas \n");
    scanf("%d", &tipo_azul);
    for(i=0; i<tipo_azul; i++){
             calculoa=tipo_azul*azul;
             }
             
    printf("Digite a quantidade de caixas PRETA a serem somadas \n");
    scanf("%d", &tipo_preta);
    for(i=0; i<tipo_preta; i++){
             calculop=tipo_preta*preta;
             }
             
    printf("Digite a quantidade de caixas VERDE a serem somadas \n");
    scanf("%d", &tipo_verde);
    for(i=0; i<tipo_preta; i++){
             calculov=tipo_verde*verde;
             }
   
    printf("Peso total das caixas azul eh: %d \n", calculoa);
    printf("Peso total das caixas verde eh: %d \n", calculop);
    printf("Peso total das caixas preta eh: %d \n", calculov);
	
	calculototal=calculoa+calculop+calculov;
	printf("O valor Total eh: %d",calculototal);
    
    
    
    
    getch();
    return 0;
}
