uses    crt;
var     a:array['a'..'z'] of byte;
        st:string;
        i,dem:byte;
        j:char;
begin
    clrscr;
    readln(st);
    dem:=1;
    for i := 1 to length(st) do 
        begin
            inc(a[st[i]]);
            if (a[st[i]] > 1) then
                begin
                        for j :='a' to 'z' do a[j] := 0;
                        inc(a[st[i]]); 
                        inc(dem);
                end;
        end;
    writeln(dem);
end.