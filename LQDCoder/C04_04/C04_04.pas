uses    crt;
var     a,b,c:int64;
begin
    clrscr;
    readln(a,b,c);
    if (a*a+b*b = c*c) or (c*c+b*b = c*a) or (a*a+c*c = b*b) then writeln('YES')
    else writeln('NO');
end.