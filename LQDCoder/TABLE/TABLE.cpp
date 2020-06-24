#include <iostream>
#include <math.h>

using namespace std;

int n,i,k;

bool kt(int a)
{
    int dem = 0;
    for (int j = 1;j <= int(sqrt(a));j++)
    {
        if (a%j == 0)
            if (j != a/j) dem+=2;
            else dem++;
        if (dem > k) return false;
    }
    return true;
}

int main()
{
    cin >> n >> k;
    for (i=1;i<=n*n;i++)
    {
        if (kt(i) == true) cout << "*";
        else cout << ".";
        if (i%n == 0) cout << endl;
    }
}