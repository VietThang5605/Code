uses    crt;
var     a,b:array[0..10000] of int64;
        i,j,ii,n,s,min:longint;
begin
    clrscr;
    readln(n,s);
    min:=n+1;
    j:=1;
    for i := 1 to n do
        begin
            read(b[i]);
            a[i]:=b[i]+a[i-1];
            while (a[i]-a[j-1] >= s) do
                begin
                    if (i-j+1) <= min then
                        begin
                            min:=i-j+1;
                            ii:=i;
                        end;
                    inc(j);
                end;
        end;
    writeln(min);
    for i := ii-min+1 to ii do write(b[i],' ');
end.