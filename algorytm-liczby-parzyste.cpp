#include <iostream> //Obs�uga strumieni (np. przesy�anie danych na ekran). 
#include <conio.h>  //Obs�uga klawiatury. 
#include <math.h>   //Biblioteka z funkcjami matematycznymi. 
using namespace std; 
/*--== Liczby parzyste ==-- 
W wielu algorytmach musimy wygenerowa� liczby parzyste 
z zadanego przedzia�u <A, B> liczb ca�kowitych. 
Poniewa� granice przedzia�u A i B mog� by� dowolnymi 
liczbami ca�kowitymi, musimy najpierw znale�� 
najmniejsz� liczb� parzyst� z przedzia�u <A, B>. 

Parzysto�� A sprawdzimy badaj�c reszt� z dzielenia A przez 2. 
Je�li reszta jest zerowa, to A jest liczb� parzyst�. 
W innym przypadku mamy do czynienia z liczb� nie parzyst�. 
*/ 
int main() { 
  cout << "--== Liczby parzyste z przedzialu <A, B> ==--\n"; //Wy�wietl na ekranie tekst znajduj�cy si� pomi�dzy cudzys�owami. 
  int A=0, B=0;                                              //Zadeklarowanie zmiennych liczbowych ca�kowitych. 
  cout << "\nA: ";                                           //Wy�wietl na ekranie tekst znajduj�cy si� pomi�dzy cudzys�owami. 
  cin >> A;                                                  //Pobierz dane z klawiatury i przypisz je do zmiennej liczbowej ca�kowitej "A". 
  cout << "B: "; cin >> B; 
  cout << "\nLiczby parzyste z podanego przedzialu <" 
       << A << ", " << B << "> to: "; 
  for(int I=A; I < B+1; I++) { 
    if(I % 2 == 0) { 
      /*Je�eli liczba jest parzysta (tzn. warunek jest spe�niony), 
        to wykonaj poni�sze instrukcje (tzn. wy�wietl liczby parzyste).*/ 
      if((I > A) && (I > A+1)) { cout << ", "; } 
      cout << I; 
    } 
  } 
  cout << ".\n"; 
} 