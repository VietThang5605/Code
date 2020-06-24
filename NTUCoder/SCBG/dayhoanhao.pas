var     i,n,tg,dem,s1,s2,k,max: longint;
        a,b:array[1..100000] of longint;
begin
    dem:=1;
    readln(n,k);
    read(a[1]);
    b[1]:=1;
    for i := 2 to n do
        begin
            read(tg);
            inc(dem);
            if (tg >= (a[i-1] div (dem-1))) then
                begin
                    if (tg >= k) then
                        begin
                            dem:=1;
                            a[i]:=tg;
                            b[i]:=1;
                        end
                    else
                        begin
                            a[i]:=a[i-1]+tg;
                            b[i]:=dem;
                        end
                end
            else
                if ((tg+a[i-1]) div dem <= a[i-1]) then
                    begin
                        dem:=1;
                        a[i]:=tg;
                        b[i]:=1;
                    end
                else
                    begin
                        a[i]:=a[i-1]+tg;
                        b[i]:=dem;
                    end;
        end;
    max:=a[1] div b[1];
    for i := 2 to n do
        if a[i] div b[i] > max then max:=a[i] div b[i];
    writeln(max);
end.