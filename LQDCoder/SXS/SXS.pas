var     a:ansistring;
        i,j: longint;
        tg:char;
begin
    readln(a);
    for i := 1 to length(a)-1 do 
        for j := i+1 to length(a) do 
            if (a[i] in ['0'..'9']) and (a[j] in ['0'..'9']) then 
                if (a[i] > a[j]) then 
                    begin
                        tg:=a[i];
                        a[i]:=a[j];
                        a[j]:=tg;
                    end;
    writeln(a);
end.