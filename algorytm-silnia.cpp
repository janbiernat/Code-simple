#include <iostream> //Obs�uga strumieni (np. przesy�anie danych na ekran). 
#include <conio.h>  //Obs�uga klawiatury. 
#include <math.h>   //Biblioteka z funkcjami matematycznymi. 
#include <cstdlib>  //Posiada instrukcje do zainicjowania generatora liczb pseudolosowych. 
#include <ctime>    //Biblioteka "ctime " zawiera funkcje zwi�zane z obs�ug� czasu i daty. 
using namespace std; 
/*Iteracja   - (�ac. iteratio � powtarzanie) � czynno�� powtarzania 
               (najcz�ciej wielokrotnego) tej samej instrukcji (albo wielu instrukcji) 
               w p�tli. Mianem iteracji okre�la si� tak�e operacje wykonywane wewn�trz 
               takiej p�tli. 
  Rekurencja - zwana tak�e rekursj� (ang. recursion, 
               z �ac. recurrere, przybiec z powrotem) - odwo�ywanie si� 
               np. funkcji lub definicji do samej siebie. 

               W logice wnioskowanie rekurencyjne opiera si� na za�o�eniu 
               istnienia pewnego stanu pocz�tkowego oraz zdania (lub zda�) 
               stanowi�cego podstaw� wnioskowania (przy czym, aby ca�y dow�d 
               by� poprawny, zar�wno regu�a, jak i stan pocz�tkowy musz� by� prawdziwe). 
  == 
  UWAGA: Algorytmy iteracyjne wykonuj� si� znacznie 
         szybciej ni� algorytmy rekurencyjne.*/ 
//Funkcja potrzebna do obliczenia silni metod� rekurencyjn�. 
long long Silnia(int iLiczba) { 
  if(iLiczba < 1) { return 1; } 
  else { return iLiczba*Silnia(iLiczba-1); } 
} 
int main() { 
  cout << "--== Algorytm - Silnia (n!) - Iteracja i Rekurencja ==--\n\n"; 
  //Deklaracja zmiennych liczbowych. 
    int iPyt = 0; 
    long long iSilnia = 1; 
  //Pobranie danych z klawiatury. 
    cout << "Podaj liczbe: "; cin >> iPyt; 
  //Obliczenia silni metod� iteracyjn�. 
    cout << "\nIteracyjnie  : "; 
    if((iPyt > -1) && (iPyt < 21)) { 
      for(int I = 1; I < iPyt+1; I++) { iSilnia = iSilnia*I; } 
      cout << iPyt << "! = " << iSilnia << "."; 
    } else { cout << "BLAD -?Wprowadzono ujemna lub zbyt duza wartosc!"; } 

  //Obliczenia silni metod� rekurencyjn�. 
    cout << "\nRekurencyjnie: "; 
    if((iPyt > -1) && (iPyt < 21)) {  
      cout << iPyt << "! = " << Silnia(iPyt) << "."; 
    } else { cout << "BLAD -?Wprowadzono ujemna lub zbyt duza wartosc!"; } 

  //Naci�nij dowolny klawisz. 
   cout << "\n\nNacisnij dowolny klawisz..."; getch(); 
} 