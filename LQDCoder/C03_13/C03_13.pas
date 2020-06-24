uses    crt;
var     ch:char;
begin
    clrscr;
    readln(ch);
    writeln(char(ord(lowercase(ch))-1));
end.