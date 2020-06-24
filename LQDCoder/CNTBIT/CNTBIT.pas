uses    crt;
var     st:ansistring;
        n,i:longint;
begin
    clrscr;
    readln(n);
    while n <> 0 do 
        begin
            st:=char(48+(n mod 2)) + st;
            n:=n div 2;
        end;
    n:=0;
    for i := 1 to length(st) do
        if (st[i] = '1') then inc(n);
    writeln(n);
    readln;
end.