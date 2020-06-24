#include <iostream>

using namespace std;

string st;
int i;

int main()
{
    ios::sync_with_stdio(0);
    getline(cin,st);
    for (i=0;i<=st.size()/2;i++)
        if (st[i] != st[st.length()-1-i])
        {
            cout << "NO";
            return 0;
        }
    cout << "YES";
}