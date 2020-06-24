#include <iostream>

using namespace std;

int n,dem;

int main()
{
    cin >> n;
    n=1000-n;
    dem=dem+n/500;
    n=n-n/500*500;
    dem=dem+n/100;
    n=n-n/100*100;
    dem=dem+n/50;
    n=n-n/50*50;
    dem=dem+n/10;
    n=n-n/10*10;
    dem=dem+n/5;
    n=n-n/5*5;
    dem=dem+n/1;
    n=n-n/1;
    cout << dem;
}