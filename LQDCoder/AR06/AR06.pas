uses    crt;
var     tg,n,i,dau,cuoi: longint;
        kt:boolean;
begin
    clrscr;
    readln(n);
    for i := 1 to n do 
        begin
            read(tg);
            if (kt = false) and (tg < 0) then 
                begin
                    dau:=i;
                    kt:=true;
                end
            else 
                if (tg < 0) then cuoi:=i;
        end;
    if (kt = false) then writeln(-1,' ',-1)
    else writeln(dau,' ',cuoi);
    readln;
end.