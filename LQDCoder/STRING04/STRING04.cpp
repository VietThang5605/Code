#include <iostream>
#include <string.h>

using namespace std;

string st;
int i;

int main()
{
    getline(cin,st);
    for (i=st.length()-1;1<=i;i--)
        if ((st[i] == ' ') && (st[i-1] == ' '))
            st.erase(i,1);
    cout << st;
}