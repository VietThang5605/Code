var n,i,m:longint; a:array[0..200] of longint;
begin
        readln(n);
        for i:=1 to n do
        begin
                read(a[i]);
                inc(m,a[i]);
        end;
        for i:=1 to n do
                if m=a[i]*2 then begin write(a[i]); halt; end;
        write('N');
end.