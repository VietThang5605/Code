uses    crt;
var     h,p,s:byte;
begin
    clrscr; 
    readln(h,p,s);
    inc(s);
    if (s > 59) then
        begin
            s:=0;
            inc(p);
            if (p > 59) then
                begin
                    p:=0;
                    inc(h);
                    if (h > 23) then h:=0;
                end;
        end;
    writeln(h,' ',p,' ',s);
end.