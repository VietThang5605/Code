uses    crt;
var     st,st2:string;
        n:int64;
begin
    clrscr;
    readln(N);
    st:='CHAO_MUNG_CAC_THAY_CO_VA_CAC_EM.';
    n:=n mod length(st);
    st2:=copy(st,1,n);
    delete(st,1,n);
    st:=st+st2;
    writeln(st);
end.