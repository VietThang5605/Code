var     a:array[1..100000] of longint;
        i,n,tg,s,j,k:longint;
begin
    readln(n,k);
    read(a[1]);
    for i := 2 to n do 
        begin
            read(tg);
            a[i]:=tg+a[i-1];
            for j := 1 to i-1 do 
                begin
                    if (a[i] >= k) then 
                        if (a[i] div (i-j+1) > s) then s:=a[i] div (i-j+1);
                end;
        end;
    writeln(s);
end.