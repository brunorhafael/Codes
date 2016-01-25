#include <stdio.h>
#include <conio.h>
void diasDeVida(int anos, int meses, int dias, int *idade){
    *idade= (anos * 365) + (meses * 31) + dias;
    }

int main(void){
    int anos, meses, dias, idade=0;
    printf("\n\t Digite os anos: ");
    scanf("%d",&anos);
    while(anos<0){
                  printf("\n\t Nao sera aceito valor de ano negativo: ");
                  scanf("%d",&anos);
                  }
    printf("\n\t Digite os meses: ");
    scanf("%d",&meses);
    while(meses<1 || meses>12){
                  printf("\n\t Meses devem ser de 1 a 12: ");
                  scanf("%d",&meses);
                  }
    printf("\n\t Digite os dias: ");
    scanf("%d",&dias);
    while(dias<1 || dias>31){
                  printf("\n\t Dias devem ser de 1 a 31: ");
                  scanf("%d",&dias);
                  }
    diasDeVida(anos, meses, dias, &idade);
    printf("\n\t Voce viveu ate agora %d dias",idade);
    getch();
    return 0;
    }
