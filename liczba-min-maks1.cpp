#include <iostream> /*Biblioteka "iostream" (ang. input/output stream) 
                      oznacza strumie� wej�cia/wyj�cia. 
                      Za pomoc� tej biblioteki mo�na m.in. wprowadza� 
                      informacje ze standardowych urz�dze� 
                      wej�cia (klawiatura) lub wyprowadza� 
                      informacje ze standardowych urz�dze� 
                      wyj�cia (ekran).*/ 
#include <conio.h>  /*Obs�uga klawiatury za pomoc�.*/ 
#include <cstdlib>  /*Posiada m.in. instrukcje do zainicjowania generatora liczb pseudolosowych.*/ 
#include <ctime>    /*Biblioteka "ctime " zawiera funkcje zwi�zane z obs�ug� czasu i daty.*/ 
#include <string.h> /*Pod��czenie biblioteki umo�liwiaj�cej obs�ug� �a�cuch�w znak�w.*/ 
/* 
  --== Wyszukaj najmniejsz� i najwi�ksz� liczb� z podanych liczb ==-- 
  Copyright(c)by Jan T. Biernat 
  C++ Console Application - Kurs podstawowy 
*/ 
using namespace std; 
//Blok startowy/g��wny. 
int main() { 
  cout << "--== Wyszukaj MIN i MAX liczbe z podanych liczb - w1 ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n\n"; 
  cout << "UWAGA: Wpisanie liczby mniejszej od zera, spowoduje wyjscie z programu.\n\n"; 
  //Deklaracja zmiennych. 
    int Licznik=0, Liczba=0, LiczbaMin=0, LiczbaMax=0; 
  //Pobranie danych oraz wyszukanie najmniejszej i najwi�kszej liczby z podanych liczb. 
    do { //1 
      Licznik++; //2 
      cout << "Liczba " << Licznik << ": "; //3 
      Liczba = 0; //4 
      cin >> Liczba; //5 
      if(Licznik == 1) { //6 
        LiczbaMin = Liczba; //7 
        LiczbaMax = Liczba; //8 
      } 
      if(Liczba > 0) { //9 
        if(LiczbaMin > Liczba) { LiczbaMin = Liczba; } //10 
        if(LiczbaMax < Liczba) { LiczbaMax = Liczba; } //11 
      } 
    } while(Liczba > 0); //12 
    cout << "\n\nRaport:" 
         << "\nIlosc podanych liczb: " << (Licznik-1) 
         << "\nNajmniejsza liczba  : " << LiczbaMin 
         << "\nNajwieksza liczba   : " << LiczbaMax; 
  //Naci�nij dowolny klawisz. 
    cout << "\n\nNacisnij dowolny klawisz..."; getch(); 
/* 
   1) Rozpocz�cie p�tli DO ... WHILE. 
   2) Licznik++ = Licznik = Licznik+1 - Zwi�kszenie zawarto�ci 
      zmiennej liczbowej ca�kowitej "Licznik" o warto�� 1. 
   3) Wy�wietlenie na ekranie tekstu znajduj�cego si� pomi�dzy 
      apostrofami oraz zawarto�ci zmiennej liczbowej ca�kowitej "Licznik". 
   4) Wyzerowanie zmiennej liczbowej ca�kowitej "Liczba". 
   5) Pobranie danych (tj. cyfr/liczb) z klawiatury i przypisanie ich do 
      zmiennej liczbowej ca�kowitej "Liczba". 
   6) Je�eli jest podana pierwsza liczba (tzn. zawarto�� zmiennej 
      liczbowej ca�kowitej "Licznik" jest r�wna warto�ci 1), 
      to wykonaj poni�sze instrukcje (tzn. przypisz t� liczb� 
      do zmiennych liczbowych "LiczbaMin" i "LiczbaMax"). 
   7) Przypisanie do zmiennej liczbowej ca�kowitej "LiczbaMin" 
      pierwszej podanej liczby, jako liczb� minimaln�. 
   8) Przypisanie do zmiennej liczbowej ca�kowitej "LiczbaMax" 
      pierwszej podanej liczby, jako liczb� maksymaln�. 
   9) Je�eli zawarto�� zmiennej liczbowej ca�kowitej "Liczba" zawiera 
      warto�� wi�ksz� od zera, to wykonaj poni�sze instrukcje 
      (tzn. sprawd�, czy podana liczba jest najmniejsza lub najwi�ksza). 
  10) Je�eli podana liczba jest mniejsza od liczby przechowywanej 
      w zmiennej liczbowej ca�kowitej "LiczbaMin", to przepisz j� do 
      tej zmiennej usuwaj�c poprzedni� zawarto��/warto��. 
  11) Je�eli podana liczba jest wi�ksza od liczby przechowywanej 
      w zmiennej liczbowej ca�kowitej "LiczbaMax", to przepisz j� do 
      tej zmiennej usuwaj�c poprzedni� zawarto��/warto��. 
  12) Wykonuj p�tl� DO ... WHILE, tak d�ugo dop�ki spe�niony jest warunek 
      (tzn. zawarto�� zmiennej liczbowej ca�kowitej "Liczba" jest wi�ksza od zera). 
*/ 
} 