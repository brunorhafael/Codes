#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
int main(void){
    int idade, qtd, somaid;
    char op,gambiarra; //gambiarra para pegar o caractere "enter" antes do scanf de op.
    float media=0,a,b,c,d,e;
    a=b=c=d=e=qtd=somaid=0;
    printf("Entre com a sua idade: ");
    scanf("%d",&idade);
    while(idade<=0){
                   printf("\t\nEntre com a sua idade: ");
                   scanf("%d",&idade);
                   }
    while (idade>0){
          printf("\t\n[a]Otimo [b]Bom [c]Regular [d]Ruim [e]Pessimo: ");
          scanf("%c",&gambiarra);
          scanf("%c",&op);
          if(op=='a'){
                      a++;
                      }
          else if(op=='b'){
                      b++;
                      }
          else if(op=='c'){
                      c++;
                      }
          else if(op=='d'){
                      d++;
                      }
          else if(op=='e'){
                      e++;
                      }
    //else if(op=='e'){ e++; }
    qtd++;
    somaid+=idade;
    system("cls");
    printf("\n\t Caso entre com uma idade negativa a pesquisa sera encerrada\n");
    printf("\t\nEntre com a sua idade: ");
    scanf("%d",&idade);
    }
    system("cls");
    media=somaid/qtd;
    a=(a/qtd)*100;
    b=(b/qtd)*100;
    c=(c/qtd)*100;
    d=(d/qtd)*100;
    e=(e/qtd)*100;    
    printf("\t\n A quantidade de pessoas que responderam a pesquisa foi %d",qtd);
    printf("\t\n A media da idade das pessoas que responderam a pesquisa foi %f",media);
    printf("\t\n A porcentagem das pessoas que responderam A foi %f",a);
    printf("\t\n A porcentagem das pessoas que responderam B foi %f",b);
    printf("\t\n A porcentagem das pessoas que responderam C foi %f",c);
    printf("\t\n A porcentagem das pessoas que responderam D foi %f",d);
    printf("\t\n A porcentagem das pessoas que responderam E foi %f",e);
    getch();
    return 0;
    
    }
