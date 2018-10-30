
# Ueberpruefung Doppelstunde

## Einzelarbeit:

Fuer jede Teilaufgabe ist eine Datei aufgabe_x.x.c zu erstellen, wobei x.x fuer Aufgabennummer.Teilaufgabennummer steht.

* Aufgabe 1.1: (Dateiname aufgabe_1.1.c)
  
  Erstellen Sie ein main Programm, welches "Hello World!" ausgibt!

* Aufgabe 1.2:

  Erstellen Sie ein Programm, welches "Hello World!" ausgibt und deren main Funktion wie folgt aussieht:

  ```C
    int main(int argc, char ** argv) {
      myHello();
      return 0;
    }
  ```

  Tip: Sie muessen eine Funktion erstellen!

* Aufgabe 2.1: 

  Erstellen Sie ein Programm, welches eine Zahl einliest und das Quadrat der Zahl ausgibt!

* Aufgabe 2.2:

  Erstellen Sie ein Programm, welches eine Zahl einliest und das Quadrat der Zahl ausgibt und deren main Funktion wie folgt aussieht:

  ```C
  int main(int argc, char ** argv) {
    double myNumber = myReadNumber();
    myNumber = mySquare(myNumber);
    myPrintNumber(myNumber);
  }
  ```

* Aufgabe 3.1:

  Erstellen Sie ein Programm, welches die Fibonacci-Folge bis n=10 ausgibt.

  Die Fibonacci-Folge ist wie folgt definiert:

  f<sub>1</sub> = f<sub>2</sub> = 1
  
  f<sub>n</sub> = f<sub>n-1</sub> + f<sub>n-2</sub> fuer n > 2

* Aufgabe 3.2:

  Erstellen Sie ein Programm, welches die Fibonacci-Folge bis zu einer eingelesenen Zahl n ausgibt.
