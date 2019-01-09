/*--== Borland C++Builder (Console Application) ==-- 
                                Kurs podstawowy 
 Copyright(c)by Jan T. Biernat*/ 
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
using namespace std; 
//Blok g��wny. 
int main() { 
  cout << "--== Tabliczka mnozenia w1 ==--\n";/*Wy�wietlenie na ekranie 
                                                tekstu znajduj�cego 
                                                si� pomi�dzy 
                                                cudzys�owami. 
                                                Znak "\n" powoduje 
                                                przej�cie kursora 
                                                tekstowego do nast�pnej 
                                                linii.*/ 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  //Deklaracja zmiennych. 
    short int A=0, B=0, iOdp=0; /*Deklaracja zmiennych liczbowych z r�wnoczesnym wyzerowaniem.*/ 
  //Losowanie pyta� (liczb). 
    srand(time(NULL)); //Zainicjowanie generatora liczb pseudolosowych. 
    A = rand()%11; /*Wylosowanie jednej liczby z przedzia�u liczb 
                     od 0 do 10 i przypisanie wylosowanej liczby do 
                     zmiennej liczbowej ca�kowitej "A".*/ 
    B = rand()%11; 
  //Wy�wietlenie pytania na ekranie oraz sprawdzenie udzielonej odpowiedzi. 
    cout << "\nIle jest " << A << " x " << B << " = "; /*Wy�wietlenie na ekranie 
                                                         tekstu znajduj�cego 
                                                         si� pomi�dzy cudzys�owami 
                                                         oraz wy�wietlenie 
                                                         na ekranie zawarto�ci 
                                                         zmiennych liczbowych 
                                                         "A" i 'B". 
                                                         Parametry oddzielane s� 
                                                         znakami "<<". 
                                                         Parametr 1, 3 i 5 
                                                         powoduje wy�wietlenie 
                                                         na ekranie tekstu 
                                                         znajduj�cego si� 
                                                         pomi�dzy cudzys�owami. 
                                                         Natomiast parametr 2 i 4 
                                                         wy�wietla na ekranie 
                                                         zawarto�� zmiennych 
                                                         liczbowych ca�kowitych 
                                                         "A" - parametr 2 
                                                         i "B" - parametr 4.*/ 
  cin >> iOdp; /*Pobranie liczb z klawiatury i przypisanie 
                 ich do zmiennej liczbowej ca�kowitej "iOdp".*/ 
  if(A*B == iOdp) cout << "Odpowiedz jest prawidlowa!"; 
  else cout << "Niestety odpowiedz jest zla!!!"; 
  /*Je�eli odpowied� jest poprawna (tj. A*B == iOdp - zawarto�� zmiennej 
    liczbowej ca�kowitej "A" mno�ona przez zawarto�� zmiennej liczbowej 
    ca�kowitej "B" jest r�wna zawarto�ci zmiennej liczbowej ca�kowitej "iOdp"), 
    to wykonaj instrukcje przed s�owem ELSE. 
    W innym przypadku wykonaj instrukcje po s�owie ELSE.*/ 
  cout << "\n\n"; 
} 