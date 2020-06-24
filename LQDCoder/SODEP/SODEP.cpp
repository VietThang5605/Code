#include <iostream>

using namespace std;

long long n;

int main()
{
    ios::sync_with_stdio(0);
    cin >> n;
    if (n <= 0) cout << "NO";
    else 
    {
        while (n > 0)
        {
            if (n%10 == 4 || n%10 == 7)
                n/=10;
            else 
            {
                cout << "NO";
                return 0;
            }
        }
        cout << "YES";
    }
}