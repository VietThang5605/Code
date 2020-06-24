uses    crt;
var     i,n,tg,dau,cuoi:longint;
        kt:boolean;
begin
    clrscr;
    readln(n);
    for i := 1 to n do 
        begin
            read(tg);
            if (tg > 0) then 
                begin
                    if (kt = false) then 
                        begin
                            kt:=true;
                            dau:=i;
                        end;
                    cuoi:=i;
                end;
        end;
    writeln(dau,' ',cuoi);
end.