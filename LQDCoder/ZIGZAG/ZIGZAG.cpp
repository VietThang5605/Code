#include <iostream>
#include <algorithm>

using namespace std;

long long a[1000001],b[1000001];
long long n,i,tong1,tong2;
bool kt;

int main()
{  
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (i=1;i<=n;i++)
    {
        cin >> a[i];
        b[i]=a[i];
    }
    for (i=2;i<=n;i++)
    {
        if (kt==false)
        {
            if (a[i] > a[i-1])
            {
                tong=tong+a[i]-a[i-1]
            }
        }
    }
}
cin>>n;
    FOR(i,1,n)
    {
        cin>h[i];
    }
    h[0]=h[n+1]=oo;
    FOR(i,1,n)
    {
        if(i%2==1) /// chan cao le thap
        {
            int cao=min(h[i-1],h[i+1])-1; /// chieu cao moi cua cot
            res1+= h[i]-cao;
        }
        else ///chan thap le cao
        {
            int cao=min(h[i-1],h[i+1])-1; /// chieu cao moi cua cot
            res2+= h[i]-cao;
        }
    }
    cout<<min(res1,res2);