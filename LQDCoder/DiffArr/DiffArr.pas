var     a:array[1..100001] of longint;
        n,i,dem,tg,max: longint;
begin
    readln(n);
    for i := 1 to n do
        begin
            read(tg);
            inc(a[tg]);
            if tg > max then max:=tg;
        end;
    if (a[1] >= 1) then
        begin
            inc(dem);
            if a[1] <> 1 then
                begin
                    inc(a[2]);
                    dec(a[1]);
                end;
        end;
    for i := 2 to max do
        begin
            if (a[i] >= 1) then
                begin
                    if (a[i-1] = 0) then
                        begin
                            inc(dem);
                            inc(a[i-1]);
                            dec(a[i]);
                            if (a[i] >= 1) then
                                begin
                                    inc(dem);
                                    if (a[i] = 1) then continue;
                                    inc(a[i+1]);
                                    dec(a[i]);
                                end;
                        end
                    else
                        if (a[i] = 1) then
                            begin
                                inc(dem);
                                continue;
                            end
                        else
                            begin
                         	    inc(a[i+1]);
                                dec(a[i]);
                                inc(dem);
                         	end;
                end
        end;
    if (a[max+1] > 0) then inc(dem);
    writeln(dem);
end.