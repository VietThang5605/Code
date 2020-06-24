var     a:array[0..100] of int64;
        i,n,h,l,r: longint;
        max:int64;
begin
    readln(n,h);
    for i := 1 to n do 
        begin
            read(a[i]);
            a[i]:=a[i]+a[i-1];
        end;
    for i := 1 to n do 
        begin
            l:=i - h div 3;
            if l < 1 then l:=1;
            r:=i + h div 3;
            if (r > n) then r:=n;
            if (a[r]-a[l-1] > max) then max:=a[r]-a[l-1];
        end;
    writeln(max);
end.   