#include <iostream>

using namespace std;

long long a[100001],b[100001];
long long n,i,dem,s,mid,j;


void qsort(int l,int r)
{
    if (l >= r) return;
    i=l;
    j=r;
    mid=a[(l+r)/2];
    while (i <= j)
    {
        while (a[i] < mid) i++;
        while (mid < a[j]) j--;
        if (i <= j)
        {
            swap(a[i],a[j]);
            swap(b[i],b[j]);
            i++;
            j--;
        }
    }
    qsort(i,r);
    qsort(l,j);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> s;
    for (i=1;i<=n;i++)
        cin >> a[i] >> b[i];
    qsort(1,n);
    for (i=1;i<=n;i++)
    {
        if (s >= a[i])
        {
            dem++;
            s=s+b[i];
        }
    }
    cout << dem;
}