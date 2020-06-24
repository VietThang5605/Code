uses    crt;
var     a:int64;
Function kt(n:longint):boolean;
Var i:longint;
Begin
	If (n < 2) then exit(false);
	For I := 2 to trunc(sqrt(n)) do 
		If (n mod I = 0) then exit(false);
	Kt:=true;
End;
begin
    clrscr;
    readln(a);
    if kt(a) then writeln('YES')
    else writeln('NO');
end.