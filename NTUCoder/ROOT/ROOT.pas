uses    crt;  
var     n,t,i,tg,j:longint;
begin
    clrscr;
    readln(t);
    for i := 1 to t do
        begin
            readln(n);
            tg:=trunc(sqrt(n));
            for j := tg downto 1 do
                begin
                    if (j*j*(n div (j*j)) = n) then
                        begin
                            writeln(j,' ',n div (j*j));
                            break;
                        end;
                end;
        end;
    readln;
end.