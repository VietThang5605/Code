uses    crt; 
var     a:array[1..100000] of longint;
        i,n,max,k: longint;
begin
    clrscr;
    readln(n);
    for i := 1 to n do 
        begin
            read(a[i]);
            if (a[i] > max) then max:=a[i];
        end;
    writeln(max);
    for i := 1 to n do  
        if (a[i] = max) then 
            begin
                writeln(i);
                halt;
            end;
end.