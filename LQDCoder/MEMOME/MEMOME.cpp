#include <iostream>

using namespace std;

int a[1001];
int n,i,tg,t;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (i=1;i<=n;i++)
    {
        cin >> tg;
        a[tg]++;
    }
    cin >> t;
    for (i=1;i<=t;i++)
    {
        cin >> tg;
        if (a[tg] != 0) cout << a[tg] << "\n";
        else cout << "NOT PRESENT" << "\n";
    }
}