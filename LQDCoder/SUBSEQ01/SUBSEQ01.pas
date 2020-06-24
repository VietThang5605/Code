uses    crt;
var     a:array[0..20000] of int64;
        i,n,j,s,dem: longint;
begin
    clrscr; 
    readln(n,s);
    j:=1;
    for i := 1 to n do
        begin
            read(a[i]);
            a[i]:=a[i]+a[i-1];
            if (a[i] - a[j-1] > s) then
                while a[i] - a[j-1] > s do inc(j)
            else inc(dem);
        end;
    writeln(dem);
end.