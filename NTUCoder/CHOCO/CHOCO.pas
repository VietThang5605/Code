uses    crt;
var     a,b:byte;
begin
    clrscr;
    readln(a,b);
    if ODD(a*b-1) then writeln(1)
    else writeln(2);
end.