uses    crt;
var     st:ansistring;
        l,r,i,t,k,n,j,dem,max: longint;
begin
    clrscr;
    readln(n);
    while (n <> 0) do 
        begin
            readln(l,r,t,k);
            for i := l to r do 
                begin
                    str(i,st);
                    dem:=0;
                    for j := length(st) downto 1 do 
                        if (st[j] = '0') then dem:=dem+1
                        else break;
                    if (dem*t = k) then max:=max+1;
                end;
            n:=n-1;
        end;
    writeln(max); 
end.