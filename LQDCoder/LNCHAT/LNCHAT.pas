uses    crt;
var     a,b: longint;
begin
    clrscr;
    readln(a,b);
    while (a-1) mod 3 <> 0 do inc(a);
    while (b-1) mod 3 <> 0 do dec(b);
    writeln(((b-a) div 3 )+ 1);
end.