uses    crt;
var     l,r,k: longint;
begin
    clrscr;
    readln(l,r,k);
    writeln((r div k) - ((l-1) div k));
end.