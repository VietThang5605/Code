#include <bits/stdc++.h>

using namespace std;

long long res, n;
long long a[5];
string st;

int main()
{
    ios::sync_with_stdio(0);
    cin >> st;
    n = st.size();
    st = " " + st;
    if (n < 6)
    {
        cout << 0;
        return 0;
    }
    int i = 1, j = 1;
    if (st[j] >= '0' && st[j] <= '9')
            a[1]++;
        else 
            if (st[j] >= 'a' && st[j] <= 'z')
                a[2]++;
            else 
                a[3]++;
    while (j <= n)
    {
        if (a[1] > 0 && a[2] > 0 && a[3] > 0 && j - i + 1 >= 6)
        {
            res += n - j + 1;
            if (st[i] >= '0' && st[i] <= '9')
                a[1]--;
            else 
                if (st[i] >= 'a' && st[i] <= 'z')
                    a[2]--;
                else 
                    a[3]--;
            i++;
        }
        else 
        {
            j++;
            if (j <= n)
                if (st[j] >= '0' && st[j] <= '9')
                    a[1]++;
                else 
                    if (st[j] >= 'a' && st[j] <= 'z')
                        a[2]++;
                    else 
                        a[3]++;
        }
    }
    cout << res;
}