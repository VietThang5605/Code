uses    crt;
var     i,j,n,dem:integer;
        st1,st2:ansistring;
begin
    clrscr;
    readln(st1);
    readln(st2);
    n:=length(st2);
    i:=1;
    j:=n;
    while (i <= n) and (1 <= j) do 
        begin
            if (st1[i] = st2[j]) and (i+j-1 = n) then inc(dem);
            inc(i);
            dec(j);
        end;
    writeln(dem);
end.

