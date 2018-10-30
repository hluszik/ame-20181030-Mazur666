
#Ueberpruefung Doppelstunde

##Einzelarbeit:

Fuer jede Teilaufgabe ist eine Datei aufgabe_x.x.c zu erstellen, wobei x.x fuer Aufgabennummer.teillnummer steht.

* Aufgabe 1.1: (Dateiname aufgabe_1.1.c)
  
  Erstellen Sie ein main Programm, welches "Hello World!" ausgibt!

* Aufgabe 1.2:

  Erstellen Sie ein Programm, welches "Hello World!" ausgibt und deren main Funktion wie folgt aussieht:

  int main(int argc, char ** argv) {
    myHello();
    return 0;
  }

  Tip: Sie muessen eine Funktion erstellen!

* Aufgabe 2.1: 

  Erstellen Sie ein Programm, welches eine Zahl einliest und das Quadrat der Zahl ausgibt!

* Aufgabe 2.2:

  Erstellen Sie ein Programm, welches eine Zahl einliest und das Quadrat der Zahl ausgibt und deren main Funktion wie folgt aussieht:

  int main(int argc, char ** argv) {
    double myNumber = myReadNumber();
    myNumber = mySquare(myNumber);
    myPrintNumber(myNumber);
  }

* Aufgabe 3.1:

  Erstellen Sie ein Programm, welches die Fibonacci-Folge bist n=10 ausgibt.

  Die Fibonacci-Folge ist wie folgt definiert:

  f_1 = f_2 = 1
  
  f_n = f_(n-1) + f_(n-2) fuer n > 2

* Aufgabe 3.2:

  Erstellen Sie ein Programm, welches die Fibonacci-Folge bis zu einer eingelesenen Zahl n ausgibt.
