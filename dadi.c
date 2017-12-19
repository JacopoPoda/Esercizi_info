#include < stdio.h > 
#include < stdlib.h >

    int dado() {
        int n;
        n = rand() % 6 + 1; // %6 fa si che ho da 0 a 5 cose, sposto 
        // avanti con "+1" così ho dadi da 1 a 6 faccie
        return n;
        //così ho lanciato il dado
    }

int due_dadi() {

    return dado() + dado();
}

void main() {

    int istogramma[20], i;
    for (i = 0; i < 10000; ++i) //lancio il dado 10000 volte
    {
        istogramma[dado()]++; //ogni numero che esce lo uso come
        //indice nell vettore istogramma e incremento
        // quel valore così che istogramma[] diventi
        //un vettore di contatori
    }
    for (i = 1; i <= 6; ++i) {
        printf("%d:%d volte\n", i, istogramma[i]);
    }

    return 0;
}