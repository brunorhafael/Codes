#include <stdio.h>
#include <conio.h>

main () 
{
float np1, np2,media,nr1,nr2,mediar;
printf("Digite a nota 1 do aluno:\n");
scanf("%f",&np1);
printf("Digite a nota 2 do aluno:\n");
scanf("%f",&np2);
media=(np1+np2)/2;
if(media>=7.0){
             printf("A media das notas foi: %.2f \n",media);
             printf("Aluno aprovado por conceito A.");
             }
if(media<=4.0){
             printf("A media das notas foi: %.2f \n",media);
             printf("Aluno reprovado");
             }
if(media>4.0 && media<7.0){
             printf("A media das notas foi: %.2f \n",media);
             printf("Aluno ira para a recuperacao\n");
             printf("Digite a nota da recuperacao 1:\n");
             scanf("%f",&nr1);
             printf("Digite a nota da recuperacao 2:\n");
             scanf("%f",&nr2);
             mediar=(nr1+nr2)/2;
             printf("A media do aluno nas provas finais:%.2f\n",mediar);
             if(mediar>5.0){
                            printf("Aluno aprovado por conceito B\n");
                            }
                            else{printf("Aluno reprovado, se lascou.");
                            }
                            }
             

getch();
return 0;     
     
}
