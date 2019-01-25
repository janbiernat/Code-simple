program statystyka_wyrazow; 
{ 
 --== Statystyka wyraz�w ==-- 
 Copyright (c)by Jan T. Biernat 
 Borland Delphi 3 - Console Applications (Kurs podstawowy) 
} 
{$APPTYPE CONSOLE} 
uses SysUtils, Windows, Classes; 
 
function tFL12_345(tLiczba :String):String; 
var I, iLicznik :Integer; 
    tZnaki      :String; 
begin 
  {tFL12_345 - Formatuje liczbe 12345 na 12 345.} 
  iLicznik:= 0; tZnaki:= ''; 
  for I:= Length(tLiczba) downto 1 do begin 
    tZnaki:= tLiczba[I]+tZnaki; 
    iLicznik:= iLicznik+1; 
    if(iLicznik > 2) then begin 
      iLicznik:= 0; 
      tZnaki:= #32+tZnaki; 
    end; 
  end; 
  {Usun 1 pusty znak (tzw. spacje).} 
  if(tZnaki[1] = #32) then tFL12_345:= Copy(tZnaki, 2, Length(tZnaki)) 
  else tFL12_345:= tZnaki; 
end; {tFL12_345} 
 
{iZnakiBezSpacji - Podaje ilo�� znak�w bez spacji w podanym tek�cie (ci�gu znak�w).} 
function iZnakiBezSpacji(Tekst :String):Integer; 
var T :String; 
    I :Integer; 
begin 
  T:= ''; {Wyczyszczenie zmiennej tekstowej "T".} 
  for I:= 1 to Length(Tekst) do begin 
    if(Tekst[I] <> CHR(32)) then T:= T+Tekst[I]; 
  end; 
  Result:= Length(T); 
end; 
 
{iWyrazowJest - Podaje ilo�� wyraz�w w podanym tek�cie (ci�gu znak�w).} 
function iWyrazowJest(Tekst :String):Integer; 
var I :Longint; 
    L :Integer; 
begin 
  Tekst:= Tekst+CHR(32); {Dodanie do podanego ci�gu znak�w, znaku spacji.} 
  L:= 0; {Wyzerowanie zmiennej liczbowej "L".} 
  for I:= 1 to Length(Tekst) do begin 
    if((Tekst[I]<>CHR(32)) and (Tekst[I+1] = #32)) then L:= L+1; 
  end; 
  Result:= L; 
end; 
 
{Blok startowy/g��wny.} 
var PlikDanych                     :TStringList; //Zadeklarowanie zmiennej typu TStringList. 
    tNazwaPliku, tPobierzWiersz    :String; 
    I, iTekstZeSpacjami            :Longint; 
    iTekstBezSpacji, iIloscWyrazow :Longint; 
begin  
  Writeln('--== Statystyka wyrazow ==--'); 
  Writeln('Copyright (c)by Jan T. Biernat'); 
  Writeln; 
  
  {Informacja} 
  Writeln('UWAGA: Program wykonuje statystyke wyrazow tylko dla plikow tekstowych!'); 
  
  {Statystyka wyraz�w} 
  tNazwaPliku:= ''; tNazwaPliku:= Trim(AnsiLowerCase(ParamStr(1))); 
  if(tNazwaPliku<>'') then begin 
                      {Je�eli zosta�a podana nazwa pliku, to wykonaj poni�sze instrukcje. 
                       W innym przypadku wy�wietl komunikat o b��dzie 
                       (tj. "BLAD -?Brak nazwy pliku jako parametru!"), kt�ry 
                       znajduje si� po instrukcji ELSE.} 
    if(FileExists(tNazwaPliku) = TRUE) then begin  //Je�eli plik o podanej nazwie znajduje si� fizycznie na dysku, 
                                                   //to wykonaj poni�sze instrukcje. 
      Writeln; Writeln;  
      Writeln('Wczytany plik tesktowy to:'); 
      Writeln('"', tNazwaPliku, '".'); 
      PlikDanych:= TStringList.Create;        //Utworzenie klasy "PlikDanych". 
        PlikDanych.Clear;                     //Wyczyszczenie zawarto�ci listy. 
        PlikDanych.LoadFromFile(tNazwaPliku); //Wczytanie zawarto�ci pliku tekstowego do listy. 
        //Wykonanie statystyki wyraz�w. 
        Writeln; Writeln; Writeln('Raport:'); 
        Writeln('Ilosc wierszy: ', tFL12_345(IntToStr(PlikDanych.Count))); 
        iTekstZeSpacjami:= 0; //Wyzerowanie zmiennej. 
        iTekstBezSpacji:= 0; 
        iIloscWyrazow:= 0; 
        for I:= 0 to PlikDanych.Count-1 do begin 
          tPobierzWiersz:= ''; 
          tPobierzWiersz:= Trim(PlikDanych.Strings[I]); 
          iIloscWyrazow:= iIloscWyrazow+iWyrazowJest(tPobierzWiersz); 
          iTekstBezSpacji:= iTekstBezSpacji+iZnakiBezSpacji(tPobierzWiersz); 
          iTekstZeSpacjami:= iTekstZeSpacjami+Length(tPobierzWiersz); 
        end; 
        Writeln('Ilosc wyrazow: ', tFL12_345(IntToStr(iIloscWyrazow))); 
        Writeln('Ilosc znakow (bez spacji) : ', tFL12_345(IntToStr(iTekstBezSpacji))); 
        Writeln('Ilosc znakow (ze spacjami): ', tFL12_345(IntToStr(iTekstZeSpacjami))); 
        PlikDanych.Destroy; //Usuwamy list� z pami�ci komputera. 
    end else begin 
               Writeln; 
               Writeln('BLAD -?Brak na dysku pliku o podanej nazwie!'); 
             end; 
  end else begin 
             Writeln; 
             Writeln('BLAD -?Brak nazwy pliku jako parametru!'); 
           end; 
  {Zatrzymaj program do czasu naci�ni�cia klawisza ENTER.} 
  Writeln; Writeln; Write('Nacisnij klawisz ENTER...'); Readln; 
end. 