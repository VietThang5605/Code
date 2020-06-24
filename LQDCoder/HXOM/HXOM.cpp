#include <iostream>

using namespace std;

int a,b,c;

int main()
{
    ios::sync_with_stdio(0);
    cin >> a >> b >> c;
    (a%c == b%c) ? cout << "YES": cout << "NO";
}