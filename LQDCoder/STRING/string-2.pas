uses    crt;
var     st:ansistring;
        i,j:longint;
begin
    clrscr;
    readln(st);
    readln(st);
    i:=1;
    while (i <= length(st)) do
        begin
            if (st[i] in ['a'..'z']) then
                begin
                        write(st[i]);
                        inc(i);
                end
            else
                if (st[i] = '*') then
                    begin
                        for j := i+1 to length(st) do if (st[j] = '*') then break;
                        i:=j+1;
                    end
                else inc(i);
        end;
end.