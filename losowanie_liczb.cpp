/* 
 --== Borland C++Builder (Console Application) na C++ ==-- 
                               Kurs podstawowy 
 Copyright(c)by Jan T. Biernat 
*/ 
#include <iostream> 
#include <conio.h> 
#include <cstdlib> /*Posiada instrukcje do zainicjowania 
                     generatora liczb pseudolosowych.*/ 
#include <ctime> /*Biblioteka "ctime " zawiera funkcje 
                   zwi�zane z obs�ug� czasu i daty.*/ 
using namespace std; 
int main() { 
  cout << "--== Losowanie liczb ==--"; /*Wy�wietlenie na ekranie 
                                         tekstu znajduj�cego 
                                         si� pomi�dzy cudzys�owami.*/ 
  const int Zakres = 34; /*Zadeklarowanie sta�ej liczbowej 
                           ca�kowitej "Zakres" i przypisanie 
                           jej konkretnej warto�ci (np. 34).*/ 
  srand(time(NULL)); //Zainicjowanie generatora liczb pseudolosowych. 
  int Liczba=0; /*Zadeklarowanie zmiennej liczbowej ca�kowitej 
                  "Liczba" z r�wnoczesnym wyzerowaniem zmiennej.*/ 
  Liczba = rand()%Zakres; /*Wylosowanie jednej liczby z podanego zakresu, 
                            kt�ry przechowywany jest w sta�ej liczbowej 
                            ca�kowitej "Zakres" i przypisanie 
                            wylosowanej liczby do zmiennej liczbowej 
                            ca�kowitej "Liczba". 
                            Funkcja RAND - umo�liwia wylosowanie jednej 
                                           liczby z podanego zakresu.*/ 
  cout << "\n\nWylosowano liczbe " << Liczba; /*Obni�enie kursora 
                                                tekstowego o dwa 
                                                wiersze i wy�wietlenie 
                                                na ekranie tekstu 
                                                znajduj�cego si� 
                                                pomi�dzy cudzys�owami 
                                                oraz wy�wietlenie 
                                                na ekranie zawarto�ci 
                                                zmiennej liczbowej 
                                                ca�kowitej "Liczba". 
                                                Znak "\n" umo�liwia 
                                                przeniesienie tekstu 
                                                do kolejnego wiersza. 
                                                Parametry oddzielane 
                                                s� znakiem "<<".*/ 
  cout << "\nWylosowana liczba jest liczba "; 
  if(Liczba % 2 == 0) {  cout << "parzysta."; } 
  else { cout << "nieparzysta."; } 
  /*"if(Liczba % 2 == 0)" - Je�eli warunek jest spe�niony 
                            (tj. zawarto�� zmiennej liczbowej 
                            ca�kowitej "Liczba" podzielonej 
                            przez dwa posiada po przecinku zero), 
                            to wy�wietl informacj� "parzysta". 
                            W innym przypadku wy�wietl 
                            informacj� "nieparzysta". 
                            Znak "%" - Umo�liwia sprawdzenie liczby 
                                       po przecinku.*/ 
  //Naci�nij dowolny klawisz. 
  cout << "\n\nNacisnij dowolny klawisz..."; 
  getch(); 
} 