#include <iostream> //Standardowa biblioteka obs�uguj�ca operacje wej�cia i wyj�cia (ang. Input/Output, w skr�cie I/O). 
#include <ctime>    //Standardowa biblioteka udost�pniaj�ca funkcje zwi�zane z obs�ug� czasu. 
#include <cstdlib>  //Biblioteka zawieraj�ca funkcje og�lne (m.in. funkcje do uruchomienia generatora liczb pseudolosowych). 
using namespace std; 
/*--== Losowanie bez powt�rze� ==-- 
  Copyright (c)by Jan T. Biernat*/ 
int main() { 
  cout << "--== Losowanie bez powtorzen - w3 ==--\n"; 
  //Zainicjowanie sta�ych w programie. 
    const short int IloscElementow=7; 
  //Zadeklarowanie zmiennych. 
    short int Przelacznik=0, Zakres=0; 
    int Liczby[IloscElementow]; 
  //Pobranie od u�ytkownika liczby okre�laj�cej zakres z jakiego b�d� losowane liczby. 
    cout << "\nPodaj zakres losowanych liczb: "; 
    cin >> Zakres; 
    if(Zakres < IloscElementow) { 
      Zakres = 0; Zakres = IloscElementow; 
      cout << "\nBLAD -?Podano za maly zakres." 
           << "\n       Wprowadzam najmniejszy domyslny zakres, tzn. liczbe "<< IloscElementow << ".\n"; 
    } 
  //Losowanie liczb bez powt�rze� z podanego zakresu (zakres jest podany w sta�ych). 
    srand(time(NULL)); //Zainicjowanie generatora liczb pseudolosowych. 
    do { 
      Przelacznik=0; 
      //Wylosowanie liczb z podanego zakresu i przypisanie ich do tablicy. 
        for(int I=0; I < IloscElementow; I++) { 
          Liczby[I] = rand()%Zakres; 
        }   
      /*Sprawdzenie, czy liczby si� powtarzaj�. 
        Je�eli liczby si� powtarzaj�, to zwi�ksz warto�� zmiennej "Prze��cznik" 
        o 1 i zatrzymaj dzia�anie zagnie�d�onych p�tli FOR.*/ 
        for(int A=0; A < IloscElementow; A++) { 
          for(int B=A+1; B < IloscElementow; B++) { 
            if(Liczby[A] == Liczby[B]) { Przelacznik++; break; } 
          } 
        } 
    } while(Przelacznik > 0); 
  //Wy�wietl wylosowane liczby. 
    cout<<"\nWylosowane liczby to: "; 
    for(int I=0; I < IloscElementow; I++) { 
      cout << Liczby[I]; 
      if(I < IloscElementow-1) { cout << ", "; } 
    } 
    cout<<".\n"; 
} 