#include <stdio.h>
#include <conio.h>

main () {
    int ano;
    float anac, feli;
    ano = 1;
    anac = 1.50;
    feli = 1.10;
    
    while(anac > feli) {
          anac = anac + 0.02;
          feli = feli + 0.03;
          ano++;
          }
          printf("Felisberto sera mais alto que Anacleto em %d anos.",ano);
          printf("\nFelisberto agora tem %.2f de altura e Anacleto tem %.2f de altura.",feli,anac);
          getch ();
          }
