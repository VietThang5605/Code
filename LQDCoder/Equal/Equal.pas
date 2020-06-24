var     a,b:array['a'..'z'] of boolean;
        i:longint;
        st1,st2:ansistring;
        ch:char;
begin
        readln(st1);
        readln(st2);
        for i := 1 to length(st1) do
                begin
                    a[st1[i]]:=true;
                    b[st2[i]]:=true;
                end;
        for ch := 'a' to 'z' do
                if (a[ch] = true) and (b[ch] = true) then
                        begin
                            writeln('YES');
                            halt;
                        end;
        writeln('NO');
end.