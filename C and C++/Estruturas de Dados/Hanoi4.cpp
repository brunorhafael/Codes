#include <stdio.h>
#include <conio.h>


   int hanoi4(int n, char A, char B, char C, char D){
      if(n=3){
            printf("%c -> %c\n",A,C);
            printf("%c -> %c\n",A,D);
            printf("%c -> %c\n",A,B);
            printf("%c -> %c\n",D,B);
            printf("%c -> %c\n",C,B);
            
              } 
       else{       
       hanoi4(n-2,A,C,B,D);
       printf("%c -> %c\n",A,C);
       printf("%c -> %c\n",A,D);
       printf("%c -> %c\n",C,D);
       hanoi4(n-2,B,A,C,D); 
       }
       }
int main(){
    
    int n=20;
    char a = 'A';
    char b = 'B';
    char c = 'C';
    char d = 'D';
    
    hanoi4(n,a,b,c,d);
    
getch();
return 0;
}
