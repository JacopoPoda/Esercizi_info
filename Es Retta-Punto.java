

//CREO LA CLASSE DELL'OGGETTO -> IL COSTRUTTORE CON I DATI CHE L'OGGETTO USA -> I METODI CHE USERò CON L'OGGETTO

//creo la classe punto
public class Punto {

 private double x, y;

 //QUANDO CREO UN METODO:
 // 1) PUBLIC o PRIVATE
 // 2) TIPO DI FILE CHE RITORNA
 // 3) NOME DEL METODO
 // 4) EVENTUALI PARAMENTRI CHE GLI SERVONO IN INNPUT

 //creo costruttore, IL COSTRUTTORE DEVE AVERE LO STESSO NOME DELLA CLASSE
 //DI OGGETTI CHE CREA
 public Punto(double x, double y) {
  xPunto = x; //avrei potuto fare anche this.x=x,
  yPunto = y; //this.y=y;
 }

 //ora che ho il mio oggetto, creo i metodi che possono servirmi:

 //un metodo che mi fornisce in uscita le sue coordinate x,y
 public double getX() {
  return xPunto;
 }

 public double gety() {
  return yPunto;
 }

 //PER CHIAMARE UN METODO : nomeOggetto.nomeMetodo()

 public double distanza(Punto P, Punto Q) {
  //ritorno direttamente il valore dato dal calcolo
  return Math.sqrt(Math.pow((P.getX - Q.getX), 2) - Math.pow((P.gety - Q.gety), 2));
 }
}

//////////////////////////////////////////////////////////////////////////////
//creo la classe Retta
public class Retta {

 public static void main(String[] args) {



  // come faccio ad avere l'eq della retta? mi servono due punti
  //allora li inizializzo

  //per l'inserimento delle coordinate potrei sia fare da scanner
  //che imporlo io, faccio il secondo caso

  x = 3.5;
  y = 5.7;

  Punto P1 = new Punto(x, y); //il passaggio con le variabili è utile nel
  //caso faccia inserire all'utente da tastiera, iponendo
  //io i valori è più comodo fare come fatto per P2
  Punto P2 = new Punto(4.3, 6.8);

 }



 //IN GENERALE, NEI COSTRUTTORI E METODO, I NOMI DEI PARAMETRI DI PASSAGGIO SONO SOLO
 //PER FARE RIFERIMENTO ALL'INTERNO DEI METODI STESSI, NON HANNO A CHE FARE CON I NOMI
 //DI VARIABILI DI DEL PROGRAMMA 

 //costruttore della retta, richiede i due punti per calcolare le componenti della retta
 public Retta(Punto P, Punto Q) {
  m = calcoloM(P, Q);
  q = calcoloQ(P, Q);
 }

 //metodo privato della retta, privato perchè serve solo per calcolre qualcosa che 
 //passerò all'interno della classe retta

 private double calcoloM(Punto P, Punto Q) {
  return (Q.getY() - P.getY()) / (Q.getX() - P.getX());
 }
 private double calcoloQ(Punto P, Punto Q) {
  return (Q.getX() * P.getY() - P.getX() * Q.getY()) / (Q.getX() - P.getX());
 }

}
