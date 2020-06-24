#include <iostream>

using namespace std;

long long n,i,tg1 = 1,tg2 =1,tg3;

int main()
{
    cin >> n;
    if (n == 1) {
        cout << 1;
        return 0;
    }
    if (n == 2){
        cout << 1 << " " << 1 << " ";
        return 0;
    }
    cout << 1 << " " << 1 << " ";
    for (i=3;i<=n;i++)
    {
        tg3=tg1+tg2;
        tg1=tg2;
        tg2=tg3;
        cout << tg3 << " ";
    }
}