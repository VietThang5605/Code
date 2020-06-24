#include <iostream>
#include <algorithm>

using namespace std;

long long a,b,t,tg;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t != 0)
    {
        cin >> a >> b;
        if (a%2 == 0) cout << "SECOND" << "\n";
        else 
            cout << "FIRST" << "\n";
        t--;
    }
}