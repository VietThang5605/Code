var     a:array[1..1000000] of longint;
        i,j,n,k,c,b,vt,s: longint;
        dem:int64;
begin
    readln(n,s);
    for i := 1 to n do read(a[i]);
    i:=1;
    j:=n;
    while i < j do
        begin
            if a[i]+a[j] > s then dec(j)
            else
                if a[i]+a[j] < s then inc(i)
                else
                    if (a[i] = s div 2) and (a[j] = s div 2) then
                        begin
                            c:=0;
                            for k := i to n do
                                if (a[i] = a[k]) then inc(c)
                                else break;
                            dem:=dem+((c*(c-1)) div 2);
                            break;
                        end
                    else
                        begin
                            c:=0;
                            b:=0;
                            for k := i to n do
                                if (a[k] = a[i]) then inc(c)
                                else break;
                            vt:=k;
                            for k := j downto 1 do
                                if (a[k] = a[j]) then inc(b)
                                else break;
                            dem:=dem+c*b;
                            i:=vt;
                            j:=k;
                        end;
        end;
    writeln(dem);
end.