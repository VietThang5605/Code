uses    crt;
var     a,b:extended;
        c,d:dword;
begin
    clrscr;
    readln(a,b);
    c:=round(a);
    if (c < a) then inc(c);
    d:=trunc(b);
    writeln((d-c+1)*(d+c) div 2);
    readln;
end.