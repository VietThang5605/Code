#include <iostream>

using namespace std;

string st;
int i, j, dem, max1 = 1, tg;

int main()
{
    ios::sync_with_stdio(0);
    cin >> st;
    for (i = 1; i < st.length(); i++)
    {
        for (j = tg; j < i; j++)
            if (st[i] == st[j])
            {
                tg = j + 1;
                break;
            }
        if (i - tg + 1 > max1)
            max1 = i - tg + 1;
    }
    cout << max1;
}