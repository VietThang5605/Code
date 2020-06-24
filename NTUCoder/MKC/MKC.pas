var     st:string;
        i,n,tong: integer;
begin
    readln(St);
    for i := length(st) downto 1 do
        begin
            val(st[i],n);
            tong:=tong + n mod 10;
        end;
    writeln(tong);
end.