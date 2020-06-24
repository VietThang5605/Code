uses    crt;
var     n,i,tg,x,dem: longint;
begin
    clrscr;
    readln(n,x);
    for i := 1 to n do 
        begin
            read(tg);
            if (tg = x) then inc(dem);
        end;
    writeln(dem);
end.