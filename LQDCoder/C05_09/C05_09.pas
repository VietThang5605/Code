uses    crt;
var     st1,st2:ansistring;
        i,n:longint;
begin
    clrscr;
    readln(n);
    st2:='*';
    st1:='*';
    for i := 2 to n-1 do 
        begin
            st1:=st1+'*';
            st2:=st2+' ';
        end;
    st1:=st1+'*';
    st2:=st2+'*'; 
    writeln(st1);
    for i := 2 to n-1 do writeln(st2);
    writeln(st1);
    readln;
end.