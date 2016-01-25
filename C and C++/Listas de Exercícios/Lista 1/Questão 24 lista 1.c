#include <stdio.h>
#include <conio.h>

int main () {
    int DN, DH, MN , MH, AN,AH, calcd,calcm,calca;
    printf("Digite a o dia em que voce nasceu");
    scanf("%d",&DN);   
    printf("Digite a o dia de hoje");
    scanf("%d",&DH);
    printf("Digite o mes que voce nasceu");
    scanf("%d",&MN);
    printf("Digite o mes de hoje");
    scanf("%d",&MH);
    printf("Digite o ano que voce nasceu");
    scanf("%d",&AN);
    printf("Digite o ano de hoje");
    scanf("%d",&AH);    

    int totalnasc = DN + ((MN - 1) *30) +  (AN * 365);
    int total_atehj = DH + ((MH - 1 )*30) + (AH * 365);
    int dias_totais = total_atehj - totalnasc;
    int anosvividos = dias_totais / 365;
    int mesesvividos = (dias_totais % 365) /30;
    int diasvividos  = mesesvividos % 30;
    
    printf("Voce vivi a %d anos, %d meses, %d dias ",anosvividos, mesesvividos, diasvividos);
    
    
    getch();
    return 0 ;
    
}
