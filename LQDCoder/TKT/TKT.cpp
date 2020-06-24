#include <iostream>
#include <string.h>

using namespace std;

string st;
int i,a[123],d;
char ch;

int main()
{
    getline(cin,st);
    for (i=0;i<st.length();i++)
        a[int(st[i])]++;
    for (i=65;i<=122;i++)
        if (a[i] > d)
        {
            d=a[i];
            ch=char(i);
        }
    cout << ch;
}