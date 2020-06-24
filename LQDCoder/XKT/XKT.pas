uses    crt;
var     st,tg:ansistring;
        i,d:longint;
function kt(a: ansistring): boolean;
var j: longint;
begin
    for j := 1 to length(a) div 2 do 
        if a[j] <> a[length(a)-j+1] then exit(false);
    kt:=true;
end;
begin
    clrscr;
    readln(st);
    for i := 1 to length(st)-1 do
        begin
            if kt(copy(st,i+1,length(st)-i)+copy(st,1,i)) = true then
                begin
                    writeln(i);
                    halt;
                end;
        end;
    writeln(0);
end.