
var     a,b:array[0..20000] of int64;
        i,j,max,s,n,ii: longint;
begin
    readln(n,s);
    j:=1;
    for i := 1 to n do 
        begin
            read(b[i]);
            a[i]:=b[i]+a[i-1];
            while (a[i]-a[j-1] > s) do inc(j);
            if i-j+1 > max then 
                begin
                    max:=i-j+1;
                    ii:=i;
                end;
        end;
    writeln(max);
    for i := ii-max+1 to ii do write(b[i],' ');
end.
    
