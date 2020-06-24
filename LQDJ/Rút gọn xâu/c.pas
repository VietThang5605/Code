var     st1,st2,tg,st3:ansistring;
        i,k,j,kk:longint;
begin
    readln(st1);
    st3:=st1;
    kk:=1;
    for i:= 1 to length(st1) div 2 do 
        begin
            st2:=st2+st1[i];
            if (length(st1) mod length(st2) = 0) then
                begin
                    k:=length(st1) div length(st2);
                    tg:=st2;
                    for j := 2 to k do 
                        tg:=tg+st2;
                    if (tg = st1) then 
                        if (length(st2) < length(st3)) then
                            begin
                                kk:=k;
                                st3:=st2;
                            end;
                end;
        end;
    writeln(kk,st3);
end.