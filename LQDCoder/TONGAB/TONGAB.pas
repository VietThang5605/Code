var     st1,st2,st3,st4:ansistring;
        i,tam,nho,x,y: longint;
procedure cong;
begin
    while length(st1) < length(st2) do st1:='0'+st1;
    while length(st1) > length(st2) do st2:='0'+st2;
    for i := length(st1) downto 2 do
        begin
            val(st1[i],x);
            val(st2[i],y);
            tam:=x+y+nho;
            str(tam mod 10,st4);
            st3:=st4+st3;
            if tam >= 10 then nho:=1 else nho:=0;
        end;
    val(st1[1],x);
    val(st2[1],y);
    str(x+y+nho,st4); 
    st3:=st4+st3;
    while (st3[1] = '0') and (length(st3) > 1) do delete(st3,1,1);
end;
begin
    readln(st1);
    readln(st2);
    cong;
    writeln(st3);
end.
    