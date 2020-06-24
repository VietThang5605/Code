uses    crt;
var     a:array[1..108] of longint;
        b:array[1..108] of string;
        i,n,t: longint;
begin
    clrscr;
    readln(t);
    while i < 108 do
        begin
            a[i+1]:=i+1+11;
            a[i+1+11]:=i+1;
            a[i+6]:=i+6+1;
            a[i+6+1]:=i+6;
            b[i+1]:='WS';
            b[i+1+11]:='WS';
            b[i+6]:='WS';
            b[i+6+1]:='WS';

            a[i+2]:=i+2+9;
            a[i+2+9]:=i+2;
            a[i+5]:=i+5+3;
            a[i+5+3]:=i+5;
            b[i+2]:='MS';
            b[i+2+9]:='MS';
            b[i+5]:='MS';
            b[i+5+3]:='MS';


            a[i+3]:=i+3+7;
            a[i+3+7]:=i+3;
            a[i+4]:=i+4+5;
            a[i+4+5]:=i+4;
            b[i+3]:='AS';
            b[i+3+7]:='AS';
            b[i+4]:='AS';
            b[i+4+5]:='AS';


            i:=i+12;
        end;
    i:=2;
    while t <> 0 do 
        begin
            readln(n);
            writeln(a[n],' ',b[n]);
            dec(t);
        end;
end.