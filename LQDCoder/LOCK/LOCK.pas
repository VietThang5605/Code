uses    crt;
var     st,st2:ansistring;
        i,n,j:integer;
        max:char;
        kt:boolean;
begin
    clrscr;
    readln(n);
    readln(st);
    for i := 1 to n do
        begin
            if (st[i] > max) then max:=st[i];
            if (st[i] = '0') then kt:=true;
        end;
    if (kt = true) then
        begin
            while (st[1] <> '0') do
                begin
                    st2:=copy(st,n,1);
                    delete(st,n,1);
                    st:=st2+st;
                end;
            writeln(st);
        end
    else
        begin
            val(max,j);
            j:=10-j;
            for i := 1 to n do
                begin
                    st[i]:=chr(ord(st[i])+9);
                    if (st[i] > '9') then st[i]:='0';
                end;
            while (st[1] <> '0') do 
                begin
                    st2:=copy(st,n,1);
                    delete(st,n,1);
                    st:=st2+st;
                end;
            writeln(st);
        end;
end.

