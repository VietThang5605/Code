#include <iostream>

using namespace std;

long long s,n;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    do
    {
        cin >> n;
        s+=n;
    }while (n != 0);
    cout << s;
}