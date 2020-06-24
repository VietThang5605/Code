uses    crt;
var     a,b:array[1..100] of longint;
        i,n,dem: longint;
        st1,st2:string;
begin
    clrscr;
    readln(n);
    for i := 1 to n do 
        begin
            read(a[i]);
            inc(b[a[i]]);
            if (b[a[i]] mod 3 = 0) then
                begin
                    inc(dem);
                    str(a[i],st2);
                    st1:=st1+st2+' ';
                end;
        end;
    writeln(dem);
    writeln(st1);
end.