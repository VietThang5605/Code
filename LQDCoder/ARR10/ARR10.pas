uses    crt;
var     a:array[0..1000000] of longint;
        b:array[1..100000] of longint;
        i,n,tg: longint;
begin
    clrscr;
    readln(n);
    for i := 1 to n do 
        begin
            read(b[i]);
            inc(a[b[i]]);
        end;
    for i := 1 to n do writeln(b[i],' ',a[b[i]]);
    readln;
end.