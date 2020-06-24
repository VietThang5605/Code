uses    crt;
var     st:ansistring;
        i,n: longint;
        kt:boolean;
begin
    clrscr;
    readln(n);
    while (n <> 0) do
        begin
            readln(st);
            kt:=true;
            for i := 1 to length(st) do
                case st[i] of
                    '1':if not ODD(i) then
                        begin
                            kt:=false;
                            break;
                        end;
                    '3':if not ODD(i) then
                        begin
                            kt:=false;
                            break;
                        end;
                    '5':if not ODD(i) then
                        begin
                            kt:=false;
                            break;
                        end;
                    '7':if not ODD(i) then
                        begin
                            kt:=false;
                            break;
                        end;
                    '9':if not ODD(i) then
                        begin
                            kt:=false;
                            break;
                        end;
                    '0':if ODD(i) then
                        begin
                            kt:=false;
                            break;
                        end;
                    '2':if ODD(i) then
                        begin
                            kt:=false;
                            break;
                        end;
                    '4':if ODD(i) then
                        begin
                            kt:=false;
                            break;
                        end;
                    '6':if ODD(i) then
                        begin
                            kt:=false;
                            break;
                        end;
                    '8':if ODD(i) then
                        begin
                            kt:=false;
                            break;
                        end;
                end;
            if (kt = true) then writeln('YES')
            else writeln('NO');
            dec(n);
        end;
end.

