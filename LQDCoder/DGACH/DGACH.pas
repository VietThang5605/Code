uses    crt; 
var     n,i: longint;
begin
    clrscr;
    readln(n);
    i:=1;
    while n > 0 do 
        begin
            n:=n-i;
            if n <= 0 then 
                begin
                    writeln('Patlu');
                    halt;
                end;
            n:=n-2*i;
            if n <= 0 then 
                begin
                    writeln('Motu');
                    halt;
                end;
            inc(i);
        end;
end.