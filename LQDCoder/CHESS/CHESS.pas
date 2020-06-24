uses    crt;
var     n,a,b,i: longint;
function ucln(x,y: longint):longint;
var r:longint;
begin
    while y <> 0 do 
        begin
            r:= x mod y;
            x:= y;
            y:= r;
        end;
    ucln:=x;
end;
begin
    clrscr;
    readln(n,a,b);
    if n mod ucln(a,b) <> 0 then
        begin
            writeln(-1);
            halt;
        end;
    i:= n div b;
    while i >= 0 do
        begin
            if ((n-(i*b)) mod a = 0) then
                begin
                   writeln((n-(i*b)) div a + i);
                   halt;
                end;
            dec(i);
        end;
    writeln(-1);
    readln;
end.