#include<iostream> //1 
#include <conio.h> //2 
using namespace std; //3 
int main() { 
  cout <<"--== Dec2Bin ==--\n"; //4 
  cout <<"Copyright (c)by Jan T. Biernat\n"; 
  cout <<"Systemy liczbowe: Dziesietny -> Dwojkowy.\n\n"; 
  //Deklaracja zmiennych. 
    long int Liczba = 0, Wynik = 0, Licznik = 0; //5 
    short int Tablica[99]; //6 
  //Pobranie liczby od u�ytkownika. 
    cout << "Podaj liczbe dziesietna: "; 
    cin >> Liczba; //7 
  //Przeliczenie liczby 10 na liczb� 2. 
    cout << "\n" << Liczba << " = "; //8 
    if(Liczba > 0) { //9 
        do{ 
          Wynik = 0;                                    //10 
          Wynik = Liczba/2;                             //11 
          Tablica[Licznik] = 0;                         //12 
          if(Liczba % 2 != 0) { Tablica[Licznik] = 1; } //13 
          Liczba = 0; Liczba = Wynik;                   //14 
          Licznik++;                                    //15 
        } while(Wynik != 0);                            //16 
        //Wy�wietl wynik pobieraj�c liczby z tablicy od ty�u. 
          for(int I = Licznik-1; I >-1; I--) { 
            cout << Tablica[I]; //17 
          } 
    } 
  //Czekaj, a� u�ytkownik naci�nie klawisz ENTER. 
    cout << "\n\nNacisnij klawisz ENTER..."; 
    getch(); //18 
/* 
  Legenda: 
    1) Obs�uga strumieni (np. przesy�anie danych na ekran). 
    2) Obs�uga m.in. klawiatury. 
    3) Podczas pracy nad du�ymi projektami, w kt�rych u�ywa 
       si� wielu bibliotek z licznymi deklaracjami, mo�emy 
       w ko�cu natkn�� si� na problem konfliktu nazw - gdy kilka obiekt�w, 
       typ�w czy funkcji ma t� sam� nazw�. Rozwi�zaniem mo�e by� 
       np. zamkni�cie nazw w "zakresach", w celu oddzielenia ich. 
       Z pomoc� przychodzi nam mechanizm przestrzeni nazw. 
       Przestrze� nazw jest zatem zbiorem obiekt�w, kt�ra ogranicza 
       dost�p do nich - opr�cz nazwy obiektu niezb�dne jest te� wspomnienie, 
       z kt�rej przestrzeni nazw chcemy go u�y�, obchodz�c tym samym problem konfliktu nazw. 
    4) Wy�wietlenie na ekranie tekstu znajduj�cego si� pomi�dzy cudzys�owami. 
       Zapis "\n" powoduje przej�cie do nast�pnej linii. 
    5) zadeklarowanie zmiennych liczbowy z r�wnoczesnym przypisaniem warto�ci pocz�tkowej zero. 
    6) Zadeklarowanie zmiennej tablicowej 99 elementowej tego samego typu, czyli liczbowego kr�tkiego. 
    7) Pobranie danych z klawiatury i przypisanie ich do zmiennej liczbowej "Liczba". 
    8) Wy�wietlenie na ekranie zawarto�ci zmiennej liczbowej "Liczba" oraz tekstu znajduj�cego si� pomi�dzy cudzys�owami. 
    9) Sprawdzenie, czy podana warto�� (przechowywana w zmiennej liczbowej "Liczba") jest wi�ksza od warto�ci 0. 
       Je�eli tak, to wykonuj poni�sze instrukcje. 
   10) Wyzerowanie zmiennej liczbowej 'Wynik". 
   11) Przypisanie do zmiennej liczbowej "Wynik" wyniku z dzielenia liczby 
       (przechowywanej w zmiennej liczbowej "Liczba") przez liczb� 2. 
   12) Przypisanie warto�ci zerowej do tablicy na pozycji o podanym nr indeksu 
       (nr indeksu jest przechowywany w zmiennej liczbowej "Licznik"). 
   13) Sprawdzenie, czy po przecinku warto�� jest ro�na od zera. Je�eli tak to przypisz do tablicy na pozycji 
       o nr indeksu warto�� 1 (nr indeksu jest przechowywany przez zmienn� liczbow� "Licznik"). 
   14) Wyzerowanie zmiennej liczbowej "Liczba" oraz przypisanie do zmiennej "Liczba" warto�ci przechowywanej 
       w zmiennej liczbowej "Wynik". 
   15) Inkrementacja, czyli zwi�kszenie zawarto�ci zmiennej "Licznik" o warto�� 1. 
       Zapis "Licznik++" = "Licznik = Licznik+1". 
   16) Wyjd� z p�tli DO ... WHILE, gdy zawarto�� zmiennej liczbowej "Wynik" b�dzie r�wna warto�ci zero. 
   17) Wy�wietlenie na ekranie liczby pobranej z tablicy. 
       Pobranie liczb z tablicy odbywa si� w kolejno�ci od prawej do lewej. 
       Pobieranie liczby z tablicy odbywa si� za pomoc� nr indeksu. 
       Nr indeksu jest przechowywany w zmiennej liczbowej "I". 
   18) Oczekiwanie na naci�ni�cie dowolnego klawisza na klawiaturze. 
*/ 
} 