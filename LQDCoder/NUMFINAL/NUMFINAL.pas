uses    crt; 
var     a,n,i,tg:longint;
begin
    clrscr;
    readln(a,n);
    tg:=1;
    for i := 1 to n do 
        begin
            tg:=(tg*a) mod 10;
        end;
    writeln(tg);
end.