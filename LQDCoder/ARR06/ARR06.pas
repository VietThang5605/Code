uses    crt;
var     a:array[1..10000] of longint;
        i,j,mid,tg,n: longint;
procedure sort(l,r:longint);
begin
    if l >= r then exit;
    i:=l;
    j:=r;
    mid:=a[(i+j) div 2];
    while i <= j do 
        begin
            while a[i] > mid do inc(i);
            while mid > a[j] do dec(j);
            if (i <= j) then 
                begin
                    tg:=a[i];
                    a[i]:=a[j];
                    a[j]:=tg;
                    inc(i);
                    dec(j);
                end;
        end;
    sort(i,r);
    sort(l,j);
end;
begin
    clrscr;
    readln(n);
    for i := 1 to n do read(a[i]);
    sort(1,n);
    for i := 1 to n do write(a[i],' ');
end.