#include <iostream>
#include <string.h>

using namespace std;
string st,st2;
int i,k;


int main()
{
    getline(cin,st2);
    k=stoi(st2);
    getline(cin,st);
    while (st.length() != k)
    {
        for (i=0;i<st.length()-1;i++)
            if (st[i] > st[i+1]) break;
        st.erase(i,1);
    }
    cout << st;
}