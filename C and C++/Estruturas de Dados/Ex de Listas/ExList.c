#include <stdio.h>
#include <conio.h>


  
  Listseq Criar(int m, int r){
      
      Listseq x;
      x->m = m;
      x->n = 0;
      x->M = ((int*) malloc(sizeof(int)*m);
      x->r = r;                           
      
      return x;
      
      };

  BOOL Inserir(Listseq* L , int x){
      
      if(L->n == L->m) {
            return FALSE; 
      }
      else{
           int k = L->n+1;
           if(L->r == TRUE){
                   while(k>1 && L->M[k-1] > x){
                             L->M[k] = L->M[k-1];
                             k = k-1;
                   }
           }
            L->M[k] = x;
            L->n = L->n+1;
            return TRUE;       
           
      }
      }
  
  int Remover(Listseq* L ,int x){
       
      int k = Buscar(L,x);
      
      if(k>0){
              int j = k;
              while(j < L->n){
                      L->M[j] = L->M[j+1];
                      j = j+1;
                      }
              L->n = L->n - 1;
       
              }
      return k;         
      }
      
      
      
  int Buscar(Listseq* L ,int x){
      
      if(L->r = 0){
                int k = 1;
                while(k <= L->n){
                        if(L->M[k] = x) 
                                   return k;
                        k = k + 1;
                 }
                
                }
      else {
           int p = 1;
           int q = L->n;
           while(p<=q){
                       k = (p+q)/2;
                       if(x = L->M[k]) return k;
                       else {if(x<L->M[k]){q = k - 1;}
                            else p = k + 1;  
                            }  
                       }
           }          
       return 0;          
       }
   
     
     BOOL VerificarRep(Listseq* L , int x){
 
           for (int i =0; i < L->n; i++){
               
               if(x == L->M[i]){
                   return TRUE;
               }
               else return false;
               
           }
      }

  int RemoveTudo(Listseq* L ,int x){
       
      int k = Buscar(L,x);
      
      if(k>0){
              
              while(k!=0){
                      int j = k;
                      while(j < L->n){
                              L->M[j] = L->M[j+1];
                              j = j+1;
                      }
              
              L->n = L->n - 1;
              k = Buscar(L,x);
              }
       
      return k;
      
      }




int main(){
    
    
    
    
    
getch();
return 0;
}
