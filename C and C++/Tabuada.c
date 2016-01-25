#include <stdio.h>
#include <conio.h>

int main () {
    int n, i,calc,calc1,calc2;
	printf("Digite  um numero para que seja mostrado a sua tabuada\n");
	scanf("%d", &n);
	   for(i=1; i<10; i++){
	   calc=n*i;
	   calc1=n+i;
	   calc2=i-n;
	   printf("os valores sao : multplicacao: %d soma: %d subtracao %d \n", calc,calc1,calc2);
    }
	   
	getch();
    return 0;
}	
