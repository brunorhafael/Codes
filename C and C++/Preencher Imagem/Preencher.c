#include "Preencher.h"

Fila create(int m, int tb){
     Fila q = {malloc(m*tb), m, tb, -1, -1, 0};
     return q;
}

void copy(void *p, void *q, int nbytes){
     char *a = (char*) p, *b = (char*) q;
     int k;
     for(k=0;k<nbytes;k++) b[k]=a[k];
}

BOOL enqueue(Fila *q, void* b){
     if(isempty(q)){
         q->i = q->f=0;
         copy(b,q->data,q->tb);
     }else{
         int prox = (q->f + 1) % q->m;
         if(prox != q->i){
                 copy(b,q->data + q->tb*prox,q->tb);
                 q->f = prox;
         }else
               return FALSE;
     }
     q->n++;
     return TRUE;
}

BOOL dequeue(Fila *q, void* b){
     int k;
     if(q->i==q->f){
         if(q->i < 0) return FALSE;
         else k = q->f = -1;
     }else k=(q->i + 1) % q->m;
     
     copy(q->data + q->tb * q->i, b, q->tb);
     q->i = k;
     q->n--;
     return TRUE;
}

BOOL isempty(Fila *q){
     return q->n==0;
}

BOOL isfull(Fila *q){
     return (q->i+1)%q->m == q->f;
}

int len(Fila *q){
    return q->n;
}

void destroy(Fila *q){
     free(q->data);
     q->data = 0;
     q->m = q->tb = 0;
     q->i = q->f = -1;
}




void preencher(char mat[50][50],int i,int j){   // i e o j são os pontos de onde vai começar a fazer o preenchimento

     Fila f = create(2500,sizeof(Ponto));       
     Ponto p,q;  
     p.x=i;
     p.y=j;
     enqueue(&f,&p);    //enfileira o ponto p

     while(!isempty(&f)){  
        dequeue(&f,&q);
        
        if(mat[q.x][q.y] == '0'){            
             mat[q.x][q.y] = '1';
             
             if((q.x<0 || q.y<0) && (q.x>50 || q.y>50));
             else{
             q.x++;
             enqueue(&f,&q);
               
             q.x-=2;
             enqueue(&f,&q);
             
             q.x++; q.y++;
             enqueue(&f,&q);
             
             q.y-=2;
             enqueue(&f,&q);
             }
        } 
     }
}

int main(){

FILE *f = fopen("novo", "rt");
int i=0,j,k=0;
char vet[2500];
char mat[50][50];
int c;
do{
     c=fgetc(f);
     vet[i++]=c;
}while(c!= EOF);   // end of file

fclose(f);

for(i=0; i<50; i++)
   for(j=0; j<50; j++)
       mat[i][j]=vet[k++];

preencher(mat,15,15);
            
FILE *fp = fopen("out","wt");
       for(i=0; i<50; i++)
          for(j=0; j<50; j++)
             fprintf(fp,"%c",mat[i][j]);
       fclose(fp);
                
getch();
return 0;

}
