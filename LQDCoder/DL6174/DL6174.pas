var     dem,n,i,j,tam,t1,t2: longint;
        st1,st2: string;
procedure max;
var tg:char;
begin
    str(n,st1);
    for i := 1 to length(st1)-1 do
        for j := i+1 to length(St1) do
            begin
                val(st1[i],t1);
                val(st1[j],t2);
                if t1 < t2 then
                    begin
                        tg:=st1[i];
                        st1[i]:=st1[j];
                        st1[j]:=tg;
                    end;
            end;
end;
procedure min;
var tg:char;
begin
    str(n,st2);
    for i := 1 to length(st2)-1 do
        for j := i+1 to length(St2) do
            begin
                val(st2[i],t1);
                val(st2[j],t2);
                if t1 > t2 then
                    begin
                        tg:=st2[i];
                        st2[i]:=st2[j];
                        st2[j]:=tg;
                    end;
            end;
end;
begin
    readln(n);
    {if n = 0 then
        begin
            writeln('0');
            halt;
        end
    else}
        begin
            dem:=1;
            while (n <> 6174) do
                begin
                    inc(Dem);
                    tam:=n;
                    max;
                    min;
                    val(st1,t1);
                    val(st2,t2);
                    n:=t1-t2;
                end;
            writeln(dem);
            writeln(tam);
        end;
end.

