uses    crt;
var     st1,st2:ansistring;
        i,j: longint;
begin
    clrscr;
    readln(st1);
    readln(st2);
    j:=1;
    for i := 1 to length(st1) do 
        begin
            if (st1[i] = st2[j]) then inc(j);
            if (j > length(St2)) then 
                begin
                    writeln('YES');
                    halt;
                end;
        end;
    writeln('NO');
end.