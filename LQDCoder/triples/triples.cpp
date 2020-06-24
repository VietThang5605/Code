#include <iostream>

using namespace std;

int a[4],b[4];
int n,dem1,dem2;

int main()
{
    ios::sync_with_stdio(0);
    cin >> a[1] >> a[2] >> a[3];
    cin >> b[1] >> b[2] >> b[3];
    for (n=1;n<=3;n++)
        if (a[n] > b[n]) dem1++;
        else 
            if (b[n] > a[n]) dem2++;
    cout << dem1 << " " << dem2;
}