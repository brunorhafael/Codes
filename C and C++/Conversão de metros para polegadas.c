#include <stdio.h>

int main (void) {
    int f;
    float p;
    float h;
    
    printf("Digite a altura em metros");
    scanf("%f", &h);
    
    h = h*100;
    f = (int) (h/30.48);
    p = (h-f*30.48)/2.54;
    
    printf("Altura: %dft %.1pol\n", f,p);
    
    getch();
    return 0;
}
