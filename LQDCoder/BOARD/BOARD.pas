uses    crt;
var     hl,hn:array['a'..'z'] of longint;
        i,n,m,j,tong,tam: longint;
        ch,tg:char;
begin
    clrscr;
    readln(n,m);
    for i := 1 to n do
        begin
            for j := 1 to m do
                begin
                    read(tg);
                    inc(hl[tg]);
                end;
            readln;
        end;
    for i := 1 to n do
        begin
            for j := 1 to m do
                begin
                    read(tg);
                    inc(hn[tg]);
                end;
            readln;
        end;
    for ch := 'a' to 'z' do
        begin
            tam:=hl[ch]-hn[ch];
            if (tam > 0) then tong:=tong+tam;
        end;
    writeln(tong);
end.