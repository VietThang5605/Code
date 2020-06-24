uses    crt;
var     i,n:longint;
        st:ansistring;
begin
    clrscr;
    readln(n);
    st:='*';
    writeln(st);
    for i := 2 to n do 
        begin
            st:=st+'*'+'*';
            writeln(st);
        end;
    readln;
end.