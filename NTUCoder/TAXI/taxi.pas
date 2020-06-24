var a:array[1..4] of longint;
    n,dem:longint;
procedure doc;
var     i,k:longint;
begin
  dem:=0;
  readln(n);
  for i:=1 to 4 do a[i]:=0;
  for i:=1 to n do
    begin
      read(k);
      a[k]:=a[k]+1;
    end;
end;
begin
 doc;
 while (a[3]>0) and (a[1]>0) do
   begin
     dem:=dem+1;
     a[3]:=a[3]-1; a[1]:=a[1]-1;
   end;
 while (a[2]>1)  do
   begin
     dem:=dem+1;
     a[2]:=a[2]-2;
   end;
 while (a[2]>0) and (a[1]>1) do
   begin
     dem:=dem+1;
     a[2]:=a[2]-1; a[1]:=a[1]-2;
   end;
 while (a[1]>3)  do
   begin
     dem:=dem+1;
     a[1]:=a[1]-4;
   end;
 while (a[2]>0) and (a[1]>0) do
   begin
     dem:=dem+1;
     a[2]:=a[2]-1; a[1]:=a[1]-1;
   end;
 if a[1]>0 then begin dem:=dem+1; a[1]:=0; end;
 dem:=dem+a[2]+a[3]+a[4];
 write(dem);
end.

