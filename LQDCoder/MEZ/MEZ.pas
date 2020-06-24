uses    crt;
var     n,i: longint;
        tg,s:int64; 
begin
    clrscr;
    readln(n);
    s:=1;
    for i := 1 to n do 
        begin
            read(tg);
            s:=((s*tg) mod 1000000007);
        end;
    writeln(s);
    readln;
end.