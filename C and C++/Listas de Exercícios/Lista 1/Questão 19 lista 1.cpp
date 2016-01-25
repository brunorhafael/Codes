#include <stdio.h>
#include <conio.h>

int main() 
{
    float media_i, porc;
    int op, id, qp, A, B, C, D, E, soma_i;
    qp = 1;
    A = 0;
    B = 0;
    C = 0;
    D = 0;
    E = 0;
    
    while(id > 0) 
    {
             printf("Digite a sua idade: ");
             scanf("%d", &id);
             printf("Digite sua opniao:\n1 - Otimo\n2 - Bom\n3 - Regular\n4 - Ruim\n5 - Pessimo");
             scanf("%d", &op);

             if(op == 1) 
             {
                   A++;
             }
             if(op == 2) 
             {
                   B++;
             }if(op == 3) 
             {
                   C++;
             }if(op == 4) 
             {
                   D++;
             }if(op == 5) 
             {
                   E++;
             }
             soma_i = soma_i + id;
             qp++;
    }
             media_i = soma_i/qp;
             A = A/qp * 100;
             B = B/qp * 100;
             C = C/qp * 100;
             D = D/qp * 100;
             E = E/qp * 100;
             
             printf("%d pessoas responderam a enquete.",qp);
             printf("A media de idade das pessoas que responderam e: %.2f", media_i);
             printf("A porcentagem de cada opniao e: Otimo - %.2f\nBom - %.2f\nRegular - %.2f\nRuim - %.2f\nPessimo - %.2f",A, B, C, D, E);
             
             getch();
             return 0;
}             
                      
