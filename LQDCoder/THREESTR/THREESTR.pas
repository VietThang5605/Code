uses    crt;
var     a,b,c: string;
        t,i: byte;
        kt:boolean;
begin
    clrscr;
    readln(t);
    while t <> 0 do 
        begin
            kt:=true;
            readln(a); readln(c); readln(c);
            for i := 1 to length(a) do 
                if a[i] = b[i] then 
                    begin
                        kt:=false;
                        break;
                    end
                else 
                    if (a[i] = c[i]) or (b[i] = c[i]) then continue
                    else 
                        begin
                            kt:=false;
                            break;
                        end;
            if (kt = true) then writeln('YES')
            else writeln('NO');
            dec(t);
        end;
end.