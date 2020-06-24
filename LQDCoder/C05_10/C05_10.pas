uses    crt;
var     n,m,i: longint;
        st1,st2:ansistring;
begin
    clrscr;
    readln(n,m);
    st1:='*';
    st2:='*';
    for i := 2 to m-1 do
        begin
            st1:=st1+'*';
            st2:=st2+' ';
        end;
    st1:=st1+'*';
    st2:=st2+'*';
    writeln(st1);
    for i := 2 to n-1 do writeln(st2);
    writeln(st1);
end.