uses    crt;
var     chan,tong: int64;
begin
    clrscr;
    readln(tong,chan);
    if (tong*2 > chan) or (tong*4 < chan) or ODD(chan)then writeln(-1)
    else
        writeln((tong*4-chan) div 2,' ',(chan-tong*2) div 2);
    readln;
end.