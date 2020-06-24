uses    crt;
var     a:array[0..20000] of int64;
        b:array[1..20000] of longint;
        i,n,j,s,k,ii,jj,max: longint;
begin
    clrscr;
    readln(n,s);
    j:=1;
    max:=n;
    for i := 1 to n do
        begin
            read(b[i]);
            a[i]:=b[i]+a[i-1];
            if a[i]-a[j-1] >= s then
                begin
                    while a[i]-a[j-1] >= s do inc(j);
                    if i-j+2 <= max then
                        begin
                            jj:=j-1;
                            ii:=i;
                            max:=i-j+2;
                        end;
                end;
        end;
    writeln(max);
    for k := jj to ii do write(b[k],' ');
end.
    