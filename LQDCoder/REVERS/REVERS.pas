var     st,tg:ansistring;
        i,n,t: longint;
        kt:boolean;
begin
    readln(t);
    while (t <> 0) do 
        begin
            readln(st);
            tg:='';
            kt:=true;
            for i := 1 to length(st) do 
                begin
                    if upcase(st[i]) in ['A'..'C'] then tg:=tg+'2';
                    if upcase(st[i]) in ['D'..'F'] then tg:=tg+'3';
                    if upcase(st[i]) in ['G'..'I'] then tg:=tg+'4';
                    if upcase(st[i]) in ['J'..'L'] then tg:=tg+'5';
                    if upcase(st[i]) in ['M'..'O'] then tg:=tg+'6';
                    if upcase(st[i]) in ['P'..'S'] then tg:=tg+'7';
                    if upcase(st[i]) in ['T'..'V'] then tg:=tg+'8';
                    if upcase(st[i]) in ['W'..'Z'] then tg:=tg+'9';
                end;
            for i := 1 to length(tg) div 2 do 
                if (tg[i] <> tg[length(tg)-i+1]) then
                    begin
                        kt:=false;
                        break;
                    end;
            if (kt = false) then writeln('NO')
            else writeln('YES');
            dec(t);
        end;
end.