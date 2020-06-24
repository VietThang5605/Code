uses    crt; 
var     a:array[1..100000] of longint;
        i,n,max,k: longint;
begin
    clrscr;
    readln(n,k);
    for i := 1 to n do 
        begin
            read(a[i]);
            if (a[i] > max) and (a[i] < k) then max:=a[i];
        end;
    writeln(max);
    for i := 1 to n do  
        if (a[i] = max) then write(i,' ');
end.