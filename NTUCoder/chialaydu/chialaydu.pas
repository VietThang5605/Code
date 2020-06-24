uses    crt;
var     a:array[0..100000] of boolean;
        n,k,i,tg,dem:longint;
begin
    clrscr;
    readln(n,k);
    for i := 1 to n do 
        begin
            read(tg);
            if (a[tg mod k] = false) then 
                begin
                    a[tg mod k]:=true;
                    inc(dem);
                end;
        end;
    writeln(dem);
    readln;
end.