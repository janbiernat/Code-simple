#include <iostream> 
#include <string> 
#include <conio.h> 
using namespace std; 
/* 
 --== Szyfr Cezara ==-- 
 Copyright (c)by Jan T. Biernat 
 = 
 Szyfr Cezara - jedna z najprostszych technik szyfrowania. 
 Jest to rodzaj szyfru podstawieniowego, w kt�rym ka�da 
 litera tekstu jawnego zast�powana jest inn� (oddalon� 
 od niej o sta�� liczb� pozycji w alfabecie). 
 Przy czym kierunek zamiany musi by� zachowany. 
*/ 
int main () { 
  cout << "--== Szyfr Cezara ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  //Szyfr Cezara. 
  string Tekst = "", Rezultat = ""; 
  int Przesun = 0; 
  cout << "Podaj tekst: "; cin >> Tekst; 
  cout << "Wartosc przesuniecia: "; cin >> Przesun; 
  for(int I = 0; I < Tekst.length(); I++) { 
    Rezultat = Rezultat+char(int(Tekst[I])+Przesun); 
  } 
  cout << "Wynik: " << Rezultat; 
  //Czekaj, a� u�ytkownik naci�nie klawisz ENTER. 
  cout << "\n\nNacisnij klawisz ENTER..."; getch(); 
} 