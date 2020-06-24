uses    crt;
var     a:array[0..9] of string;
        st1,st2,st3:ansistring;
        n,tg,i,j,k:longint;
begin
    clrscr;
    read(St3);
    st3:=st3+' ';
    j:=1;
    i:=-1;
            for k := 1 to length(st3) do
                if (st3[k] = ' ') then
                    begin
                        inc(i);
                        a[i]:=copy(st3,j,k-j);
                        j:=k+1;
                    end;
    readln(n);
    while n <> 0 do
        begin
            readln(st1);
            st2:='';
            for i := 1 to length(st1) do
                begin
                    val(st1[i],tg);
                    if a[tg] > st2 then st2:=a[tg];
                end;
            writeln(st2);
            dec(n);
        end;
    readln;
end.