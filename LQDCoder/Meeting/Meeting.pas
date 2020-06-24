uses    crt;
var     x,y,a,b,tg:longint;
begin
    clrscr;
    readln(x,y,a,b);
    tg:=y-x;
    if (tg mod (a+b) <> 0) then writeln('NO')
    else
        begin
            writeln('YES');
            writeln(tg div (a+b));
        end;
end.