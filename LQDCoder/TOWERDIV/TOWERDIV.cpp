#include <iostream>

using namespace std;

int t,n,m;

int main()
{
    cin >> t;
    while (t != 0)
    {
        cin >> n >> m;
        if (m == 1) cout << 2 << endl;
        else 
            if (n%2 == 0) cout << 2 << endl;
            else cout << 1 << endl;
        t--;
    }
}