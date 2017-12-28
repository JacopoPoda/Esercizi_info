package com.company;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        int n1;
        int n2;

        Scanner leggi = new Scanner(System.in); //inizializzo la funzione leggi per leggere come scanner

        System.out.println("metti un numeroo"+" prova stringa"); //concateno le due stringhe
        n1 = leggi.nextInt();
        if (n1 == 4) {

            System.out.println("mettine un'altro");
            n2 = leggi.nextInt();

            System.out.println(n2);
            }

    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
//lettura stringa

package com.company;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in); //inizializzo la funzione leggi per leggere come scanner
        String s = input.nextLine();
        System.out.println(s1);
        
        

    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////
//lettura stringa

package com.company;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("inserisci la prima stringa");
        String s = input.next();
        System.out.println("Ho letto: " + s);

        //input.next() legge fino al primo spazio
        //input.nextLine() legge anche dopo gli spazo
            //finchè mando un invio
        
        //System.out.print("inserisci la seconda stringa");
        //String s1 = input.nextLine();
        //System.out.println("Ho letto: " + s1);


    }
}