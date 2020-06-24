#include <iostream>

using namespace std;

long long n,m;

int main()
{
    cin >> n >> m;
    if (n*2 > m) cout << -1;
    else 
        if (n*4 < m) cout << -1;
        else 
            if (m%2 != 0) cout << -1;
            else 
                cout << (n*4-m)/2 << " " << n-(n*4-m)/2;
}
