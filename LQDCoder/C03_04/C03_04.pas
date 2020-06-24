uses    crt;
var     n:longint;
begin
    clrscr;
    readln(n);
    n:=(n-1) div 2;
    if (n < 0) then writeln(0)
    else writeln(n);
end.