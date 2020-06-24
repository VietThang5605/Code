#include <iostream>

using namespace std;

int d,m,y,dd=25,mm=1,dem=1;

int main()
{
    cin >> d >> m >> y;
    while (dd != d || mm != m)
    {
        dd++;
        dem++;
        if (mm == 2)
        {
            if (dd > 29) 
            {
                dd=1;
                mm++;
            }
        }
        else 
            if (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12)
            {
                if (dd > 31) 
                {
                    dd=1;
                    mm++;
                }
            }
            else 
                if (dd > 30) 
                {
                    dd=1;
                    mm++;
                }
        if (dd == d && mm == m) break;
    }
    cout << dem;
}