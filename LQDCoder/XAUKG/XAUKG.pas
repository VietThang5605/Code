uses    crt;
var     st:ansistring;
        i,j:longint;
        kt:boolean;
begin
    clrscr;
    readln(st);
    i:=2;
    while i <= length(st) do 
        begin
            kt:=false;
            for j := i-1 downto 1 do 
                if st[j] > st[i] then 
                    begin
                        delete(st,i,1);
                        kt:=true;
                        break;
                    end;
            if (kt = false) then inc(i);
        end;
    writeln(length(St));
end.