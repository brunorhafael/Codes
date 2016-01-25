
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>


int main(void)
{
int i=0;

printf("Tabela ascii!\n\n");

for(i=0;i<255;i++)
printf("%d %c\n",i,i);

getch();
return(0);
}
