uses    crt;
var     n,k: longint;
function ucln(a,b: longint):longint;
var r:longint;
begin
    while b <> 0 do
        begin
            r:=a mod b;
            a:=b;
            b:=r;
        end;
    ucln:=a;
end;
begin
    clrscr;
    readln(n,k);
    if ODD(k div ucln(n,k)) then writeln('YES')
    else writeln('NO');
end.

