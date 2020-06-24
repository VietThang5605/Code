uses    crt;
var     tg,i,n,dem: longint;
        s:extended;
begin
    clrscr;
    readln(n);
    for i := 1 to n do 
        begin
            read(tg);
            if (tg < 0) then 
                begin
                    s:=s+tg;
                    inc(dem);
                end;
        end;
    if (dem = 0) then writeln(-1)
    else 
        begin
        s:=s/dem;
        writeln(s:0:2);   
        end;
end.