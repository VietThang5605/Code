uses    crt;
var     dem,n,i,tg:integer;
begin
    clrscr;
    readln(n);
    for i := 1 to n do 
        begin
            read(tg);
            if (tg = 1) then inc(dem)
            else dec(dem);
        end;
    writeln(abs(dem));
end.