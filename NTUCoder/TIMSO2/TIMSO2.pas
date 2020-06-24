uses    crt;
var s,t: string; n: longint;i: byte;
begin
    clrscr;
    readln(n);
    if (n >= 1) and (n < 10) then 
    	begin 
    		write(n); 
    		halt; 
    	end;
    if (n = 0) then s:='10' 
    else
        for i:= 9 downto 2 do
            begin
                str(i,t);
                while (n mod i = 0) do 
                    begin 
                        n:=n div i; 
                        s:=t+s; 
                    end; 
            end;
    if (n <= 1) then write(s)
    else write(-1);
end.