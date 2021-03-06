//Esercizio 3
//Riempire una sequenza con 5 numeri complessi acquisiti da tastiera, successivamente visualizzare i
//numeri complessi ottenuti coniugando i numeri acquisiti ed infine visualizzare la somma dei numeri
//complessi coniugati. Per svolgere questo compito si definisca ed utilizzi 4 funzioni C con le seguenti finalità:

//Coniugare il numero complesso puntato da un dato puntatore a numeri complessi.
//Visualizzare un dato numero complesso.
//Visualizzare una data sequenza di n numeri complessi.
//Produrre un numero complesso ottenuto sommando due dati numeri complessi.

#include < stdio.h > #include < stdlib.h >

    typedef struct {

        double re;
        double im;

    }COMPL;


COMPL coniuga(COMPL a) {
    a.im = -a.im;
    return a;
}

COMPL somma(COMPL a, COMPL b) {

    COMPL c;
    c.re = a.re + b.re;
    c.im = a.im + b.im;

    printf("la somma e': %lf+i%lf\n", c.re, c.im);

}

void main() {

    int ind;
    int add1;
    int add2;

    COMPL c[5];

    for (int i = 0; i < 5; ++i) {
        printf("inserisci la parte reale\n");
        scanf("%lf", & c[i].re);
        printf("inserisci la parte immaginaria\n");
        scanf("%lf", & c[i].im);
        printf("il numero complesso inserito è: %lf+i%lf\n", c[i].re, c[i].im);
    }

    for (int i = 0; i < 5; ++i) {
        coniuga(c[i]);
        printf("il numero complesso coniugato della %d posizione e': %lf+i%lf\n", i, c[i].re, c[i].im);

    }

    printf("inserire un numero da 1 a 5 per stampare dal primo al quinto numero complessp\n");
    scanf("%d", & ind);
    printf("il numero complesso al posto %d è : %lf+i%lf \n", (ind), c[ind - 1].re, c[ind - 1].im);

    printf("inserire due numeri da 1 a 5 per sommare due numeri complessi\n");
    scanf("%d", & add1);
    scanf("%d", & add2);
    somma(c[add1], c[add2]);

    return 0;
}