#include <stdio.h>
#include <conio.h>
main(){
       int cont,num,bin,dig;
       cont=1;bin=0;dig=0;num=0;
       scanf("%d",&num);
       while(num>0){
                    dig=num%2;
                    bin=bin+dig*cont;
                    cont=cont*10;
                    num=num/2;
                    
                    }
                    printf("\n\nBin = %d",bin);
       getch();
       }
