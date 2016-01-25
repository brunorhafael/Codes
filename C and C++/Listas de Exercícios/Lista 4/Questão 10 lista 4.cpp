#include<stdio.h>
#include <conio.h>

int negativos(float v[], int n)
{
    int j = 0, i,;
    
    for(i=0; i<n; i++)
    {
             if(v[i] < 0)
             {
                     j++;
             }
    }
    return j;
}

int main()
{
    
    int i, u;
    int n = 0;
    
    printf("Digite o tamanho do vetor ");
    scanf("%d", &n);
    float v[n];
    
    for(i=0; i<n; i++)
    {
             printf("Digite os elementos do vetor: ");
             scanf("%f", &v[i]);
    }

    u = negativos(v, n);
    
    printf("Foram digitados %d numeros negativos", u);

    getch();
    return 0;
}
