//Esercizio 2
//Riempire e visualizzare una sequenza con 20 orari (ore, minuti e secondi) pseudo-casuali;
//successivamente acquisire un orario e visualizzare il suo orario più prossimo tra quelli nella
//sequenza. 
//Per svolgere questo compito si definisca ed utilizzi 3 funzioni C con le seguenti finalità:

//Produrre la quantità di secondi trascorsi tra la mezzanotte (00:00:00) e un dato orario.
//Produrre un orario (valido) le cui ore, minuti e secondi sono interi pseudo-casuali.
//Produrre un primo dato orario se questo è più prossimo ad un dato orario di riferimento rispetto
//ad un secondo dato orario; produrre il secondo dato orario altrimenti.

#include <stdio.h> 
#include <stdlib.h>

    #define nOre 2

typedef struct {
    int ore;
    int minuti;
    int secondi;

}
orario;

void main() {

    orario v[nOre];
    orario conf;
    int vettoreDifferenza[nOre]; //metto la differenza tra le ote che ho e quella singola inserita

    int i;
    for (i = 0; i < nOre; ++i) {
        printf("inserisci un'ora\n");
        scanf("%d", & v[i].ore);
        printf("inserisci un minuto\n");
        scanf("%d", & v[i].minuti);
        printf("inserisci un secondo\n");
        scanf("%d", & v[i].secondi);
        while ((v[i].ore <= 24 && v[i].ore >= 0) && (v[i].minuti <= 60 && v[i].ore >= 0) && (v[i].secondi <= 60 && v[i].ore >= 0)) {
            printf("inserisci un'ora corretta \n");
            scanf("%d", & v[i].ore);
            printf("inserisci un minuto corretto\n");
            scanf("%d", & v[i].minuti);
            printf("inserisci un secondo corretto\n");
            scanf("%d", & v[i].secondi);

        }
        printf("l'orario inserito è : %d,%d,%d\n", v[i].ore, v[i].minuti, v[i].secondi);
    }

    printf("inserire un'orario da comparare con quelli già inseriti\n");
    printf("inserisci un'ora\n");
    scanf("%d", & conf.ore);
    printf("inserisci un minuto\n");
    scanf("%d", & conf.minuti);
    printf("inserisci un secondo\n");
    scanf("%d", & conf.secondi);
    while ((conf.ore <= 24 && conf.ore >= 0) && (conf.minuti <= 60 && conf.ore >= 0) && (conf.secondi <= 60 && conf.ore >= 0)) {
        printf("inserisci un'ora corretta \n");
        scanf("%d", & conf.ore);
        printf("inserisci un minuto corretto\n");
        scanf("%d", & conf.minuti);
        printf("inserisci un secondo corretto\n");
        scanf("%d", & conf.secondi);
    }

    return 0;
}

//ritorna la differenza tra due orari
orario differenza(orario a, orario b) {

    orario c;
    //differenza delle ore
    c.ore = a.ore - b.ore;
    if (c.ore > 0) {
        c.ore = a.ore - b.ore;
    } else {
        c.ore = b.ore - a.ore;
    }

    //differenza dei minuti
    c.minuti = a.minuti - b.minuti;
    if (c.minuti > 0) {
        c.minuti = a.minuti - b.minuti;
    } else {
        c.minuti = b.minuti - a.minuti;
    }

    //differenza dei secondi
    c.secondi = a.secondi - b.secondi;
    if (c.secondi > 0) {
        c.secondi = a.secondi - b.secondi;
    } else {
        c.secondi = b.secondi - a.secondi;
    }
    return c;

}

//ora devo confrontare il vettore di ore che ho con la data e questa differenza la metto in un alktro vettore e prendo il più piccolo

//riempio il vettoreDifferenza
for (i = 0; i < nOre; ++i) {
    //in i metto un'orario "fittizzio" , più piccolo è , più vicine le due ore sono
    vettoreDifferenza[i] = differenza(v[i], conf);

}

//ora guardo la più piccolo degli orari in vettoreDifferenza[i] , quello
//nella i-esima posizione è quello che più si avvicina all'ora da me carcata

orario minimo;
minimo.ore = 100; //così sono sicuro che il primo orario viene posto come minimo
minimo.minuti = 100; //così sono sicuro che il primo orario viene posto come minimo
minimo.secondi = 100; //così sono sicuro che il primo orario viene posto come minimo

for (i = 0; i < nOre; ++i) {

    if (minimo.ore < v[i].ore) {
        if (minimo.minuti < v[i].minuti) {
            if (minimo.secondi < v[i].secondi) {
                printf("la data più vicina a quella inserita è: %d:%d:%d\n", v[i].ore, v[i].minuti, v[i].secondi);
            }
        }

    } else {
        minimo.ore = v[i].ore;

        if (minimo.minuti < v[i].minuti) {

            if (minimo.secondi < v[i].secondi) {
                printf("la data più vicina a quella inserita è: %d:%d:%d\n", v[i].ore, v[i].minuti, v[i].secondi);
            }

        } else {
            minimo.minuti = v[i].minuti;
        }

        if (minimo.secondi < v[i].secondi) {
            printf("la data più vicina a quella inserita è: %d:%d:%d\n", v[i].ore, v[i].minuti, v[i].secondi);
        } else {

            minimo.secondi = v[i].secondi;
            printf("la data più vicina a quella inserita è: %d:%d:%d\n", v[i].ore, v[i].minuti, v[i].secondi);
        }

    }

}
