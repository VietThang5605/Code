def gt(a):
    i=2
    s=1
    while (i <= a):
        s=s*i
        i=i+1
    return s
n = int(input())
if (n%2 != 0) or (n == 0): print(0)
else:
    print(gt(n)//(gt(n/2)*gt(n/2+1)))