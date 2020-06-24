#include <iostream>

using namespace std;

long long n,i,tg1 = 1,tg2 = 1,tg3;

int main()
{
    cin >> n;
    n=n%300;
    if ((n == 1) || (n == 2)) cout << 1;
    else 
    {
        for (i=3;i<=n;i++)
        {
            tg3=(tg1+tg2)%100;        
            tg1=tg2%100;
            tg2=tg3%100;
        }
        cout << tg3;
    }
}