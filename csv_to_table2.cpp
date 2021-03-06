﻿#include <iostream> 
#include <conio.h> 
#include <fstream> //Posiada funkcje związane z obsługą plików. 
using namespace std; 
/*--== CSV to table 2 - CLASS ==-- 
  Copyright (c)by Jan T. Biernat 
  = 
  Napisz program, który dokona konwersji danych 
  z formatu CSV na reprezentację tabelaryczną. 
  Znakiem oddzielającym dane jest średnik (tj. znak ";"). 
 
  Na przykład: 
    Dane wejściowe: 
      nazwisko;imie;wiek 
      Kowalski;Jan;47 
      Chleb;Justyna;28 
 
    Dane wyjściowe: 
      +---------------------------+ 
      | nazwisko | imie    | wiek | 
      |---------------------------| 
      | Kowalski | Jan     |   47 | 
      |---------------------------| 
      | Chleb    | Justyna |   28 | 
      +---------------------------+ 
  = 
  CSV (ang. comma-separated values, wartości rozdzielone przecinkiem) 
  Format przechowywania danych w plikach tekstowych. 
  Jako separatora tekstu (danych) można używać: średnika, przecinka 
  lub innego znaku (najlepiej nieużywanego w tekście). 
*/ 
class csv_do_tabeli { 
  //Utworzenie klasy o nazwie "csv_do_tabeli". 
    public: 
      int ile_znakow; 
      int IloscZnakow(string Str); 
      string LiniaPozioma(int IleZnakow); 
      string WyswietlDane(string Str, int IleZnakow); 
}; 
int csv_do_tabeli::IloscZnakow(string Str = "") { 
  //IloscZnakow. 
  //Podaje największą liczbę określającą ile znaków mieści się pomiędzy znakami średnika (tj. znakiem ";"). 
    int ZnakiLicznik = 0, ZnakiMaks = 0; 
    if(Str != "") { 
      for(int I = 0; I < Str.length(); I++) { 
        if(Str[I] == ';') { 
          if(ZnakiLicznik > ZnakiMaks) { ZnakiMaks = ZnakiLicznik; } 
          ZnakiLicznik = 0; 
        } else { ZnakiLicznik++; } 
      } 
      return ZnakiMaks; 
    } else { return -1; } 
} 
string csv_do_tabeli::LiniaPozioma(int IleZnakow = 0) { 
  //LiniaPozioma - Rysuje linię poziomą. 
    string LiniaPoziomaT = ""; 
    if(IleZnakow > 0) { 
      LiniaPoziomaT = "+"; 
      for(int I = 0; I < IleZnakow; I++) { LiniaPoziomaT += "-"; } 
      LiniaPoziomaT += "+"; 
      return LiniaPoziomaT; 
    } else { return "?"; } 
} 
string csv_do_tabeli::WyswietlDane(string Str = "", int IleZnakow = 0) { 
  //WyswietlDane - Wyświetla na ekranie dane w formie tabelarycznej. 
    string T1 = "", T2 = "", Spacja = ""; 
    short int CzyZnaki = 0; 
    int Licznik = 0; 
    if(Str != "") { 
      for(int I = 0; I < Str.length(); I++) { 
        if(Str[I] == ';') { //1. 
          Spacja = ""; 
          for(int S = 0; S < IleZnakow-T1.length(); S++) { Spacja+= " "; } 
          CzyZnaki = 0; 
          for(int V = 0; V < T1.length(); V++) { 
            if((T1[V] < '0') || (T1[V] > '9')) { CzyZnaki = 1; break; } 
          } 
          if(CzyZnaki == 0) { T2+= " | "+Spacja+T1; } 
          else { T2+= " | "+T1+Spacja; } 
          T1 = ""; 
        } else { T1+= Str[I]; } //2. 
      } 
      ile_znakow = 0; ile_znakow = T2.length()-1; 
      return "\n"+T2+" |"; 
    } else { return "?"; } 
/* 
  Legenda: 
    1) Zapis "Str[I]" umożliwia odczytanie znaku ze zmiennej tekstowej "Str" na podstawie 
       podanego numeru indeksu. Nr indeksu jest przechowywany w zmiennej liczbowej całkowitej "I". 
       Po odczytaniu znaku, następuje porównanie go z prawą stroną warunku. 
       Jeżeli warunek jest spełniony, to wykonaj instrukcje w klamrach (zaraz za warunkiem IF). 
       W przeciwnym razie wykonaj instrukcje po słowie ELSE (tj. dodaj do zmiennej tekstowej 
       "T1" kolejne odczytane znaki ze zmiennej tekstowej "Str"). 
    2) Jeżeli warunek "if(Str[I] == ';')" jest niespełniony, to wykonaj instrukcje po słowie ELSE. 
       Dodaj do zmiennej tekstowej "T1" kolejne odczytane znaki ze zmiennej tekstowej "Str". 
       Zapis "T1+= Str[I];" jest równoważny z zapisem "T1 = T1+Str[I];". 
*/ 
} 
//Blok główny/startowy. 
int main(int argc, char *argv[]) { 
  cout << "--== CSV to table 2 - CLASS ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  //Deklaracja zmiennych. 
    string Linia = "", WierszDane = ""; 
    long int Licznik = 0; 
    int Ile = 0, Maks = 0; 
  //Deklaracja obiektu o nazwie "do_tabeli". 
    csv_do_tabeli do_tabeli; 
  //Znajdź najdłuższy ciąg znaków. 
    fstream PlikDane(argv[1], ios::in); //1. 
    if(PlikDane != NULL) { 
      Linia = ""; 
      while(getline(PlikDane, Linia)) { 
        Ile = do_tabeli.IloscZnakow(Linia+';'); 
        if(Ile > Maks) { Maks = Ile; } 
      } 
    } else { cout << "BLAD -?Brak pliku o podanej nazwie na dysku!\n"; } 
    PlikDane.close(); 
  //Wyświetl dane w formie tabelarycznej. 
    Licznik = 0; 
    fstream PobierzDane(argv[1], ios::in); 
    if(PobierzDane != NULL) { 
      Linia = ""; 
      while(getline(PobierzDane, Linia)) { 
        Licznik++; 
        WierszDane = ""; WierszDane = do_tabeli.WyswietlDane(Linia+';', Maks); 
        if(Licznik == 1) { cout << "\n " << do_tabeli.LiniaPozioma(do_tabeli.ile_znakow); } 
        cout << WierszDane; 
        cout << "\n " << do_tabeli.LiniaPozioma(do_tabeli.ile_znakow); 
      } 
    } else { cout << "BLAD -?Brak pliku o podanej nazwie na dysku!\n"; } 
    PobierzDane.close(); 
  //Czekaj, aż użytkownik naciśnie klawisz ENTER. 
    cout << "\n\n\nNacisnij klawisz ENTER..."; 
    getch(); 
/* 
  Legenda: 
    1) Utworzenie obiektu o nazwie "PlikDane" na podstawie klasy "fstream". 
       Od tego momentu można używać instrukcji, które należą do klasy "fstream". 
       Otwarcie pliku do odczytu (tj. ios::in). 
*/ 
} 