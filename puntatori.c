#include < stdio.h > 
#include < stdlib.h >

    //non devo dichiarare la funzione come "int *piu" perchè non ritorna nulla
    //, lo farei se ritornasse un puntatore

    int piu(int * z) { //la funzione si aspetta un puntatore

        * z = * z + 3;

        //return z;       //lavorando per indrizzi, posso anche non ritornare nulla
                          //tanto so il valore dell'oggetto puntato da *z è modificato

    }

void main() {

    int a = 2, b;
    int * c, * d;

    c = & a;   //metto in c l'indirizzo di a -> c PUNTA l'OGGETTO IN a
    d = & b;

    piu(c);    // dato che la funzione si aspetta un puntatore, passo c,
               // che è il puntatore di a

    printf("a vale %d", * c); //stampa il valore cui punta c , se non mettessi " * "
                              //stamperebbe l'indrizzo di a

    return 0;
}