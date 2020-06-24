uses    crt;
var     n,tg,s,i:qword;
begin
    clrscr;
    readln(n);
    tg:=trunc(sqrt(n));
    if (tg*tg = n) then writeln(tg)
    else
        begin
            i:=tg;
            while i <> 0 do
                begin
                    if (n mod (i*i)) = 0 then
                        begin
                            writeln(i);
                            halt;
                        end;
                    dec(i);
                end;
        end;
end.

