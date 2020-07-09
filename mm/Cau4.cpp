#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

string st, ans, temp;
long long i, n, dem;

void sub1()
{
    while (st[0] == ' ')
        st.erase(0, 1);
    n = st.length();
    while (st[n - 1] == ' ')
    {
        st.erase(n - 1, 1);
        n--;
    }
    for (i = st.length() - 1; 0 < i; i--)
        if (st[i] == ' ' && st[i - 1] == ' ')
            st.erase(i , 1);
    cout << st << "\n";
}

void sub2_3()
{
    st = st + " ";
    n = st.length();
    for (i = 0; i < n; i++)
        if (st[i] == ' ')
        {
            dem++;
            if (temp.length() > ans.length())
                ans = temp;
            temp = "";
        }
        else 
            temp += st[i];
    cout << ans << "\n" << dem;
}

int main()
{
    freopen("Cau4.inp","r",stdin);
    freopen("Cau4.out","w",stdout);
    getline(cin, st);
    sub1();
    sub2_3();
}