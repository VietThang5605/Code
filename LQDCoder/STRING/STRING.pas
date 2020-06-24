uses    crt;
var     n,i:longint;
        ch:char;
        kt:boolean;
begin
    clrscr;
    readln(n);
    for i := 1 to n do
        begin
            read(ch);
            if (kt = false) then
                begin
                    if (ch in ['a'..'z']) then write(ch)
                    else
                        if (ch = '*') then
                            kt:=true;
                end
            else
                if (ch = '*') then
                    kt:=false;
        end;
end.