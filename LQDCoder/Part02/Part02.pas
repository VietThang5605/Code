uses    crt;
var     i:byte;
begin
    randomize;
    i:=random(2);
    if i=1 then writeln('right')
    else writeln('left');
end.