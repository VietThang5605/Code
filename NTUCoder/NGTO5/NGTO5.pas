uses    crt;
var     n,dem,i:longint;
function kt(a:longint):boolean;
var j:longint;
begin
    if (a < 2) then exit(false);
    for j := 2 to trunc(sqrt(n)) do 
        if (a mod j = 0) then exit(false);
    kt:=true;
end;
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
    readln(n);
    for i := 1 to n do 
        begin
            dem:=0;
            for k := 1 to n do 
                if ucln(k,n) = 1 then inc(dem);
            if kt(dem) = true then writeln()
        end;
end.