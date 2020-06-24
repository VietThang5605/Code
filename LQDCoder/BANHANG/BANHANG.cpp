#include <iostream>
#include <algorithm>

using namespace std;

int a[100001],b[100001];
int i,n,j,mid,k;

void qs(int l,int r)
{
    if (l >= r) return;
    i=l;
    j=r;
    mid=a[(i+j)/2];
    while (i <= j)
    {
        while (a[i] > mid) i++;
        while (mid > a[j]) j--;
        if (i <= j)
        {

            if (a[i] != a[j])
            {
                swap(a[i],a[j]);
                swap(b[i],b[j]);
            }
            else
                if (b[i] > b[j])
                    swap(b[i],b[j]);
            i++;
            j--;
        }
    }
    qs(i,r);
    qs(l,j);
}

int main()
{
    cin >> n >> k;
    for (i=1;i<=n;i++)
    {
        cin >> a[i];
        b[i]=i;
    }
    qs(1,n);
    sort(b+1,b+1+k);
    for (i=1;i<=k;i++)
        cout << b[i] << " ";
}
