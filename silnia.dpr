program silnia;
{--== N! ==--
 Copyright (c)by Jan T. Biernat}

{$APPTYPE CONSOLE}

uses SysUtils;

var iLiczba, I :Integer;
    iSilnia    :Longint;
begin
  Writeln('--== n! ==--');
  Writeln('Copyright (c)by Jan T. Biernat');
  Writeln;

  //Pobranie danych z klawiatury.
    Writeln; Write('Podaj liczbe: '); Readln(iLiczba);
  //Wykonanie oblicze�.
    iSilnia:= 1;
    if(iLiczba > -1) then begin
      for I:= 1 to iLiczba do begin
        iSilnia:= iSilnia*I;
      end;
      Writeln(iLiczba, '! = ', iSilnia);
    end;


  {Zatrzymanie programu do czasu naci�ni�cia klawisza ENTER.}
  Writeln; Write('Nacisnij klawisz ENTER...');
  Readln; {Zatrzymanie programu do czasu naci�ni�cia klawisza ENTER.}
end.
