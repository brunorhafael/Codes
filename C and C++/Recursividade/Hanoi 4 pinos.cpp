#include <stdio.h>
#include <conio.h>

  void hanoi(int n, char O, char T,char T2, char D){
      
      if(n>0){ 
              hanoi(n-1,O,D,T,T2);
              printf("%c -> %c\n",O,D);
              hanoi(n-1,T,T2,O,D);
               }
            
      }
int main(){
    
    int x = 3;
    char a = 'A';
    char b = 'B';
    char c = 'C';
    char d = 'D';
    
    hanoi(x,a,b,c,d);
    
getch();
return 0;
}
