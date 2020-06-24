uses    crt;
var     a:array[0..1000000] of int64;
        i,n,tg,j,dem,max,m: longint;
begin
    clrscr;
    readln(n,m);
    j:=1;
    for i := 1 to n do 
        begin
            read(a[i]);
            a[i]:=a[i]+a[i-1];
            {if (a[i]-a[j-1] > m) then 
                begin
                    max:=max+dem;
                    while a[i]-a[j-1] > m do 
                        begin
                            inc(j);
                            max:=max+i-j+1;
                        end;
                    dem:=0;
                end
            else inc(dem);}
        end;
    writeln(max);
end.