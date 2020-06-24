#include <iostream>
#include <string.h>

using namespace std;

long long n,s;
string st;

int main()
{
    ios::sync_with_stdio(0);
    cin >> n;
    st=to_string(n);
    cout << st.length() << "\n";
    while (n > 0)
    {
        s+=n%10;
        n=n/10;
    }
    cout << s;
}