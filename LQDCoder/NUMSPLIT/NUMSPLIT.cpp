#include <iostream>
#include <string.h>

using namespace std;

string st;
long long n,t,i;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t != 0)
    {
        st="";
        cin >> n;
        if (n == 0) cout << "10" << endl;
        else 
            if ((n >= 1) && (n <= 9)) cout << 1 << n << endl;
            else 
            {
                for (i=9;2<=i;i--)
                {
                    while (n%i == 0)
                    {
                        n=n/i;
                        st=to_string(i)+st;
                    }
                }
                if (n <= 1) cout << st << endl;
                else cout << -1 << endl;
            }
        t--;
    }
}