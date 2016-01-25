#include <stdio.h>
#include <math.h>
#include <conio.h>
float calcMedia(float nota1, float nota2, float nota3, int tipoMedia){
      if(tipoMedia==1){
                       float media = (nota1 + nota2 + nota3)/3.0;
                       return media;
                       }
      else if(tipoMedia==2){
                       float media = ((5*nota1) + (3*nota2) + (2*nota3))/10.0;
                       return media;
                       }
      else if(tipoMedia==3){
                       float media = pow( (nota1*nota2*nota3) , 1/3 );
                       return media;                       
                       }
      else{
           return 0;
           }
      }

int main(void){
    float nota1, nota2, nota3, media=0;
    int tipoMedia;
    printf("\n\t Digite a primeira nota do aluno: ");
    scanf("%f",&nota1);
    printf("\n\t Digite a segunda nota do aluno: ");
    scanf("%f",&nota2);
    printf("\n\t Digite a terceira nota do aluno: ");
    scanf("%f",&nota3);
    printf("\n\t Digite o tipo de media a ser calculada: ");
    scanf("%d",&tipoMedia);
    media = calcMedia(nota1,nota2,nota3,tipoMedia);
    printf("\n\t A media do aluno foi: %f",media);
    getch();
    return 0;
    }
