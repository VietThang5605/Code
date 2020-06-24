#include <iostream>

using namespace std;

int a[100001],b[100001];
int t,n,i,s,tg,max1,s2;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t != 0)
    {
        cin >> n;
        cin >> b[1];
        a[1]=b[1];
        s=a[1];
        max1=a[1];
        for (i=2;i<=n;i++)
        {
            cin >> b[i];
            a[i]=b[i];
            if (a[i-1] > 0) a[i]+=a[i-1];
            if (a[i] > s) s=a[i];
        }
        if (s <= 0)
            cout << s << " " << s << "\n";
        else 
        {
            s2=0;
            for (i=1;i<=n;i++)
                if (b[i] > 0) s2+=b[i];
            cout << s2 << " " << s << "\n";
        }
        t--;
    }
}