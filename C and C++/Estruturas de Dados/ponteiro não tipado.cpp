#include <stdio.h>
#include <conio.h>


int main(){
 
     int u[] = {2,7,9,11}, k;
     void* p = (void*) u;
     
      for (k=0; k<4; k++){
          
          printf("\n%d", * ( (int*) p));
          p += sizeof(int);
          
          
          }
getch();          
return 0;

}
