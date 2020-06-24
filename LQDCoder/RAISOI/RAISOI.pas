uses    crt;
var     a:array[1..100] of int64;
        i,j,n,tg,max: longint;
begin
    clrscr;
    readln(n);
    for i := 1 to n do read(a[i]);
    for i := 1 to n do 
        begin
            tg:=i;
            j:=a[i] mod n;
            while (j <> 0) do 
                begin
                    tg:=tg-1;
                    if (tg < 1) then tg:=n;
                    dec(j);
                end;
            tg:=tg-1;
            if (tg < 1) then tg:=n;
            if (a[tg]+a[i] div n > max) then max:=a[tg]+a[i] div n;
            tg:=i;
            j:=a[i] mod n;
            while (j <> 0) do 
                begin
                    tg:=tg+1;
                    if (tg > n) then tg:=1;
                    dec(j);
                end;
            tg:=tg+1;
            if (tg > n) then tg:=1;
            if (a[tg]+a[i] div n > max) then max:=a[tg]+a[i] div n;
        end;
    writeln(max);
end.