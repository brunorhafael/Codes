#include <stdio.h>
#include <conio.h>

  int  funcaoAnos ( int anos, int meses , int dias ){
   
       anos = anos * 365;
       meses = meses * 30;
       dias = dias + anos + meses;
       
       
       
       return dias;
       }
       
       
       
       int main () {
           
           int a , m , d, idade=0 ;
           
           printf ( "Digite a sua idade em anos , meses e dias : \n " );
           scanf ( "%d  %d  %d ", &a, &m, &d);
           
           idade = funcaoAnos ( a , m ,d );
           printf ( "O sua idade em dias corresponde a :  %d \n ",idade );
           getch();
           return 0;
           }            
