#include <iostream>

using namespace std;

int tg,n,i,s,dem;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> s;
    for (i=1;i<=n;i++)
    {
        cin >> tg;
        if ((tg > s) && (tg%s==0)) dem++;
    }
    cout << dem;
}
    