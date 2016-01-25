#include <stdio.h>
#include <conio.h>

#define MAX 5
 
int main (){
        
        int v[MAX];
        int i,j=0,n,cont=0;
        
        for(i=0;i<MAX;i++){
             scanf("%d",&n);
             
             if(n>0){
               v[j]=n;
               j++;
               cont++;
             }
     
        }
        for(i=0;i<cont;i++)
            printf("%d ",v[i]);
            
        getch();
        return 0;
}
