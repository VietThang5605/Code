uses    crt;
var     st1,st2:ansistring;
        i: longint;
        a:array['A'..'Z'] of longint;
begin
    clrscr;
    readln(st1);
    a['L']:=1;
    a['T']:=2;
    a['N']:=3;
    for i := 1 to length(st1) do 
        case st1[i] of 
            'L':st2:=st2+st1[i];
            'N':st2:=st2+st1[i];
            'T': st2:=st2+st1[i];
        end;
    i:=2;
    while i < length(st2) do 
        begin   
            if (a[st2[i]] < a[st2[i-1]]) and (a[st2[i]] < a[st2[i+1]]) then delete(st2,i,1)
            else 
                if (a[st2[i]] > a[st2[i-1]]) and (a[st2[i]] > a[st2[i+1]]) then delete(st2,i,1)
                else 
                    inc(i);
        end;
    writeln(length(st2));
end.