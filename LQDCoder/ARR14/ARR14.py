n = int(input())
a = [int(x) for x in input().split()]
print(a[0],end=' ')
i = 1
s = a[0]
while (i < len(a)):
    s+=a[i]
    print(s,end=' ')
    i+=1