uses    crt;
var     i,n,t,tg,min,k,s: longint;
begin
    clrscr;
    readln(t);
    while t <> 0 do
        begin
            readln(n,k);
            read(tg);
            min:=tg;
            for i := 2 to n do
                begin
                    read(tg);
                    if (tg < min) then min:=tg;
                end;
            s:=k-min;
            if (s <= 0) then writeln(0)
            else
                writeln(s);
            dec(t);
        end;
end.