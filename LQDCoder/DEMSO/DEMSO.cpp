#include <iostream>

using namespace std;

long long a[100001];
long long n,i,t,j; 
bool b[100001];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for (i=2;i*i<=100000;i++)
        if (b[i] == false)
        for (j=i;j<=100000/i;j++)
            if (b[i*j] == false)
                {
                    a[i]++;
                    b[i*j]=true;
                }
    cin >> t;
    while (t != 0)
    {
        cin >> n;
        if (n > 100000) cout << 0 << "\n";
        else 
            cout << a[n]+1 << "\n";
        t--;
    }
}