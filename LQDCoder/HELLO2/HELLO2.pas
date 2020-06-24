uses    crt;
var     st1,st2:ansistring;
        i,j,n:longint;
        kt:boolean;
begin
    clrscr;
    readln(n);
    readln(st2);
    while n <> 0 do 
        begin
            readln(st1);
            j:=1;
            kt:=false;
            for i := 1 to length(St1) do 
                begin
                    if (st1[i] = st2[j]) then inc(j);
                    if (j > length(st2)) then   
                        begin
                            kt:=true;
                            break;
                        end;
                end;
            if (kt = false) then writeln('NO')
            else writeln('YES');
            dec(n);
        end;
end.