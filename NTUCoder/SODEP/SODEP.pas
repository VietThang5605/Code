uses    crt;
var     n,s:longint;
begin
    clrscr;
    readln(n);
    while n <> 0 do 
        begin
            s:=s+ n mod 10;
            n:=n div 10;
        end;
    if (s mod 10 = 9) then writeln('YES')
    else writeln('NO');
    readln;
end.