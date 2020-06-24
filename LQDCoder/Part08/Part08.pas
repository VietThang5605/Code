uses    crt;
var     i,n: longint;
        s,tg:qword;
begin
    clrscr;
    read(n);
    for i := 1 to n do 
        begin
            read(tg);
            s:=((s mod 1000000007) + (tg mod 1000000007)) mod 1000000007;
        end;
    writeln(s);
end.