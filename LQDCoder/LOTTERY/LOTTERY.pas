uses    crt;
var     a,d:array[1..100000] of longint;
        i,j,k,n,mid,dem,min,tg,vt: longint;
        s,c,b:int64;
procedure sort(l,r: longint);
begin
    if l >= r then exit;
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

                tg:=d[i];
                d[i]:=d[j];
                d[j]:=tg;

                inc(i);
                dec(j);
            end;
    until (i > j);
    sort(i,r);
    sort(l,j);
end;
begin
    clrscr;
    readln(n,c,b);
    for i := 1 to n do
        begin
            read(a[i]);
            d[i]:=i;
        end;
    sort(1,n);
    dem:=1;
    s:=c*n;
    min:=n+1;
    for i := 2 to n do
        begin
            if a[i] = a[i-1] then inc(dem)
            else
                begin
                    if (dem < min) then
                        begin
                            min:=dem;
                            vt:=i-1;
                        end;
                    dem:=1;
                end;
        end;
    if (dem < min) then
        begin
            min:=dem;
            vt:=i;
        end;
    writeln(s-b*min,' ',min);
    j:=0;
    for i :=vt-min+1 to vt do
        begin
            inc(j);
            a[j]:=d[i];
        end;
    b:=j;
    sort(1,j);
    for i := 1 to b do write(a[i],' ');
end.