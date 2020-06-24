uses    crt;
var     n,k: longint;
begin
    clrscr;
    readln(n,k);
    if (n <= k) then writeln('Alice will win')
    else 
        if (n mod (k+1) = 0) then writeln('Bob will win')
        else 
            writeln('Alice will win');
    readln;
end.