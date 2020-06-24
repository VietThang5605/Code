uses    crt;
var     i,n,dem,max,vt: longint;   
        a:array[1..1000000] of longint;
begin
    clrscr;
    readln(n);
    for i := 1 to n do 
        begin
            read(a[i]);
            if not ODD(a[i]) then inc(dem)
            else 
                begin
                    if (dem > max) then 
                        begin
                            max:=dem;
                            vt:=i-1;
                        end;
                    dem:=0;
                end;
        end;
    if (dem > max) then 
        begin
            max:=dem;
            vt:=i;
        end;
    writeln(max);
    for i := vt-max+1 to vt do write(a[i],' ');
end.