program literowanie;
{
 --== Borland Delphi 7 - Console Applications ==--
                            (Kurs podstawowy)
 Copyright(c)by Jan T. Biernat
}

{$APPTYPE CONSOLE}

uses SysUtils, Windows;

var Znaki :String;
    A     :Integer;
begin
  Writeln('--== Literowanie ==--');


  {Wprowadzanie danych.}
  Writeln;
  Znaki:= '';
  Write('Podaj dowolny tekst: ');
  Readln(Znaki);
  if (Znaki<>'') then {Je�eli zostanie podany przynajmniej jeden znak,
                       to wykonaj poni�sze instrukcje.}
  begin
    Writeln;
    Write('Literowanie: ');
    for A:= 1 to Length(Znaki) do {Wykonaj p�tle tyle razy ile jest znak�w
                                   w podanym tek�cie. O ilo�ci powt�rze�
                                   p�tli decyduje funkcja "Length".

                                   Length(X) - wynikiem dzia�ania funkcji
                                               jest warto�� liczbowa
                                               ca�kowita okre�laj�ca
                                               z ilu znak�w sk�ada si�
                                               podany tekst.
                                               W miejsce parametru X nale�y
                                               umie�ci� zmienna tekstowa.}
    begin
      Write(Znaki[A]); {Wy�wietlenie na ekranie znaku.

                        Zapis "Znaki[A]" pozwala na pobranie jednego
                        znaku, kt�ry le�y na pozycji o numerze
                        przechowywanym w zmiennej liczbowej ca�kowitej "A".

                        Na przyk�ad: "Znaki[3]" - pobierze znak, kt�ry
                                     znajduje si� na trzeciej pozycji
                                     podanego tekstu.}
      Sleep(222); {Wstrzymanie dzia�ania programu na 222 milisekund.}
    end;
  end;


  {Zatrzymaj program do czasu naci�ni�cia klawisza ENTER.}
  Writeln;
  Writeln;
  Write('Nacisnij klawisz ENTER...');
  Readln;
end.