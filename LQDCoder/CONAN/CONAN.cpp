#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

string st1,st2;
int a[256],b[256];
int i,s;

int main()
{
    getline(cin,st1);
    getline(cin,st2);
    for (i=0;i<st1.length();i++)
        a[int(st1[i])]++;
    for (i=0;i<st2.length();i++)
        b[int(st2[i])]++;
    for (i=32;i<=255;i++)
        s=s+min(a[i],b[i]);
    cout << s;
}