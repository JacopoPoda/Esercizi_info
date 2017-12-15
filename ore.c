//Esercizio 2
//Riempire e visualizzare una sequenza con 20 orari (ore, minuti e secondi) pseudo-casuali;
//successivamente acquisire un orario e visualizzare il suo orario più prossimo tra quelli nella
//sequenza. Per svolgere questo compito si definisca ed utilizzi 3 funzioni C con le seguenti finalità:

//Produrre la quantità di secondi trascorsi tra la mezzanotte (00:00:00) e un dato orario.
//Produrre un orario (valido) le cui ore, minuti e secondi sono interi pseudo-casuali.
//Produrre un primo dato orario se questo è più prossimo ad un dato orario di riferimento rispetto
//ad un secondo dato orario; produrre il secondo dato orario altrimenti.

#include <stdio.h>
#include <stdlib.h>

        typedef struct {
                int ore;
                int minuti;
                int secondi;

        }
orario;

void main() {

        orario v[2];

        for (int i = 0; i < 2; ++i) {
                printf("inserisci un'ora\n");
                scanf("%d", & v[i].ore);
                 printf("inserisci un minuto\n");
                        scanf("%d", & v[i].minuti);
                        printf("inserisci un secondo\n");
                        scanf("%d", & v[i].secondi);
                while (v[i].ore <= 24 && v[i].ore >= 0) {
                         printf("inserisci un'ora\n");
                scanf("%d", & v[i].ore);
                        printf("inserisci un minuto\n");
                        scanf("%d", & v[i].minuti);
                        printf("inserisci un secondo\n");
                        scanf("%d", & v[i].secondi);
                        

                }
                printf("l'orario inserito è : %d,%d,%d\n", v[i].ore, v[i].minuti, v[i].secondi);

                printf("l'orario inserito non va bene");
        }

        return 0;
}
