uses    crt;
var     n,k: byte;
begin
    clrscr;
    readln(n,k);
    if (n mod k = 0) then writeln('YES')
    else writeln('NO');
end.