uses    crt;
var     n,i,dem: longint;
        tong: int64;
begin
    clrscr;
    readln(n);
    for i := 1 to trunc(sqrt(n)) do 
        if (n mod i = 0) then 
            begin
                if i = n div i then
                    begin
                        inc(dem);
                        tong:=tong+i;
                    end
                else
                    begin
                        inc(dem,2);
                        tong:=tong+i+(n div i);
                    end;
            end;
    writeln(dem,' ',tong);
    readln;
end.