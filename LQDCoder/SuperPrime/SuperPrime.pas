uses    crt; 
var     n:longint;
function kt(a:longint):boolean;
var i:longint;
begin
    if (a < 2) then exit(false);
    for i := 2 to trunc(sqrt(a)) do 
        if a mod i = 0 then exit(false);
    kt:=true;
end;
begin
    clrscr;
    readln(n);
    while n <> 0 do 
        begin
            if kt(n) = false then 
                begin
                    writeln('KHONG');
                    halt;
                end;
            n:=n div 10;
        end;
    writeln('PHAI');
    readln;
end.