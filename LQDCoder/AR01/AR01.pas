uses    crt;
var     i,n,tg: longint;
        s:int64;
begin
    clrscr;
    readln(N);
    for i := 1 to n do 
        begin
            read(tg);
            if not ODD(tg) then 
                s:=s+tg;
        end;
    writeln(s);
end.