#include <iostream>

using namespace std;

int n,i,j;

int main()
{
    cin >> n;
    for (i=1;i<=n;i++)
    {
        for (j=i;j<=i*2-1;j++)
            cout << j << " ";
        cout << "\n";
    }
}