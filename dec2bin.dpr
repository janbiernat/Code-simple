program dec2bin; 
{$APPTYPE CONSOLE} 
uses SysUtils; //1 
var Liczba :Longint; //2 
    Wynik  :String;  //3 
begin 
  Writeln('--== Dec2Bin ==--'); //4 
  Writeln('Copyright (c)by Jan T. Biernat'); 
  Writeln('Systemy liczbowe: Dziesietny -> Dwojkowy'); 
  Writeln; //5 
  Writeln; 
  {Pobranie liczby od u�ytkownika.} 
    Write('Podaj liczbe dziesietna: '); 
    Liczba:= 0; {Przypisanie do zmiennej liczbowej "Liczba" warto�� zerowej.} 
    Readln(Liczba); //6 
  {Przeliczenie liczby 10 na liczb� 2.} 
    Write(Liczba, ' = '); //7 
    if(Liczba > 0) then begin //8 
      Wynik:= ''; //9 
      repeat 
        if(Liczba mod 2 = 0) then Wynik:= '0'+Wynik //10 
        else Wynik:= '1'+Wynik; //11 
        Liczba := Liczba div 2; //12 
      until(Liczba = 0); //13 
      Write(Wynik); //14 
    end; 
  {Poczekaj, a� u�ytkownik naci�nie klawisz ENTER.} 
    Writeln; Writeln; 
    Write('Nacisnij klawisz ENTER...'); 
    Readln; //15 
{ 
  Legenda: 
    1) Modu� zawiera procedury i funkcje do obs�ugi m.in. ekranu i klawiatury. 
    2) Zadeklarowanie zmiennej liczbowej d�ugiej "Liczba". 
    3) Zadeklarowanie zmiennej tekstowej "Wynik". 
    4) Wy�wietlenie na ekranie tekstu znajduj�cego si� pomi�dzy apostrofami. 
    5) Przesuni�cie kursora do kolejnej linii (kolejnego wiersza). 
    6) Pobranie danych z klawiatury i przypisanie ich do zmiennej liczbowej "Liczba". 
    7) Wy�wietlenie na ekranie zawarto�ci zmiennej liczbowej "Liczba" 
       oraz tekstu znajduj�cego si� pomi�dzy apostrofami. 
    8) Sprawdzenie czy podana liczba przez u�ytkownika jest wi�ksza od warto�ci 0. 
       Je�eli tak, to wykonaj poni�szy kod. 
    9) Wyczy�� zawarto�� zmiennej tekstowej "Wynik". 
   10) Sprawdzenie, czy po przecinku jest jaka� warto��. 
       Je�eli t� warto�ci� jest zero, to wykonaj instrukcje po s�owie THEN (tj. kod przed instrukcj� ELSE). 
       W innym przypadku wykonaj instrukcje po s�owie ELSE. 
   11) Instrukcje po s�owie ELSE wykonywane s�, gdy warunek (IF) w linii 21 jest nieprawdziwy. 
   12) Przepisanie wyniku z dzielenie bez reszty do zmiennej liczbowej "Liczba". 
       Przed przepisanie wyniku z dzielenia nast�puje wykonanie dzia�ania, kt�re polega 
       na podzieleniu bez reszty liczby przechowywanej w zmiennej liczbowej "Liczba" przez warto�� 2. 
   13) Sprawdzenie, czy zmienna liczbowa "Liczba" przechowuje warto�� 0. 
       Je�eli tak, to spe�niony jest warunek i nale�y opu�ci� p�tl� REPEAT ... UNTIL. 
   14) Wy�wietl uzyskany wynik w systemie liczbowym dw�jkowym (tj. binarnym). 
   15) Czekaj, a� u�ytkownik naci�nie klawisz ENTER. 
} 
end. 