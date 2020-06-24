var     a,b: qword;
function ucln(n,m: qword):qword;
var r:qword;
begin
    while m <> 0 do 
        begin
            r:=n mod m;
            n:=m;
            m:=r;
        end;
    ucln:=n;
end;
begin
    read(a);
    read(b); 
    writeln((a div ucln(a,b))*(b div ucln(a,b)));
end.
    