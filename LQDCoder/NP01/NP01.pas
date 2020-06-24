uses    crt;
var     i,tg,n,k:longint;
begin
    clrscr;
    readln(n,k);
    for i := 1 to n do 
        begin
            read(tg);
            if (tg = k) then 
                begin
                    writeln(i);
                    halt;
                end;
        end;
    writeln(-1); 
end.