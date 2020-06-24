uses    crt;
var     a:array[0..20000] of int64;
        b:array[1..20000] of longint;
        i,n,j,s,k,ii,jj,jjj,iii,max: longint;
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
            while a[i]-a[j-1] >= s do
                begin
                        ii:=i;
                        jj:=j;
                        inc(j);
                end;
            if ii-jj+1 <= max then
                begin
                    jjj:=jj;
                    iii:=ii;
                    max:=ii-jj+1;
                end;
                end;
        end;
    writeln(max);
    for k := jjj to iii do write(b[k],' ');
    readln;
end.