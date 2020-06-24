uses    crt;
var     a:array[1..100000] of boolean;
        b:array[1..100000] of longint;
        i,n,j,x,dem: longint;
begin
    clrscr;
    readln(n);
    a[1]:=true;
    for i := 2 to trunc(sqrt(100000)) do
        if (a[i] = false) then
            begin
                j:=i;
                while (j <= 100000 div i) do
                    begin
                        if a[i*j] = false then
                            begin
                                a[i*j]:=true;
                                inc(b[i]);
                            end;
                        inc(j); 
                    end;
            end;
    while n <> 0 do
        begin
            readln(x);
            if x <= 100000 then writeln(b[x]+1)
            else writeln(0);
            dec(n);
        end;
end.