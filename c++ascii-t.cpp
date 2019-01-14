#include <iostream> 
#include <conio.h> 
using namespace std; 
/*--== Tablica ASCII ==-- 
 Copyright (c)by Jan T. Biernat 
 Borland Turbo Pascal 7 - Kurs podstawowy 
 = 
 Tablica kod�w ASCII (ang. American Standard Code for Information 
 Interchange) stanowi zestaw kod�w u�ywanych do reprezentacji znak�w 
 (liter, cyfr, znak�w specjalnych np. @, $, # itp.). 
 Ka�dy znak w tabeli ma przyporz�dkowan� warto�� liczbow� dziesi�tn�, 
 np. litera du�a "A"  ma warto�� dziesi�tn� 65. 
 Tablica ASCII sk�ada si� 255 znak�w, kt�re podzielone s� na kilka grup: 
   > Od 0 do 31 - znaki steruj�ce np. klawiszem ENTER, TAB, drukark�; 
   > Od 32 do 126 - znaki podstawowe; 
   > Od 127 do 255 - znaki dodatkowe (zawieraj� znaki graficzne, 
                     oraz znaki polskie itp.). 
 Podstawowa tabela ASCII (tj. od 0 do 127) nie podlega wymianie, 
 natomiast rozszerzona tablica (tj. od 128 do 255) mo�e ulega� zmianie 
 np. w celu zakodowania polskich znak�w. 
*/ 
int main() { 
  cout << "--== Tabela kodow ASCII ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  //Tablica kod�w ASCII od znaku pustego (tzw. spacji). 
  int iLicznik=0; 
  for(int I = 0; I < 224; I++) { 
    iLicznik++; //iLicznik = iLicznik+1; 
    cout << "|" << char(32) << char(32+I) << char(32); 
    if((32+I) < 100) { cout << "0" << (32+I); } else { cout << (32+I); } 
    cout << char(32); //Wy�wietlenie na ekranie litery/znaku z tablicy kod�w ASCII o nr 32. 
    if(iLicznik > 7) { cout << "|\n"; iLicznik = 0; } 
  } 
  //Czekaj, a� u�ytkownik naci�nie klawisz ENTER. 
  cout << "\n\nNacisnij klawisz ENTER..."; getch(); 
} 