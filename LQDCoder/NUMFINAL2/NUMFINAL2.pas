uses    crt;
var     tg,a:longint;
        n:ansistring;
begin
    clrscr;
    readln(a);
    readln(n);
    a:=a mod 10;
    n:='0'+n;
    val(copy(n,length(n)-1,2),tg);
    tg:=tg mod 4;
    if (tg = 0) then a:=a*a*a*a;
    if (tg = 2) then a:=a*a;
    if (tg = 3) then a:=a*a*a;
    writeln(a mod 10);
end.