#include <iostream>
#include <string.h>

using namespace std;

string st;
int i,tong;

int main()
{
    getline(cin,st);
    while (st.length() != 1)
    {
        tong=0;
        for (i=0;i<st.length();i++)
            tong=tong+int(st[i])-int('0');
        st=to_string(tong);
    }
    cout << st;
}