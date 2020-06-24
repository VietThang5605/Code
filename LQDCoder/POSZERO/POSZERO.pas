var     ch:char;    
        dem:longint;
begin
    repeat
        read(ch);
        if (ch = '0') then inc(dem);
    until (ch = #49);
    write(dem);
    readln;
end.


