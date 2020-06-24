var     st1,st2,st3: ansistring;
        i,j,dem,p: longint;
begin
    readln(st1);
    i:=1;
        repeat
            dem:=0;
            for j := i to length(st1) do
                if (st1[j] = st1[j+1]) then inc(dem)
                else 
                    begin
                        p:=j+1;
                        break;
                    end;
            if (dem >= 1) then 
                begin
                    str(dem+1,st3);
                    st2:=st2+st3+st1[i]
                end
            else 
                for j := i to i+dem do st2:=st2+st1[j];
            i:=p;
        until (i > length(st1));
    writeln(st2);
end.
    