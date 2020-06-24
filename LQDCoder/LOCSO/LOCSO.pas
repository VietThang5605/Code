uses    crt;
var     st1,st2,st3:ansistring;
        i,j:integer;
begin
    clrscr;
    readln(st1);
    st1:=st1+'a';
    for i := 1 to length(st1) do
        if (st1[i] in ['0'..'9']) then st2:=st2+st1[i]
        else
            begin
                if (st2 <> '') then
                    begin
                        while (st2[1] = '0') do delete(st2,1,1);
                        if (length(st3) < length(st2)) then st3:=st2
                        else
                            if (length(st3) = length(st2)) and (st2 <> '') then
                            begin
                                for j := 1 to length(st2) do
                                    if (st2[j] > st3[j]) then
                                        begin
                                            st3:=st2;
                                            break;
                                        end;
                            end;
                    end;
                st2:='';
            end;
    writeln(st3);
end.