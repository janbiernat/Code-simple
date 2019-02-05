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
  --== Tabliczka mno�enia - kolumnowa ==-- 
  Copyright(c)by Jan T. Biernat 
  C++ Console Application - Kurs podstawowy 
*/ 
using namespace std; 
//Blok startowy/g��wny. 
int main() { 
  cout << "--== Tabliczka mnozenia - kolumnowa ==--\n"; //1 
  cout << "Copyright (c)by Jan T. Biernat\n\n\n"; 
  cout << "UWAGA: Wpisanie zakresu mniejszego od 1, spowoduje wyjscie z programu!\n"; 
  short int I = 0, Zakres = 0, Wynik = 0; //2 
  do{ //3 
    cout << "\n\nPodaj zakres: "; 
    cin >> Zakres; //4 
    if(Zakres > 10) { //5 
      Zakres = 10; //6 
      cout << "BLAD -?Przekroczony zakres!" 
           << "\n       Wprowadzam domyslny zakres 10!\n"; 
    } 
    for(I = 1; I < 11; I++) { //7 
      Wynik = 0; //8 
      Wynik = I*Zakres; //9 
      cout << "\n"; //10 
      if(I < 10) { cout << " "; } //11 
      cout << I << " * " << Zakres << " = "; 
      if(Wynik < 10) { cout << "  "; } 
      else if(Wynik < 100) { cout << " "; } 
      cout << Wynik; 
    } 
  } while(Zakres > 0); 
  cout << "\n\n"; 
  /* Komentarz: 
      1) Wy�wietl na ekranie tekst znajduj�cy si� pomi�dzy apostrofami. 
      2) Deklaracja zmiennych liczbowych ca�kowitych. 
      3) Pocz�tek p�tli DO ... WHILE. Gdzie instrukcje wykonywane s� tak d�ugo, 
         jak d�ugo spe�niony jest warunek. 
      4) Pobranie danych (tj. liczb) z klawiatury i przypisanie ich 
         do zmiennej liczbowej ca�kowitej "Zakres". 
      5) Je�eli warto�� przechowywana w zmiennej liczbowej ca�kowitej "Zakres" 
         jest wi�ksza od liczby 10, to wykonaj poni�sze instrukcje 
         (tj. wy�wietl komunikat o przekroczeniu zakresu). 
      6) Przypisanie do zmiennej liczbowej ca�kowitej "Zakres" warto�ci 10. 
      7) P�tla FOR. Instrukcje w niej zawarte b�d� wykonywane 10 razy. 
         Zapis "I++" jest r�wnowa�ny z zapisem "I = I+1". 
      8) Wyzerowanie zmiennej liczbowej ca�kowitej "Zakres". 
      9) Przypisanie do zmiennej liczbowej ca�kowitej "Wynik", 
         wyniku z mno�enia dw�ch liczb. Liczby te przechowywane 
         s� w zmiennych liczbowych ca�kowitych "I" i "Zakres". 
     10) Obni�enie o jeden wiersz w d�. 
     11) Je�eli warto�� przechowywana w zmiennej liczbowej ca�kowitej "I" 
         jest mniejsza od liczby 10, to dodaj do testu wy�wietlanego na 
         ekranie znak pusty (tj. spacje). 
  */ 
} 