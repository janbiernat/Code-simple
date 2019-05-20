#include <iostream>  //1 
#include <string>    //2 
#include <conio.h>   //3 
using namespace std; 
int main () { 
  cout << "--== Tablica Vigenere`a ==--\n"; //4 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  string ASCII = ""; //5 
  short int Licznik = 0; //6 
  //Wype�nienie zmiennej tekstowej "ASCII" znakami od A do Z. 
  for(int I = 0; I < 26; I++) { 
    ASCII = ASCII+char(65+I); //7 
  } 
  //Wygenerowanie Tablicy Vigenere`a. 
  for(int A = 0; A < 26; A++) { 
    cout << "\n"; //8 
    Licznik = A;  //9 
    for(int B = 0; B < 26; B++) { 
      if(Licznik > 25) { Licznik = 0; } //10 
        cout << " " << ASCII[Licznik]; //11 
        Licznik++; //12 
      } 
    } 
  cout << "\n\nNacisnij klawisz ENTER..."; 
  getch(); //13 
/* 
  Legenda: 
    1 - Obs�uga strumieni (np. przesy�anie danych na ekran). 
    2 - Obs�uga tekstu (tzw. ci�g�w znak�w). 
    3 - Obs�uga klawiatury. 
    4 - Wy�wietlenie na ekranie tekstu znajduj�cego si� pomi�dzy 
        cudzys�owami. Znaki "\n" powoduj� przej�cie do nowej linii.  
    5 - Zadeklarowanie zmiennej tekstowej "ASCII" i wyczyszczenie jej. 
    6 - Zadeklarowanie zmiennej liczbowej ca�kowitej kr�tkiej "Licznik". 
    7 - "ASCII = ASCII+char(65+I)" - Dodanie do zmiennej tekstowej ASCII 
        kolejnego znaku. Funkcja CHAR() wy�wietla znak o podanym numerze 
        w nawiasach, np. CHAR(65) - wy�wietli du�� liter� A. 
    8 - "\n" - Przej�cie do kolejnej linii. 
    9 - "Licznik = A" - Przypisanie do zmiennej "Licznik" zawarto�ci 
        zmiennej "A". 
   10 - Je�eli zawarto�� zmiennej liczbowej "Licznik" jest wi�ksza od liczby 
        25, to przypisz do zmiennej "Licznik" warto�� zero. 
   11 - Wy�wietl na ekranie spacje znajduj�c� si� pomi�dzy cudzys�owami 
        oraz znaki przechowywane w zmiennej tekstowej ASCII. 
        Znaki odczytywane s� ze zmiennej tekstowej ASCII za pomoc� 
        indeks�w numerycznych. 
   12 - Zwi�kszenie zawarto�ci zmiennej liczbowej ca�kowitej "Licznik" 
        o warto�� 0. Jest to inkrementacja. 
   13 - Czekaj, a� u�ytkownik naci�nie klawisz ENTER. 
*/ 
} 