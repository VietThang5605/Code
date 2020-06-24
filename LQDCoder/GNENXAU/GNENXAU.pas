uses    crt;
var     st1,st2,st3:ansistring;
        i,tg,j:longint;
begin
    clrscr;
    readln(st1);
    i:=1;
    while i <= length(St1) do 
        begin
            st2:='';
            while (st1[i] in ['0'..'9']) do 
                begin
                    st2:=st2+st1[i];
                    inc(i);
                end;
            if (st2 = '') then st3:=st3+st1[i]
                else
                    begin
                        val(st2,tg);
                        for j := 1 to tg do st3:=st3+st1[i];
                    end;
            inc(i);
        end;
    writeln(st3);
end.