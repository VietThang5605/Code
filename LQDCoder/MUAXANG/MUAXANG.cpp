#include <iostream>

using namespace std;

int t;
long long k,a,b;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t != 0)
    {
        cin >> k >> a >> b;
        if (a*2 > b)
            cout << k/2*b+(k%2*a) << endl;
        else 
            cout << k*a << endl;
        t--;
    }
}