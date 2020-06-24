#include <iostream>

using namespace std;

long long n,tg=1;

long long pow(long long a,long long b)
{
    if (b == 1) return a;
    long long tam=pow(a,b/2)%20122007;
    if (b%2 == 0)
        return tam*tam%20122007;
    else 
        return ((tam*tam)%20122007*a)%20122007;
}

int main()
{
    cin >> n;
    for (long long i=1;i*i<=n;i++)
        if (n%i == 0)
            if (i != n/i)
            {
                tg=tg*(pow(3,i)-1)%20122007;
                tg=tg*(pow(3,n/i)-1)%20122007;
            }
            else 
                tg=tg*(pow(3,i)-1)%20122007;
    cout << tg;
}