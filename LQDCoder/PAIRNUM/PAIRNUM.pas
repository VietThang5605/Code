uses    crt;
var     a:array[1..100000] of longint;
        n,i,tg,max: longint;
        s:qword;
begin
    clrscr;
    readln(n);
    for i := 1 to n do 
        begin
            read(tg);
            if (tg > max) then max:=tg;
            inc(a[tg]);
        end;
    for i := 1 to max do s:=s + ((a[i]*(a[i]+1)) div 2);
    writeln(s);
    readln;
end.