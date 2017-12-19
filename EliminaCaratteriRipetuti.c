//togli ricorrenze stringa esericizo bugatti

// https://github.com/alessandro-bugatti/esercizi/tree/master/programmazione_C/stringhe/caratteri_ripetuti

#include < stdio.h > 
#include < stdlib.h >

    void main() {

        int n;

        char daCambiare[100];
        printf("inserisci la frase da ridurre");
        scanf("%s", daCambiare);

        printf("leggi la lunghezza massima della stringa risultato\n");
        scanf("%d", & n);
        int j = 0;

        char risultato[100];

        for (int i = 0; daCambiare[i] != '\0'; ++i) {
            while (j < n) {

                if (daCambiare[i] != risultato[j]) {
                    risultato[j] = daCambiare[i];
                }
                j++;
            }
            j = 0;

            //for (int j = 0; risultato[j] != '\0'; ++j)
            //{

            //	if (daCambiare[i] != risultato[j])
            //	{
            //		risultato[j]=daCambiare[i];
            //		j=0;
            //	}

            //}
        }

        daCambiare[n] = '\0';
        printf("il risultato è : %s \n", risultato);
        return 0;

    }

//correzzione

#include < stdlib.h > 
#include < stdio.h >

    void caratteri_ripetuti(char s1[], char s2[], int n) {
        int i, j; // i per la prima stringa, j per il secondo
        int k = 0; // posto dove metto il carattere copiato

        for (int i = 0; s1[i] != '\0'; ++i) {
            char c = s1[i];
            int flag = 0; // non l'ho trovato
            for (int j = 0; j < k; ++j) {
                if (c == s2[j]) {
                    flag = 1;
                }
            }

            if (flag == 0) {
                s2[k] = c; //metto nel primo posto lbiero, k
                k++;
            }
            if (k == n) {
                s2[k] = '\0';
                return; // non ritorna nulla , ma esce solo dalla 
                //funzione
            }
        }
        s2[k] = '\0'; // k sarà sull'ultimo carattere libero
    }
    //la funzione "ritorna" un vettore pur non ritornando
    // nulla, perchè sia per vettori che stringhe, se una 
    //funzione la modifica, questo rimane modificato

void main() {

    char s1[] = "Questo e' un corso di informatica"
    char s2[100];
    caratteri_ripetuti(s1, s2, 99);
    printf("stringa originale : %s \nStringa ripulita: %s\n", s1, s2);

    return 0;
}