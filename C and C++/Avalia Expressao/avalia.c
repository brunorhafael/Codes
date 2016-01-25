#include "avalia.h"


//Pilha
Pilha Create(int m,int tb){
      Pilha s;
       s.data=malloc(sizeof(m*tb));
       s.tamanho=m;
       s.altura=0;
       s.tb=tb;
        return s;
}

void Destroy(Pilha* s){
     free(s->data);
     s->data=0;
     s->tamanho=0;
     s->altura=0;
}

void copy(void* p,void* q,int nbytes){
     char* a=(char*)p;
     char* b=(char*)q;
     int k;
        for(k=0;k<nbytes;k++)
            b[k]=a[k];
}
         
void Top(Pilha* s,void* p){
    void* q=s->data+(s->altura-1)*s->tb;
    copy(q,p,s->tb);
}


BOOL IsEmpty(Pilha* s){
     return s->altura==0;
}

BOOL IsFull(Pilha* s){
     return s->altura==s->tamanho;
}

BOOL Push(Pilha* s ,void* p){
     if(!IsFull(s)){//se está cheia
        void* q=s->data+s->altura*s->tb;
        copy(p,q,s->tb);
        s->altura++;
          return TRUE;
     }else{
          return FALSE;
     }
}
     

BOOL Pop(Pilha* s){
   if(!IsEmpty(s)){//se está vazia
         s->altura--;
         return TRUE;
   }else{
         return FALSE;        
   }
}

int height(Pilha* s){
    return s->altura;
}

//Fila

Fila Create_Fila(int n){
     Fila q;
        q.data=(int*)malloc(sizeof(int)*n);
        q.tamanho=n;
        q.ini=-1;
        q.fim=-1;
           return q;
}

BOOL IsEmpty_Fila(Fila* q){
      return q->fim < 0;
}

BOOL IsFull_Fila(Fila* q){
     return (q->fim+1)%q->tamanho == q->ini;
}


int begin(Fila* q){
    return q->data[q->ini];
}

BOOL Enfileirar(Fila* q,int x){
     if(q->fim < 0){
        q->ini=q->fim=0;
        q->data[0]=x;
        return TRUE;
     }else{
         int prox=(q->fim+1)%q->tamanho;
            if(prox!=q->ini){
               q->data[prox]=x;
               q->fim=prox;
                return TRUE;
            }else{
                  return FALSE;
            }
     }  
}

BOOL Desenfileirar(Fila* q){
     if(q->ini==q->fim){
         if(q->ini<0){
              return FALSE;
         }else{
             q->ini=q->fim=-1;
             return TRUE;
         }
     }else{
           q->ini=(q->ini+1)%q->tamanho;
           return TRUE;
     }
}

void Destroi(Fila* q){
     free(q->data);
      q->data=0;
      q->tamanho=0;
      q->ini=-1;
      q->fim=-1;
}

// Posfixar
 
int prioridade(char c){
      switch(c){
               case '(': return 1;
               case '+':case'-': return 2;
               case '*':case '/': return 3;
               }
}

void Posfixar(char* E,char* s){
  int n=strlen(E),i,k=0;
  char ch;
  Pilha p=Create(n,sizeof(char));
      for(i=0;i<n;i++)
         if(E[i] == '+' || E[i] == '-' || E[i] == '*' || E[i] == '/'){
             while(!IsEmpty(&p)){
                   Top(&p,&ch);
                   if((prioridade(E[i]) > prioridade(ch)))break;
                   s[k++]=ch;
                   Pop(&p);
             }
             Push(&p,&E[i]);
         }else if(E[i] == '(')
              Push(&p,&E[i]); 
          else if(E[i] >= 'A' && E[i] <= 'Z')
              s[k++]=E[i];
          else if(E[i] == ')')
                for(;;){
                    Top(&p,&ch);
                    Pop(&p);
                    if(ch != '(')
                        s[k++]=ch;
                    else
                        break;
                }
      while(!IsEmpty(&p)){
            Top(&p,&ch);
            s[k++]=ch;
            Pop(&p);
      }
      s[k]='\0';    
      
                                               
}

int buscar(Elem* mapa,int n,int proc){
    int i;
       for(i=0;i<n;i++){
            if(mapa[i].id == proc)
                  return mapa[i].chave;        
       }
         return 0;
}

Pilha Ler_Expressao(const char* E,Fila* q){
int i,valor,temp,k=0;
int x=strlen(E);
Elem mapa[x];
     for(i=0;i<x;i++){
         if(E[i]>='A' && E[i]<='z'){
             temp=buscar(mapa,k,E[i]-'A');
               if(temp == 0){
                  printf("DIGITE O VALOR DE %C\n",E[i]);
                  scanf("%d",&valor);
                  Enfileirar(q,valor);
                  mapa[k].id=E[i]-'A';
                  mapa[k].chave=valor;
                  k++;
               }else{
                   Enfileirar(q,temp);     
               }
         }
     }
     
         
}    

int verifica(char t,int num1,int num2){
    switch(t){
        case '+':
             return num1+num2;
        case '-':
             return num1-num2;
        case '*':
             return num1*num2;
        case '/':
             return num1/num2;          
        }
}
    
     
int avaliar_expressao(char* pf,char* s){
int n=strlen(pf),i;
  Fila temp=Create_Fila(n);
  Pilha c=Create(n,sizeof(int));
     Posfixar(pf,s);// RECEBE A ENTRADA E TRANSFORMA EM NOTAÇÃO POLONESA
     printf("Notacao Polonesa \n");
     puts(s);
     Ler_Expressao(s,&temp);
         for(i=0;i<n;i++){
             if(s[i] >= 'A' && s[i] <= 'Z'){
                   int z=begin(&temp);
                   Desenfileirar(&temp);
                    Push(&c,&z);
             }else if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
                 int x,y;
                    Top(&c,&x);
                    Pop(&c);
                    Top(&c,&y);
                    Pop(&c);
                        int res=verifica(s[i],y,x);
                        Push(&c,&res);                             
             }
         }
           
           
         int resultado;
         Top(&c,&resultado);
         Pop(&c);
             return resultado;
         
}

int main(){
     char entrada[15];
     char saida[15];
       printf("Digite a expressao\n");
       gets(entrada);
       printf("O valor da expressao eh: %d",avaliar_expressao(entrada,saida));
    getch();
    return 0;
}
