#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

int main()
{
	string st1, st2;
	int a,b;
	getline(cin,st1);
	getline(cin, st2);
	a=st1.length();
	b=st2.length();
	cout << abs(a-b);
}