uses    crt;
var     tong,chan:longint;
begin
    clrscr;
    readln(tong,chan);
    if (chan mod 2 <> 0) then writeln('-1')
    else 
        begin
            if (tong*2 > chan) then writeln('-1')
            else
                if (tong*4 < chan) then writeln('-1')
                else 
                    writeln(tong - (chan-(tong*2)) div 2,' ',(chan-(tong*2)) div 2);
        end;
end.