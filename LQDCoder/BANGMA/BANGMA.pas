uses    crt;
var     st1,st2,st3:ansistring;
        i,tg,tam,dem: longint;
begin
    clrscr;
    readln(st1);
    i:=1;
    while (i <= length(St1)) do 
        begin
            st2:=st1[i]+st1[i+1];
            val(st2,tg);
            dem:=2;
            if (tg < 97) then 
                begin
                    dem:=dem+1;
                    st2:=st2+st1[i+2];
                    val(st2,tg);
                end;
            st3:=st3+char(tg);
            i:=i+dem;
        end;
    writeln(st3);
end.