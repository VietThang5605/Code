uses    crt;
var     a,b:array[1..1000000] of longint;
        kt:array[1..1000000] of boolean;
        i,n,m,j,tg,max,dem: longint;
        kt1:boolean; 
begin
    clrscr;
    readln(n);
    for i := 1 to n do
        begin
            readln(m);
            for j := 1 to m do
                begin
                    read(tg);
                    if (kt[tg] = kt1) then
                        begin
                            inc(b[tg]);
                            if (kt[tg] = true) then kt[tg]:=false
                            else kt[tg]:=true;
                        end;
                    if (tg > max) then max:=tg;
                    inc(a[tg]);
                end;
            if (kt1 = true) then kt1:=false
            else kt1:=true;
        end;
    for i := 1 to max do
        begin
            if b[i] = n then write(i,' ');
        end;
    writeln;
    for i := 1 to max do 
        if (a[i] > 0) then write(i,' ');
    readln;
end.