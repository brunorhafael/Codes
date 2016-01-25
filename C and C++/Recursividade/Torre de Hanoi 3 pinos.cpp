#include <stdio.h>
#include <conio.h>

  void hanoi(int n, char O, char T, char D){
      
      if(n>0){
              
              hanoi(n-1,O,D,T);
              printf("%c -> %c\n",O,D);
              hanoi(n-1,T,O,D);
              
              }
            
      }


int main(){
    
    int x = 2;
    char a = 'A';
    char b = 'B';
    char c = 'C';
    
    hanoi(x,a,b,c);
    
getch();
return 0;
}
