var     n,i,q,j,k,dem:longint;
        kt1:boolean;
        a:array[1..100000] of longint;
begin
    readln(q);
    while q <> 0 do
        begin
            readln(n);
            kt1:=true;
            k:=0;
            j:=0;
            dem:=0;
            for i := 1 to n do read(a[i]);
            for i := 2 to n-1 do
               begin
                   if (a[i] = a[i-1]) or (a[i] = a[i+1]) then
                        begin
                            kt1:=false;
                            break;
                        end;
                   if (a[i] > a[i-1]) and (a[i] > a[i+1]) then
                        begin
                            j:=i;
                            inc(dem);
                        end
                   else
                    if (a[i] < a[i-1]) and (a[i] < a[i+1]) then
                        begin
                            k:=i;
                            inc(dem);
                        end;
               end;
            if (k = 0) or (j = 0) then kt1:=false;
            if (k = 1) or (k = n) or (j = 1) or (j = n) then kt1:=false;
            if a[2] < a[1] then kt1:=false;
            if (dem > 2) then kt1:=false;
            if (kt1 = false) then writeln('NO')
            else writeln('YES');
            dec(q);
        end;
end.