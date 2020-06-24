uses    crt; 
var     n,dem:longint;
begin
    clrscr;
    readln(n);
    while (n <> 0) do 
        begin
            n:=n div 5;
            dem:=dem+n;
        end;
    writeln(dem);
    readln;
end.