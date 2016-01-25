#include <stdio.h>
#include <conio.h>

int main () {
    int n, i,calc;
	printf("Digite  um numero para que seja mostrado a sua tabuada\n");
	scanf("%d", &n);
	   for(i=1; i<=9; i++){
	   calc=n*i;
	   printf("os valores sao :%d\n", calc);
    }
	   
	getch();
    return 0;
}	
