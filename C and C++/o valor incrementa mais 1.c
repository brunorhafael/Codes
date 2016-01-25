#include <stdio.h>
#include <conio.h>

int main () {
    int  n, h;
    h=1;
    printf("digite o valor que desejar");
    scanf("%d", &n);
      for( h=1; h<n; h++)
      printf("%d", h);
    
    getch ();
    return 0;
}
