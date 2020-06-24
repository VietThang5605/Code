#include <iostream>

using namespace std;

string s;
long long dem;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    getline(cin,s);
    for(int i=0; i<s.length();i++)
    {
        if (s[i] == '<') 
            dem+=i+1;
        else
            dem+=s.length()-i;
    }
    cout << dem;
}