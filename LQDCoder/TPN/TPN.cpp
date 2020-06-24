#include <iostream>
#include <math.h>

using namespace std;

long long n,i,dem,s,tg;

int main()
{
    cin >> n;
    for (i=1;dem < n;i++)
    {
        tg=pow(i+1,3)-pow(i,3);
        dem+=tg;
        s+=tg*i;
    }
    s-=(dem-n)*(i-1);
    cout << s;
}