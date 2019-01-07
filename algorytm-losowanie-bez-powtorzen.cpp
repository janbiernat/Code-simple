#include <iostream> //Standardowa biblioteka obs�uguj�ca operacje wej�cia i wyj�cia (ang. Input/Output, w skr�cie I/O). 
#include <ctime>    //Standardowa biblioteka udost�pniaj�ca funkcje zwi�zane z obs�ug� czasu. 
#include <cstdlib>  //Biblioteka zawieraj�ca funkcje og�lne (m.in. funkcje do uruchomienia generatora liczb pseudolosowych). 
using namespace std; 
/*--== Losowanie bez powt�rze� ==-- 
  Copyright (c)by Jan T. Biernat*/ 
int main() { 
  cout << "--== Losowanie bez powtorzen ==--\n"; 
  //Zainicjowanie sta�ych w programie. 
    const short int Zakres=5; 
  //Zadeklarowanie zmiennych. 
    short int Przelacznik=0; 
    int Liczby[5]; //Zadeklarowanie tablicy 5 elementowej tego samego typu. 
  //Losowanie pi�ciu liczb bez powt�rze� z podanego zakresu (zakres jest podany w sta�ych). 
    srand(time(NULL)); //Zainicjowanie generatora liczb pseudolosowych. 
    do { 
      Przelacznik=0; 
      //Wylosowanie liczb z podanego zakresu i przypisanie ich do tablicy. 
        Liczby[0] = rand()%Zakres; 
        Liczby[1] = rand()%Zakres; 
        Liczby[2] = rand()%Zakres; 
        Liczby[3] = rand()%Zakres; 
        Liczby[4] = rand()%Zakres; 
      /*Sprawdzenie, czy liczby si� powtarzaj�. 
        Je�eli liczby si� powtarzaj�, to zwi�ksz warto�� zmiennej "Prze��cznik" 
        o 1 i zatrzymaj dzia�anie zagnie�d�onych p�tli FOR.*/ 
        for(int A=0; A < 5; A++) { 
          for(int B=A+1; B < 5; B++) { 
            if(Liczby[A] == Liczby[B]) { Przelacznik++; break; } 
          } 
        } 
    } while(Przelacznik > 0); 
  //Wy�wietl wylosowane liczby. 
    cout<<"\nWylosowane liczby to: "; 
    for(int I=0; I < 5; I++) { 
      cout << Liczby[I]; 
      if(I < 4) { cout << ", "; } 
    } 
    cout<<".\n"; 
} 