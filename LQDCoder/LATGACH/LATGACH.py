t = int(input())
a = []
a.append(1)
a.append(2)
i = 2
while (i <= 99):
    a.append(a[i-1]+a[i-2])
    i+=1
while (t != 0):
    n = int(input())
    print(a[n-1])
    t-=1