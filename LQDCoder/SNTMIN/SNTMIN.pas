uses    crt;
var     n,i: longint;
function kt(a: longint):boolean;
var j:longint;
begin
    if (a < 2) then exit(false);
    for j := 2 to trunc(sqrt(a)) do 
        if a mod j = 0 then exit(false);
    kt:=true;
end;
begin
    clrscr;
    readln(n);
    i:=n+1;
    while kt(i) <> true do inc(i);
    writeln(n);
end.