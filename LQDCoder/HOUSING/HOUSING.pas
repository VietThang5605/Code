uses    crt;
var     n,i,dem,k,tg1,tg2: longint;
begin
    clrscr;
    readln(n,k);
    if (n <= k) then
        begin
            if (n = k) then writeln('YES')
            else writeln('NO');
            halt;
        end;
    read(tg1);
    for i := 2 to n do
        begin
            read(tg2);
            if (tg2 <> tg1) then inc(dem);
            tg1:=tg2;
        end;
    if (dem+1 <= k) then writeln('YES')
    else writeln('NO');
    readln;
end.