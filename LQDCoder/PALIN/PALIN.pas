var     st1,st2,st3:ansistring;
        i,k: longint;
function kt(st: ansistring):boolean;
var    j:longint;
begin
    for j := 1 to length(st) div 2 do
        if (st[j] <> st[length(st)-j+1]) then exit(false);
    kt:=true;
end;
begin
    readln(k);
    readln(St1);
    st2:=copy(st1,1,k);
    i:=k+1;
    while (kt(st2) = false) and (i <= length(st1)) do 
        begin
            delete(st2,1,1);
            st2:=st2+st1[i];
            i:=i+1;
        end;
    if (kt(st2) = true) then st3:=st2;
    if (st3 = '') then writeln('-1')
    else 
        begin
            while (i <= length(st1)) do 
                begin
                    delete(st2,1,1);
                    st2:=st2+st1[i];
                    i:=i+1;
                    if (kt(st2) = true) then
                        if (st2 < st3) then st3:=st2;
                end;
            writeln(St3);
        end;
end.