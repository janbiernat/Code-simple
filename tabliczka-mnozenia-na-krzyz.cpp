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
  --== Tabliczka mno�enia - na krzy� ==-- 
  Copyright(c)by Jan T. Biernat 
  C++ Console Application - Kurs podstawowy 
*/ 
using namespace std; 
//Blok startowy/g��wny. 
int main() { 
  cout << "--== Tabliczka mnozenia - na krzyz ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  //Tabliczka mno�enia - na krzy�. 
  cout << "\n    "; 
  for(int I=1; I < 11; I++) { 
    if(I < 10) { cout << " "; } 
    cout << I << "  "; 
  } 
  for(int A=1; A < 11; A++) { 
    cout << "\n"; 
    if(A < 10) { cout << " "; } 
    cout << A; 
    for(int B=1; B < 11; B++) { 
      if(A*B < 10) { cout << "  "; } 
      else if(A*B < 100) { cout << " "; } 
      cout << " " << (A*B); 
    } 
  } 
  //Naci�nij dowolny klawisz. 
  cout << "\n\n\nNacisnij dowolny klawisz..."; getch(); 
} 