uses    crt;
var     i,a,b,ucln,mcd: longint;
function uc(n,m: longint):longint;
var     r: longint;
begin
    while m <> 0 do 
        begin
            r:= n mod m;
            n:=m;
            m:=r;
        end;
    uc:=n;
end;
function tong(a: longint):longint;
var s:longint;
begin
    s:=0;
    while a <> 0 do
        begin
            s:=s+a mod 10;
            a:=a div 10;
        end;
    tong:=s;
end;
begin
    clrscr;
    readln(a,b);
    ucln:=uc(a,b);
    for i := 1 to trunc(sqrt(ucln)) do 
        if (ucln mod i = 0) then
            begin
                if tong(i) > tong(mcd) then mcd:=i;
                if tong(ucln div i) > tong(mcd) then mcd:=ucln div i;
            end;
    writeln(tong(mcd));
end.