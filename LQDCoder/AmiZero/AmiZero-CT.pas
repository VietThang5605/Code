uses    crt;
var     l,r,t,k,tg,n,i,dem: int64;
begin
    clrscr;
    readln(n);
    while (n <> 0) do
        begin
            readln(l,r,t,k);
            if (k mod t <> 0) then writeln(0)
            else
                if (k div t > 17) then writeln(0)
                else
                    begin
                        tg:=1;
                        i:=k div t;
                        while (i <> 0) do
                            begin
                                tg:=tg*10;
                                i:=i-1;
                            end;
                        dem:=(r div tg)-((l-1) div tg);
                        while (tg <= r) do
                            begin
                                tg:=tg*10;
                                dem:=dem-((r div (tg))-((l-1) div (tg)));
                                dem:=dem+((r div (tg*10))-((l-1) div (tg*10)));
                            end;
                        writeln(dem);
                    end;
            n:=n-1;
        end;
end.