#include <iostream>

using namespace std;

int n;

int main()
{
    cin >> n;
    if (n%7 == 6) cout << n/7*2+1 << " ";
    else 
        cout << n/7*2 << " ";
    if (n%7 > 2) cout << n/7*2+2;
    else cout << n/7*2+n%7;
}