#include <iostream>

using namespace std;

int a[1000001],b[1000001];
bool c[1000001],kt;
int n,i,dem1,dem2,t,tg,max1,t2;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    t2=t;
    while (t != 0)
    {
        cin >> n;
        for (i=1;i<=n;i++)
        {
            cin >> tg;
            if (tg > max1) max1=tg;
            a[tg]++;
            if (c[tg]==kt)
            {
                b[tg]++;
                if (c[tg]==true) c[tg]=false;
                else c[tg]=true;
            }
        }
        if (kt==true) kt=false;
        else kt=true;
        t--;
    }
    for (i=1;i<=max1;i++)
        if (b[i] == t2) 
            cout << i << " ";
    cout << endl;
    for (i=1;i<=max1;i++)
        if (a[i] > 0)
            cout << i << " ";
}