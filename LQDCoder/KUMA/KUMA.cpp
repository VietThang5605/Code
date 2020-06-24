#include <iostream>

using namespace std;

long long m,n,t;

int main()
{
    cin >> m >> n >> t;
    if (m+1 >= n)
    {
        if (m+1 == n) cout << m*t;
        else cout << n*t;
    }
    else 
    {
        cout << (n-(n/(m+1)))*t;
    }
}