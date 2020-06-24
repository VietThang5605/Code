uses    crt;
var     st1,st2:ansistring;
        i: longint;
        a,b:array['a'..'z'] of longint;
        ch: char;
begin
    clrscr;
    readln(st1);
    readln(st2);
    for i := 1 to length(st1) do inc(a[st1[i]]);
    for i := 1 to length(st2) do inc(b[st2[i]]);
    i:=0;
    for ch := 'a' to 'z' do 
        begin
            if a[ch] = 0 then i:=i+b[ch]
            else 
                if b[ch] = 0 then i:=i+a[ch];
        end;
    writeln(i);
end.