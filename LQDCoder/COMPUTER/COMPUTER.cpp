#include <iostream>
#include <algorithm>

using namespace std;

long long a1,a2,a3,b1,b2,b3,dem,tg;

int main()
{
    cin >> a1 >> a2 >> a3;
    cin >> b1 >> b2 >> b3;
    tg=min(a1,b1);
    dem+=tg;
    a1-=tg;
    b1-=tg;

    tg=min(a1,b3);
    dem+=tg;
    a1-=tg;
    b3-=tg;

    tg=min(a2,b2);
    dem+=tg;
    a2-=tg;
    b2-=tg;

    tg=min(a2,b3);
    dem+=tg;
    a2-=tg;
    b3-=tg;

    tg=min(a3,b1);
    dem+=tg;
    a3-=tg;
    b1-=tg;

    tg=min(a3,b2);
    dem+=tg;
    a3-=tg;
    b2-=tg;

    tg=min(a3,b3);
    dem+=tg;
    a3-=tg;
    b3-=tg;

    cout << dem;
}