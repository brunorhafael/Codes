#include <stdio.h>
#include <conio.h>


 int mdc(int a, int b){
     
     if (b!= 0)
        return mdc(b,a%b);    
     else
        return a;

     }

 int main(){

   int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    
   int aux = mdc(x,y);
    printf("%d",aux);

getch();
return 0;

}
