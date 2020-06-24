#include <iostream>
#include <math.h>

using namespace std;

long long n,i;
string st;

int main()
{
    cin >> n;
    for (i=1;i<=n;i++)
        st=st+'*';
    for (i=1;i<=n;i++)
        cout << st << endl;
}