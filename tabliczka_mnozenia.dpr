program tabliczka_mnozenia; 
{ 
 --== Tabliczka mno�enia ==-- 
 Copyright (c)by Jan T. Biernat 
} 
{$APPTYPE CONSOLE} 
uses{Dyrektywa "SysUtils" umo�liwia wykorzystanie bibliotek 
     w�asnych lub napisanych przez osoby trzecie.} 
  SysUtils; {Wykorzystanie biblioteki "SysUtils" dostarczonej 
             przez firm� Borland.} 
var A, B, Odp :shortint; {Deklaracja zmiennych liczbowych ca�kowitych.} 
begin 
  Writeln('--== Tabliczka mnozenia ==--'); {Wy�wietlenie na ekranie 
                                            tekstu znajduj�cego si� 
                                            pomi�dzy apostrofami.} 
  Writeln('Copyright (c)by Jan T. Biernat'); 
 
  {Losowanie pyta�.} 
  Randomize; {Zainicjowanie generatora liczb pseudolosowych.} 
 
  A:= 0; {Wyzerowanie zmiennej liczbowej ca�kowitej.} 
  A:= Random(11); {Wylosowanie jednej liczby z przedzia�u liczb od 
                   0 do 10 i przypisanie wylosowanej liczby do 
                   zmiennej liczbowej ca�kowitej "A". 
                   Random(X) - s�u�y do wylosowania jednej liczby 
                               z podanego przedzia�u liczb. 
                               W miejsce parametru X nale�y umie�ci� 
                               liczb� ca�kowit� np. 11. 
                               Wylosowana liczba jest zawsze mniejsza 
                               od podanej liczby w parametrze X.} 
 
  B:= 0; B:= Random(11); 
 
  {Wy�wietlenie pytania na ekranie oraz sprawdzenie udzielonej odpowiedzi.} 
  Writeln; {Pozostawienie jednego wiersza pustego i przesuni�cie 
            kursora tekstowego do nast�pnego wiersza.} 
  Write(A, ' x ', B, ' = '); {Wy�wietlenie na ekranie zawarto�ci zmiennych 
                              liczbowych "A" i 'B" oraz tekstu znajduj�cego 
                              si� pomi�dzy apostrofami. 
                              UWAGA: Parametry oddzielane s� przecinkami. 
                              Parametr 2 i 4 wy�wietla na ekranie tekst 
                              znajduj�cy si� pomi�dzy apostrofami. 
                              Natomiast parametr 1 i 3 wy�wietla na ekranie 
                              zawarto�� zmiennych liczbowych ca�kowitych 
                              "A" - parametr 1 i "B" - parametr 2.} 
  Odp:= 0; 
  Readln(Odp); {Pobranie liczb z klawiatury i przypisanie pobranych 
                 danych do zmiennej liczbowej ca�kowitej "Odp".} 
  if(A*B = Odp) then Writeln('Dobrze!') 
  else Writeln('Zle!'); 
  {Je�eli odpowied� jest poprawna (tj. A*B = Odp -  zawarto�� zmiennej 
   liczbowej ca�kowitej "A" mno�ona przez zawarto�� zmiennej liczbowej 
   ca�kowitej "B" jest r�wna zawarto�ci zmiennej liczbowej ca�kowitej "Odp"), 
   to wykonaj instrukcje po s�owie THEN. W innym przypadku wykonaj instrukcje 
   po s�owie ELSE.} 
 
  {Zatrzymanie programu do czasu naci�ni�cia klawisza ENTER.} 
  Writeln; Write('Nacisnij klawisz ENTER...'); 
  Readln; {Zatrzymanie programu do czasu naci�ni�cia klawisza ENTER.} 
end. 