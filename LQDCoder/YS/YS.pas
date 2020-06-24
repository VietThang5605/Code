uses    crt; 
var     n,i,ucln,tg: longint;
function uc(x,y: longint):longint;
var r:longint;
begin
    while y <> 0 do 
        begin
            r:=x mod y;
            x:=y;
            y:=r;
        end;
    uc:=x;
end;
begin
    clrscr;
    readln(n);
    read(ucln);
    for i := 2 to n do 
        begin
            read(tg);
            ucln:=uc(ucln,tg);
        end;
    for i := 2 to ucln div 2 do 
        if (ucln mod i = 0) then 
            begin
                writeln(i);
                halt;
            end;
    if (ucln > 1) then writeln(ucln)
    else writeln('LN');
end.