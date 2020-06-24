uses    crt;
var     st1,st2,st3,tg: ansistring;
        i,n,j,k: longint;
begin
    clrscr;
    readln(n);
    while (n <> 0) do 
        begin
            readln(st1);
            st3:=st1;
            st2:='';
            for j := 1 to length(st1) do 
                begin
                    st2:=st2+st1[j];
                    tg:=st2;
                    for k := 2 to (length(st1) div length(st2)) do tg:=tg+st2;
                    if (tg = st1) and (length(st2) < length(st3)) then
                        begin
                            st3:=st2;
                            break;
                        end;
                end;
            writeln(st3);
            dec(n);
        end;
end.

