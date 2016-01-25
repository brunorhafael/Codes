#include<stdio.h>
#include<conio.h>


  int funcB(int x){
      
        if(x=0)     return 0;
        
        if(x>0)     return 3*funcB(x-1)+x ;
                
         } 
int main(){
    
    
    int res = funcB(1);
    printf("O resultado eh: %d\n", res);

getch();
return 0;
     }
