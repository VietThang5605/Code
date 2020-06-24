uses    crt;
var     st1,st2,st3,st4: ansistring;
        i,n: integer;
begin
    clrscr;
    readln(st1);
    readln(st2);
    for i := length(st1) downto 1 do
        begin
            st3:=st1[i]+st3;
            if pos(st3,st2) = 1 then st4:=st3;
        end;
    writeln(length(st1)+length(st2)-length(st4));
    readln;
end.