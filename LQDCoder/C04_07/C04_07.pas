uses    crt;
var     i,n,m,k: qword;
begin
        clrscr;
        readln(n,m,k);
        i:=m+k;
        i:=i mod n;
        if i = 0 then i:=n;
        writeln(i);
        readln;
end.