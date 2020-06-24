uses    crt;
var     i,n,tg,dem: longint;
        s:int64;
begin
    clrscr;
    readln(N);
    for i := 1 to n do 
        begin
            read(tg);
            if (tg > 0) then 
                begin
                    s:=s+tg;
                    inc(dem);
                end;
        end;
    writeln(dem,' ',s);
end.