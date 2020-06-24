uses    crt;
var     t,l,r: int64;
begin
    clrscr;
    readln(t);
    while (t <> 0) do
        begin
            readln(l,r);
            writeln((r div 12)-((l-1) div 12)+((r div 30)-((l-1) div 30))-2*((r div 60)-((l-1) div 60))); 
            dec(t);
        end;
end.
