#include <iostream>

using namespace std;

long long a[100001],b[100001];
long long i,j,n,k,max1,tong;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for(i=1;i<=n;i++) 
    {
        cin >> a[i];
        a[i] = a[i-1] + a[i];
        tong=a[i]%k;
        if ((tong != 0) && (b[tong] == 0)) b[tong]=i;
    }
    for(i=1;i<=n;i++) 
    {
        tong=a[i]%k;
        if (i-b[tong] > max1) max1=i-b[tong];
    }
    cout << max1;
}