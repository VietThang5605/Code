uses    crt;
var     a:array[1..1000000] of longint;
        n,i,tg,max: longint;
begin
    clrscr;
    readln(n);
    for i := 1 to n do
        begin
            read(tg);
            if (tg > max) then max:=tg;
            inc(a[tg]);
        end;
    for i := 1 to max do 
        if a[i] > 0 then writeln(i,' ',a[i]);
    readln;
end.