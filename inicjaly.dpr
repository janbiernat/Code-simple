program inicjaly; 
{ 
 --== Inicja�y ==-- 
 Copyright (c)by Jan T. Biernat 
 Borland Delphi 3 - Console Applications (Kurs podstawowy) 
} 
{$APPTYPE CONSOLE} 
uses SysUtils; 
 
function tInicjaly(T :String):String; 
var I           :Integer; 
    S, tInicjal :String; 
begin //tInicjaly - Pobiera pocz�tkowe litery np. imienia i nazwiska. 
  T:= Trim(T); //Usuwa spacje na pocz�tku i na ko�cu podanego tekstu. 
  if(T<>'') then begin 
    //Je�eli podany jest przynajmniej 1 znak, 
    //to wykonaj poni�sze instrukcje. 
    S:= ''; //Wyczyszczenie zmiennej tekstowej. 
    for I:= 2 to Length(T) do begin 
      if((T[I-1] = #32) and (T[I] <> #32)) then 
        if(T[I+1] = #32) then S:= S+AnsiLowerCase(T[I]) 
        else S:= S+AnsiUpperCase(T[I]); 
      tInicjal:= ''; 
      tInicjal:= AnsiUpperCase(T[1])+S; 
      if(Length(tInicjal) = 1) then Result:= AnsiUpperCase(Copy(T, 1, 3)) 
      else Result:= tInicjal; 
    end; 
  end else Result:= ''; 
end; {tInicjaly} 
{Blok startowy/g��wny} 
const Tablica :array[0..5] of String = ( 
                   'Jan T. Biernat', 
                   'Jan Kowalski', 
                   'Borland Turbo Pascal', 
                   'Borland', 
                   'Jan Kowalski i Spolka', 
                   'Bielsko-Biala, Nowa Zelandia, Kanada i USA, Kosmos i Przestrzen' 
                   ); 
var I :Shortint; 
begin 
  Writeln('--== Inicjaly ==--'); 
  Writeln('Copyright (c)by Jan T. Biernat'); 
  Writeln; Writeln; 
 
  {Generowanie inicja��w na podstawie podanego tekstu.} 
  for I:= 0 to 5 do 
    Writeln(Tablica[I], ' = ', tInicjaly(Tablica[I])); 
 
  {Czekaj, a� zostanie naci�ni�ty klawisz ENTER.} 
  Writeln; Writeln; 
  Write('Nacisnij klawisz ENTER...'); Readln; 
end. 