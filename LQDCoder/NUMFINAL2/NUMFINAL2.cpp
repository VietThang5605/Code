#include <iostream>
#include <string.h>

using namespace std;

string st;
int a,n,tg;

int main()
{
    cin >> a;
    fflush(stdin);
    cin >> st;
    a=a%10;
    st="0"+st;
    tg=(st[st.length()-2]-'0')*10+(st[st.length()-1]-'0');
    if (tg%4 == 0) cout << (a*a*a*a)%10;
    if (tg%3 == 0) cout << (a*a*a)%10;
    if (tg%2 == 0) cout << (a*a)%10;
    if (tg%1 == 0) cout << a%10;
}