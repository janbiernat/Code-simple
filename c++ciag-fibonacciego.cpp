#include<iostream> 
using namespace std; 
int main() { 
  /*--== Ci�g Fibonacciego ==-- 
    Copyright (c)by Jan T. Biernat 
    - 
    Ci�g Fibonacciego � ci�g liczb naturalnych okre�lony rekurencyjnie 
    w spos�b nast�puj�cy: Pierwszy wyraz jest r�wny 0, drugi jest r�wny 1, 
    ka�dy nast�pny jest sum� dw�ch poprzednich. 
    Formalnie: Kolejne wyrazy tego ci�gu nazywane s� liczbami Fibonacciego. 
    Przyk�ad: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987 ... a� do niesko�czono�ci. 
    W�asno�ci� tego ci�gu jest to, �e gdy podzielimy przez siebie dowolne, 
    kolejne dwa wyrazy ci�gu Fibonacciego, np. 987 : 610; 89 : 55 to stosunek 
    tych liczb b�dzie r�wny zawsze tej samej liczbie, r�wnej w przybli�eniu 1.618. 
    Im wi�ksze wyrazy ci�gu podzielimy, tym dok�adniejsze przybli�enie tej liczby uzyskamy. 
    Liczb� t� nazywa si� "z�ot� liczb�" lub liczb� fi. Stosunek tego podzia�u okre�la si� r�wnie� mianem 
    "z�otego podzia�u" lub "Boskiej proporcji". 
    Przyk�ad: Z�ote proporcje zachowuj� nawet spirale naszego DNA. 
              Cz�steczka DNA mierzy 34 jednostki d�ugo�ci na 21 jednostek szeroko�ci 
              dla ka�dego odcinka podw�jnej spirali. Liczby te s� oczywi�cie elementami 
              ci�gu Fibonacciego, a zale�no�� mi�dzy nimi jest r�wna liczbie fi (czyli 1.618). 
    Rekurencja (�ac. recurrere, przybiec z powrotem) � odwo�ywanie si� np. funkcji 
    lub definicji do samej siebie. W logice wnioskowanie rekurencyjne opiera si� 
    na za�o�eniu istnienia pewnego stanu pocz�tkowego oraz zdania (lub zda�) 
    stanowi�cego podstaw� wnioskowania (przy czym, aby ca�y dow�d by� poprawny, 
    zar�wno regu�a, jak i stan pocz�tkowy musz� by� prawdziwe).*/ 
  cout << "--== Ciag Fibonacciego ==--\n"; 
  cout << "Copyright (c)by Jan T. Biernat\n\n"; 
  //Zadeklarowanie zmiennych. 
    long int LiczbaK = 0, A = 0, B = 0, C = 0; 
  //Pobranie danych z klawiatury. 
    cout << "Zakres gorny: "; 
    cin >> LiczbaK; 
  //Ci�g Fibonacciego. 
    if(LiczbaK > 0) { 
      A = 0; B = 1; //Warto�ci pocz�tkowe Ci�gu Fibonacciego. 
      cout << "\nCiag Fibonacciego: " << A << ", " << B << ", "; 
      for(int I = 0; I < LiczbaK; I++) { 
        C = 0; C = A+B; 
        cout << C; //Wy�wietlenie sumy dw�ch poprzednich liczb. 
        if(I < LiczbaK-1) { cout << ", "; } 
        A = 0; A = B; 
        B = 0; B = C; 
      } 
    } 
  cout << ".\n"; 
} 