#include <stdio.h>
#include <conio.h>

 int fnc(int L[], int n,int Q[], int m){
     
     int i;
     int j;
     int teste = 0;
     int aux = 0;
     for(i=0; i<n; i++)
           for (j=0;j<m;j++)  
              if (L[i]%Q[j] == 0){
                         teste++;
                     if(teste == m)
                        aux += L[i];
                     else
                        continue; }  
         
              else 
                 continue;   
               return aux;          
               }                   

int main(){
      
   int X[] = {10,8};
   int Y[] = {2,9,10};
   
   int a = 2;
   int b = 3;
       
   int aux2 = fnc (X,a,Y,b);
 
    printf("%d",aux2);
getch();
return 0;

}
