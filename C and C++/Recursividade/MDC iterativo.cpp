#include <stdio.h>
#include <conio.h>


int main(){
    
     int x = 10;
     int y = 9;
     int aux;
     int aux2;
        
       while(x%y != 0){
        aux = x % y;        
        aux2 = y % aux;       
        if (aux2 == 0){ 
            printf("%d",aux);
            break;
           }
        else {
        y = aux2;          
        x = aux;   
     }               
   }
      if (x%y == 0){
              printf("%d", y);
              } 
          
getch();
return 0;

}
