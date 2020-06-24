var     n,tg1,tg2,s:longint;
begin
    readln(n);
    while n >= 10 do
        begin
            s:=s+(n div 10)*10;
            n:=n-(n div 10)*10+(n div 10)*3;
        end;
    s:=s+n;
    writeln(s);
end.