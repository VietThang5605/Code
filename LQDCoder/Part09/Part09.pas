uses    crt; 
var     st:String;
        i:byte;
        tong:byte;
begin
    clrscr;
    readln(st);
    delete(st,2,1);
    for i := 1 to 2 do 
        case st[i] of 
            'x':tong:=tong+1;
            '2':tong:=tong+2;
            '3':tong:=tong+3;
            '4':tong:=tong+4;
            '5':tong:=tong+5;
            '6':tong:=tong+6;
            '7':tong:=tong+7;
            '8':tong:=tong+8;
            '9':tong:=tong+9;
            'J':tong:=tong+10;
            'Q':tong:=tong+10;
            'K':tong:=tong+10;
        end;
    if (tong = 20) then 
        begin
            writeln('x');
            halt;
        end;
    tong:=(10-(tong mod 10));
    if (tong = 10) then writeln('J')
    else
        if (tong = 1) then writeln('x')
        else writeln(tong);
end.