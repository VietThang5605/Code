uses    crt;
var     i,n,j,vt: longint;
        res: int64;
begin
    clrscr;
    readln(n);
    if n = 1 then writeln(1)
    else 
        begin
            res := 1;
            vt  := 1;
            for i := 2 to 5000 do 
                begin
                    res := (res div i + 1) * i;
                    inc(vt);
                    if vt = n then 
                        begin
                            writeln(res);
                            halt;
                        end;
                    for j := 1 to i-1 do 
                        begin
                            res := res + i;
                            inc(vt);
                            if (vt = n) then 
                            begin
                                writeln(res);
                                halt;
                            end;
                        end;
                end;
        end;
end.

