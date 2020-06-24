uses    crt;
var     n:byte;
begin
    clrscr;
    readln(n);
    if not ODD(n div 7) then 
        writeln(7-(n mod 7),' ',n mod 7)
    else
        writeln(n mod 7,' ',7-(n mod 7));
    readln;
end.