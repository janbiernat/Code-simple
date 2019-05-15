#include <iostream> //Obs�uga strumieni (np. przesy�anie danych na ekran). 
#include <conio.h>  //Obs�uga klawiatury. 
using namespace std; 
/*Iteracja   - (�ac. iteratio � powtarzanie) � czynno�� powtarzania 
               (najcz�ciej wielokrotnego) tej samej instrukcji (albo wielu instrukcji) 
               w p�tli. Mianem iteracji okre�la si� tak�e operacje wykonywane wewn�trz 
               takiej p�tli. 
  UWAGA: Algorytmy iteracyjne wykonuj� si� znacznie 
         szybciej ni� algorytmy rekurencyjne.*/ 
int main() { 
  cout << "--== Algorytm - Suma ==--\n"; 
  //Deklaracja zmiennych liczbowych. 
    int iPyt = 0, iSuma = 0; 
  //Pobranie danych z klawiatury. 
    cout << "Podaj liczbe: "; cin >> iPyt; 
  //Obliczenie sumy podanych liczby metod� iteracyjn�. 
    cout << "\n"; //Przej�cie do nast�pnego wiersza. 
    for(int I = 1; I < iPyt+1; I++) { 
      if(I > 1) { cout << " + " << I; } 
      else { cout << I; } 
      iSuma = iSuma+I; //Obliczenie sumy podanych liczb. 
    } 
    cout << " = " << iSuma << "."; 
  //Naci�nij dowolny klawisz. 
   cout << "\n\nNacisnij dowolny klawisz..."; getch(); 
} 