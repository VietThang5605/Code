uses    crt;
var     a,m,j,i,max,dem,k,l,n: dword;
        kt: boolean;
        f,t: text;
begin
        clrscr;
        readln(n);
    while n <> 0 do
    begin
        readln(m);
        kt:=false;
        max:=trunc(sqrt(m*8+1)+1) div 2;
        dem:=0;
        for i := 2 to max-1 do
            if (m - (i*(i-1) div 2)) mod i = 0 then
                begin
                    kt:=true;
                    write(m,' = ');
                    a:=(m - (i*(i-1) div 2)) div i;
                    for j := a to a+i-2 do
                        write(j,' + ');
                    writeln(j+1);
                    break;
                end;
        if (kt = false) then writeln(-1)
        dec(n);
    end;
end.