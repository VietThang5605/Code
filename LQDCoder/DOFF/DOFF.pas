uses    crt;
var     n,tg: longint;
begin
    clrscr;
    readln(n);
    tg:=n mod 7;
    if tg = 6 then tg:= (n div 7)*2+1
    else tg:=(n div 7)*2;
    write(tg,' ');
    tg:=n mod 7;
    if (tg > 2) then tg:=2;
    write(2*(n div 7)+tg);
    readln;
end.