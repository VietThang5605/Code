uses    crt;
var     a:array[1..100000] of longint;
        i,n,min: longint;
begin
    clrscr;
    readln(n);
    min:=1000000001;
    for i := 1 to n do 
        begin
            read(a[i]);
            if (a[i] < min) then min:=a[i];
        end;
    writeln(min);
    for i := 1 to n do  
        if (a[i] = min) then write(i,' ');
end.