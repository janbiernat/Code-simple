#include <iostream>  //1 
#include <string>    //2 
#include <conio.h>   //3 
#include <windows.h> //4 
using namespace std; 
int main () { 
  cout << "--== Tekst pisany od prawej do lewej ==--\n"; //5 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  string Tekst = ""; //6 
  cout << "Podaj tekst: ";  
  getline(cin, Tekst); //7 
  cout << "\n" << Tekst << " = "; //8 
  for(int I = Tekst.length()-1; I > -1; I--) { //9 
    cout << Tekst[I]; //10 
    Sleep(200); //11 
  } 
  cout << "\n\nNacisnij klawisz ENTER..."; 
  getch(); //12 
/* 
  Legenda: 
    1 - Obs�uga strumieni (np. przesy�anie danych na ekran). 
    2 - Obs�uga tekstu (tzw. ci�g�w znak�w). 
    3 - Obs�uga klawiatury. 
    4 - Biblioteka posiada funkcje Windows API. 
    5 - Wy�wietlenie na ekranie tekstu znajduj�cego si� pomi�dzy 
        cudzys�owami. Znaki "\n" powoduj� przej�cie do nowej linii.  
    6 - Zadeklarowanie zmiennej tekstowej "Tekst" i wyczyszczenie jej. 
    7 - Pobiera ci�g znak�w ze spacjami w �rodku. 
    8 - Wy�wietlenie na ekranie podanego tekstu /przez u�ytkownika 
        i tekstu znajduj�cego si� pomi�dzy cudzys�owami. 
    9 - Poni�szy blok kodu b�dzie wykonywany tyle razy, z ilu liter 
        sk�ada si� podany tekst. Jest to mo�liwe dzi�ki p�tli FOR. 
   10 - Tekst wy�wietlany jest na ekranie od prawej do lewej. 
   11 - Zatrzymanie programu na 200 milisekund. Sleep - funkcja biblioteki Windows API. 
   12 - Czekaj, a� u�ytkownik naci�nie klawisz ENTER. 
*/ 
} 