#include <iostream>

using namespace std;

string st;
int i,a,b;

int main()
{
    cin >> a >> b;
    for (i=1;i<=b;i++)
        st=st+'*';
    for (i=1;i<=a;i++)
        cout << st << "\n";
}