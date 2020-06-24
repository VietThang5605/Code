uses    crt;
var     a:array[1..20] of byte;
        n,i,j,dem: byte;
        kt: boolean;
begin
    clrscr;
    readln(n);
    for i := 1 to n do write(a[i]);
    writeln;
    i:=n;
    while i >= 1 do
        begin
            kt:=false;
            if a[i] = 0 then
                begin
                    kt:= true;
                    a[i]:=1;
                    for j := i+1 to n do a[j]:=0;
                    if kt = true then
                        begin
                            for j := 1 to n do write(a[j]);
                            writeln;
                        end;
                end;
            if kt = true then i := n
            else i := i-1;
        end;
end.

