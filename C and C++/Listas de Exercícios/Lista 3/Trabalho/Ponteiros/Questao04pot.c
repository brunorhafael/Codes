#include <stdio.h>
#include <math.h>
#include <conio.h>
void calcMedia(float nota1, float nota2, float nota3, int tipoMedia, float *media){
      switch(tipoMedia){
                        case 1:
                             *media= (nota1 + nota2 + nota3)/3.0;
                             break;
                        case 2:
                             *media=((5*nota1) + (3*nota2) + (2*nota3))/10.0;
                             break;
                        case 3:
                             *media= pow( (nota1*nota2*nota3) , 1/3 );
                             break;
                        default: 
                                 *media = 0;
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
    calcMedia(nota1,nota2,nota3,tipoMedia,&media);
    printf("\n\t A media do aluno foi: %f",media);
    getch();
    return 0;
    }
