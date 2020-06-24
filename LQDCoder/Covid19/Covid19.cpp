#include <iostream>

using namespace std;

long long a[200001];
long long n,i,k,s;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (i=1;i<=k;i++) 
        a[i]=1;
    s=k;
    for (i=k;1<=i && s+a[i] <= n;i--)
        while (s+a[i] <= n) 
        {
            s=s-a[i];
            a[i]*=2;
            s=s+a[i];
        } 
    if (s != n) cout << "NO";
    else 
    {
        cout << "YES" << "\n";
        for (i=1;i<=k;i++)
            cout << a[i] << " ";
    }
}