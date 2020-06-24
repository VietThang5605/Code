uses    crt;
var     st1,st2,st3,st4: ansistring;
        i,j,max,dem,t: longint;
begin
    clrscr;
    readln(t);
    while (t <> 0) do
        begin 
            readln(st1);
            readln(st2);
            for i := 1 to length(st1) do 
                begin
                    st3:='';
                    for j := i to length(st1) do 
                        begin
                            dem:=0;
                            st3:=st3+st1[j];
                            if pos(st3,st2) <> 0 then 
                                dem:=length(st3);
                            if (dem > max) then 
                                begin
                                    max:=dem;
                                    st4:=st3;
                                end;
                        end;
                end;
            writeln(length(st4));
            dec(t);
        end;
    readln;
end.

