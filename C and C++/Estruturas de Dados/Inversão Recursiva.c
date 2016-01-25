#include<stdio.h>
#include<conio.h>


  void Inverter(int* M, int p,int q ){
      
      if(p<q){
              int x = M[p];
              M[p] = M[q];
              M[q] = x;
              Inverter(M,p+1,q-1);
              }
      }

 
int main(){
   
   int N[] = {1,2,3,4,5,6};
    
      int x =0;
      int y =6;
      
      Inverter(N,x,y-1);
    int i;
    for(i=0; i<y; i++)
       printf("%d",N[i]);


getch();
return 0;

}
