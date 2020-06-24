uses    crt;
var     a:array[1..100000] of longint;
        i,n,tg:longint;
begin
    clrscr;
    readln(n);
    for i := 1 to n do read(a[i]);
    for i := 1 to n do 
        begin
            read(tg);
            write(tg+a[i],' ');
        end;
    readln;
end.