#include <iostream>

using namespace std;

string st;
int i,a[256],dem;

int main()
{
    getline(cin,st);
    for(i=0;i<st.length();i++)
        a[int(st[i])]++;
    for (i=32;i<=254;i++)
        if (a[i] == 1) dem++;
    cout << dem;
}