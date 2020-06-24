uses    crt;
var     a:Array[0..100000] of int64;
        i,j,n,t,tg1,tg2: longint;
begin
    clrscr;
    readln(n,t);
    for i := 1 to n do 
        begin
            readln(tg1,tg2);
            for j := 0 to tg1 div tg2 do a[j]:=a[j]+tg1;
        end;
    for i := 0 to t do writeln(a[i]);
end.