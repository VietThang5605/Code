uses    crt;
var     st1,st2:ansistring;
        i,dem,max:longint;
begin
    clrscr;
    readln(St1);
    for i := 1 to length(St1) do
        if pos(st1[i],st2) = 0 then
            begin
                inc(dem);
                st2:=st2+st1[i];
            end
        else 
            begin
                st2:='';
                if (dem > max) then max:=dem;
                dem:=1;
            end;
    if (dem > max) then max:=dem;
    writeln(max);        
end.