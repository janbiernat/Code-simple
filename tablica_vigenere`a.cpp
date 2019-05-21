#include <iostream> //1 
#include <string>   //2 
#include <conio.h>  //3 
using namespace std; 
int main () { 
  cout << "--== Tablica Vigenere`a ==--\n"; //4 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  short int Licznik = 0; //5 
  //Wygenerowanie Tablicy Vigenere`a. 
  for(int A = 0; A < 26; A++) { 
    cout << "\n"; //6 
    Licznik = A;  //7 
    for(int B = 0; B < 26; B++) { 
      if(Licznik > 25) { Licznik = 0; } //8 
      cout << " " << char(Licznik+65); //9 
      Licznik++; //10 
    } 
  } 
  cout << "\n\nNacisnij klawisz ENTER..."; 
  getch(); //11 
/* 
  Legenda: 
    1 - Obs�uga strumieni (np. przesy�anie danych na ekran). 
    2 - Obs�uga tekstu (tzw. ci�g�w znak�w). 
    3 - Obs�uga klawiatury. 
    4 - Wy�wietl na ekranie tekst znajduj�cy si� pomi�dzy 
        cudzys�owami. Znaki "\n" powoduj� przej�cie do nowej linii. 
    5 - Zadeklarowanie zmiennej liczbowej ca�kowitej kr�tkiej "Licznik" 
        z przypisan� warto�ci� pocz�tkow� zero. 
    6 - "\n" - Przej�cie do kolejnej linii. 
    7 - "Licznik = A" - Przypisanie do zmiennej "Licznik" zawarto�ci 
        zmiennej "A". 
    8 - Je�eli zawarto�� zmiennej liczbowej "Licznik" jest wi�ksza od liczby 
        25, to przypisz do zmiennej "Licznik" warto�� zero. 
    9 - Wy�wietl na ekranie spacj� (tzw. znak pusty) znajduj�cy si� pomi�dzy cudzys�owami 
        oraz znaki ASCII. Znaki ASCII s� wy�wietlane dzi�ki funkcji CHAR, kt�ra zwraca znak 
        o podanym numerze. 
   10 - Zwi�kszenie zawarto�ci zmiennej liczbowej ca�kowitej "Licznik" 
        o warto�� 1. Jest to tzw. inkrementacja. 
   11 - Czekaj, a� u�ytkownik naci�nie klawisz ENTER. 
*/ 
} 