#include <iostream>
#include <string.h>

using namespace std;

string st1,st2;
int i,t,j,n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    getline(cin,st1);
    t=stoi(st1);
    getline(cin,st2);
    n=st2.length();
    while (t != 0)
    {
        getline(cin,st1);
        j=0;
        for (i=0;i<st1.length();i++)
            if (st1[i] == st2[j]) j++;
        if (j == n) cout << "YES" << endl;
        else cout << "NO" << endl;
        t--;
    }
}