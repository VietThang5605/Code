uses    crt;
var     a:array[1..1000000] of longint;
        i,j,n,dem,b: longint;
begin
    clrscr;
    readln(b,n);
    for i := 2 to n div 2 do
            begin
                j:=2;
                while j*i <= n do
                    begin
                        a[i*j]:=a[i*j]+i;
                        inc(j);
                    end;
            end;
    for i := b to n do
        if (a[i]+1 > i) then inc(dem);
    writeln(dem);
end.