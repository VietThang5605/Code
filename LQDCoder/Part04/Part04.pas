uses    crt;
var     i,s,tam,n,max,dem: int64;
        st,tg,st2:ansistring;
begin
    clrscr;
    readln(st);
    readln(st);
    st:=st+' ';
    i:=1;
    while (i <= length(st)) do 
        begin
            if (st[i] = ' ') and (st[i-1] in ['0'..'9']) then inc(dem);
            if (st[i] in ['0'..'9']) then tg:=tg+st[i]
            else 
                begin
                    if (tg <> '') then 
                        begin
                            val(tg,tam);
                            s:=s+tam;
                        end;
                    tg:='';
                end;
            inc(i);
        end;
    writeln(s-dem+1);
end.