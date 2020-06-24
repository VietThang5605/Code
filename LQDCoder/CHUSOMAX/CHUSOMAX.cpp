#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	string st;
	char max='0';
	getline(cin,st);
	for (int i=0;i<st.length();i++)
		if (st[i] > max) max=st[i];
	cout << max;
}