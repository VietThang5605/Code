uses    crt;
var     a:array[1..400] of longint;
        i,n,j,tg:longint;
        s:int64;
begin
    clrscr;
    read(n);
    for i := 1 to 4*n do read(a[i]);
    for i := 1 to 4*n-1 do 
        for j := i+1 to 4*n do 
            if (a[i] > a[j]) then 
                begin
                    tg:=a[i];
                    a[i]:=a[j];
                    a[j]:=tg;
                end;
    s:=a[1]*a[4*n];
    for i := 1 to 2*n do 
        if a[i]*a[4*n-i+1] <> s then 
            begin
                writeln('NO');
                halt;
            end;
    writeln('YES');
    readln;
end.