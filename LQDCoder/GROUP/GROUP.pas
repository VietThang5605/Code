uses    crt; 
var     a:array[1..100000] of longint;
        i,j,mid,n,t,k,tg,dem:longint;
procedure sort(l,r: longint);
begin
    if l >= r then exit;
    i:=l;
    j:=r;
    mid:=a[(i+j) div 2];
    repeat
        while a[i] < mid do inc(i);
        while mid < a[j] do dec(j);
        if i <= j then 
            begin
                tg:=a[i];
                a[i]:=a[j];
                a[j]:=tg;
                inc(i);
                dec(j);
            end;
    until (i > j);
    sort(i,r);
    sort(l,j);
end;
begin
    clrscr;
    readln(t);
    while t <> 0 do     
        begin
            dem:=1;
            readln(n,k);
            for i := 1 to n do read(a[i]);
            sort(1,n);
            for i := 2 to n do if a[i]-a[i-1] > k then inc(dem);
            writeln(dem);
            dec(t);
        end;
end.