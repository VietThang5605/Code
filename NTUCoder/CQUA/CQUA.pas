var t1,t2,a,n,i:integer;
begin
    readln(n);
    for i:=1 to n do
    begin
        read(a);
        if a=100 then inc(t1) else inc(t2);
    end;
  	 if t1 mod 2 <> 0 then write('NO')
         else 
		if (t1=0) and (t2 mod 2<>0) then write('NO') 
		else write('YES');
end.