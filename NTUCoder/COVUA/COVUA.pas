uses    crt;
var     st1,st2:string;
        i,n:byte;
begin
    clrscr;
    readln(n);
    for i := 1 to n do 
        if ODD(i) then 
            begin
                st1:=st1+'W';
                st2:=st2+'B';
            end
        else 
            begin
                st1:=st1+'B';
                st2:=st2+'W';
            end;
    for i := 1 to n do 
        if ODD(i) then writeln(st1)
        else writeln(st2);
    readln;
end.