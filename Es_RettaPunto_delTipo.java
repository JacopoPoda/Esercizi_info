////////////////////////////////////FILE RETTA/////////////////////////////////////////////

package it.unibs.ing.fdp.grafico;
import java.util.Scanner;

//la classe Retta è la più esterna perchè è quella che creo
// quando creo il nuovo progetto

public class Retta {
 private double m, q;

 public static void main(String[] args) {

  //definisco i due oggetti appartenenti alla classe punto
  Punto P1, P2;
  double x, y;

  //creo uno scanner per l'inserimento di valori
  Scanner reader = new Scanner(System.in);

  //faccio inserire le coordinate x,y del primo punto
  System.out.print("P1.x: ");
  x = reader.nextDouble();
  System.out.print("P1.y: ");
  y = reader.nextDouble();
  P1 = new Punto(x, y);

  //faccio inserire le coordinate x,y del secondo punto

  System.out.print("P2.x: ");
  x = reader.nextDouble();
  System.out.print("P2.y: ");
  y = reader.nextDouble();
  P2 = new Punto(x, y);

  Retta r = new Retta(P1, P2);
  System.out.println("\nP1 = " + P1.toString() + "\tP2 = " + P2.toString());
  System.out.println("Distanza tra P1 e P2: " + P1.distanza(P2));
  System.out.println("r: " + r.toString());
 }

 //questi sono fuori dal main

 public Retta(Punto P1, Punto P2) {
  m = calcoloM(P1, P2);
  q = calcoloQ(P1, P2);
 }

 private double calcoloM(Punto P1, Punto P2) {
  return (P2.getY() - P1.getY()) / (P2.getX() - P1.getX());
 }
 private double calcoloQ(Punto P1, Punto P2) {
  return (P2.getX() * P1.getY() - P1.getX() * P2.getY()) / (P2.getX() - P1.getX());
 }

 public boolean appartiene(Punto P) {
  return P.getY() == P.getX() * m + q ? true : false;
 }

 public String toString() {
  return "y = " + m + " * x + " + q;
 }
}

////////////////////////////////////////////FILE PUNTO//////////////////////////////////////////////
package it.unibs.ing.fdp.grafico;
import java.lang.*;

public class Punto {
 private double x, y;

 //costruttore del punto
 public Punto(double x, double y) {
  this.x = x;
  this.y = y;
 }

 //metodi
 public double getX() { //il double indica il valore restituito
   return this.x;
  } //userò questi per utilizzare le coordinate del
  // punto esternamente, infatti questi due get sono metodi public

 public double getY() {
  return this.y;
 }

 public void setX(double x) {
   this.x = x;
  } //uso il valore che mi verrà passato come x come coordinata del punto

 public void setY(double y) {
   this.y = y;
  } // stessa cosa di prima ma con la y

 //creo un metodo che calcola la distanza tra 
 //il punto passato come parametro in ingressp
 //al metodo e quello che chiama il metodo
 public double distanza(Punto P) {
  return Math.sqrt(Math.pow(P.getX() - this.x, 2) + Math.pow(P.getY() - this.y, 2));
 }

 public String toString() {
  return "(" + this.x + "), (" + this.y + ")";
 }
}