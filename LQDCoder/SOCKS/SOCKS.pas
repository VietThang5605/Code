uses    crt;
var     a:array[1..100] of byte;
        n,i,tg,dem: byte;
begin
    clrscr;
    readln(n);
    for i := 1 to n do 
        begin
            read(tg);
            inc(a[tg]);
            if not ODD(a[tg]) then inc(dem);
        end;
    writeln(dem);
end.