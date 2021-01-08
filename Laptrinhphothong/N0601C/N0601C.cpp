#include <bits/stdc++.h>

using namespace std;

string st;
string a[100005];
int n = 1;

bool cmp(string x, string y)
{
    if (x.size() < y.size())
        return true;
    if (x.size() > y.size())
        return false;
    for (int i = 0 ; i < x.size(); i++)
        if (x[i] < y[i])
            return true;
        else 
            if (x[i] > y[i])
                return false;
    return true;
}

int main()
{
    ios::sync_with_stdio(0);
    cin >> st;
    st += " ";
    for (int i = 0 ; i < st.size(); i++)
        if (st[i] >= '0' && st[i] <= '9')
            a[n] += st[i];
        else
            if (a[n] != "")
            {
                while (a[n][0] == '0' && a[n].size() > 1)
                    a[n].erase(0, 1);
                n++;
            }
    n--;
    sort(a + 1, a + 1 + n, cmp);
    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
}