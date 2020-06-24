#include <iostream>

using namespace std;

long long a,b,c;

int main()
{
    cin >> a >> b >> c;
    if (a == b && b == c)
        cout << "DEU";
    else 
        if (a==b || a==c || b==c)
            cout << "CAN";
        else 
            if (a*a+b*b == c*c || a*a+c*c == b*b || b*b+c*c == a*a)
                cout << "VUONG";
            else 
                cout << "THUONG";

}