uses    crt;
var     n,s:int64;
        i:dword;
begin
    clrscr;
    readln(n);
    i:=1;
    s:=0;
    while s < n do 
        begin
            s:=s+i;
            inc(i);
        end;
    if (s = n) then writeln('YES')
    else writeln('NO');
    readln;
end.