var     a:array[1..10000] of longint;
        mid,tg:longint;
        i,j,n,k:integer;
procedure sx(l,r:longint);
begin
    i:=l;
    j:=r;
    mid:=a[(i+j) div 2];
    repeat
        while a[i] < mid do inc(i);
        while mid < a[j] do dec(j);
        if (i <= j) then
            begin
                tg:=a[i];
                a[i]:=a[j];
                a[j]:=tg;
                inc(i);
                dec(j);
            end;
    until (i > j);
    if i < r then sx(i,r);
    if l < j then sx(l,j);
end;
begin
    readln(n,k);
    for i := 1 to n do read(a[i]);
    sx(1,n);
    mid:=1;
    writeln(a[k]);
end.