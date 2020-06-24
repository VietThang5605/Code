uses    crt;
var     a:array[1..100000000] of longint;
        i,n,s,tg:longint;
begin
    clrscr;
    readln(n);
    for i := 1 to n do 
        begin
            read(tg);
            inc(a[tg]);
            if (a[tg] mod tg = 0) then inc(s);
        end;
    writeln(s);
end.