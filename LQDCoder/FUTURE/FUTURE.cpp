#include <iostream>
#include <math.h>

using namespace std;

int n,tg,i,dem,j;

bool snt(int m)
{
    for (int k = 2;k<=int(sqrt(m));k++)
        if (m%k == 0)
            return false;
    return true;
}

bool kt(int a)
{
    bool kt1=false;
    for (j=2;j<=int(sqrt(a));j++)
        if (a%j == 0)
            if (j != a/j)
            {
                if (snt(j) == false)
                    return false;
                else 
                    kt1=true;
                if (snt(a/j) == false)
                    return false;
                else 
                    kt1=true;
            }
            else 
                if (snt(j) == false)
                    return false;
                else 
                    kt1=true;
    return kt1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (i=1;i<=n;i++)
    {
        cin >> tg;
        if (kt(tg) == true) dem++;
    }
    cout << dem;
}