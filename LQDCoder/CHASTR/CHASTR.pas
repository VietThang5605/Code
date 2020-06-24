uses    crt;
var     st:ansistring;
        i,dem:longint;
begin
    clrscr;
    readln(st);
    st:=st+'0';
    for i := 2 to length(st)-1 do
        if (st[i] = '1') and (st[i-1] = '1') then 
            begin
                inc(dem);
                st[i]:='0';
                st[i-1]:='0';
            end
        else 
            if (st[i] = '1') and (st[i-1] = '0') and (st[i+1] = '0') then 
                begin
                    inc(dem);
                    st[i]:='0';
                end;
    for i := 1 to length(st)-1 do
        if st[i] = '1' then
                begin
                    writeln(-1);
                    halt;
                end;
    writeln(dem);
end.