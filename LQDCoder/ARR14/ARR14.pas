uses    crt;
var     i,n,tg:longint;
        tg1:int64;
begin
    clrscr;
    readln(n);
    for i := 1 to n do
        begin
            read(tg);
            tg1:=tg1+tg;
            write(tg1,' ');
        end;
    readln;
end.