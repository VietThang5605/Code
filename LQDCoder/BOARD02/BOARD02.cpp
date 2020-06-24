#include <iostream>

using namespace std;

long long n,m;

long long pow(long long a,long long b)
{
    if (b == 1) return a;
    long long tg=pow(a,b/2)%1000000007;
    if (b%2 == 0) 
        return (tg*tg)%1000000007;
    else 
        return (tg*tg*a)%1000000007;
}

int main()
{  
    cin >> n >> m;
    cout << (int)(pow(2,(n-1)*(m-1)))%1000000007;
}