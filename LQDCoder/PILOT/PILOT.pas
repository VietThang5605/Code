var     a:array[1..100000] of longint;
        i,n,j,tg,max,m: longint;
begin
    readln(n,m);
    for i := 1 to n do 
        begin
            read(tg);
            inc(a[tg]);
            if (tg > max) then max:=tg;
        end;
    for i := max downto 1 do 
        for j := 1 to a[i] do
            begin
                dec(m);
                write(i,' ');
                if (0 = m) then halt; 
            end;
end.