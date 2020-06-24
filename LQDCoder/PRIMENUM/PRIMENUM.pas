uses    crt;
var     a:array[1..1000000] of boolean;
        i,j,n,dem,b: longint;
begin
    clrscr;
    readln(b,n);
    a[1]:=true;
    for i := 2 to trunc(sqrt(n)) do 
        if (a[i] = false) then 
            begin
                j:=2;
                while j*i <= n do
                    begin
                        a[i*j]:=true;
                        inc(j);
                    end;
            end;
    for i := b to n do
        if (a[i] = false) then writeln(i);
end.