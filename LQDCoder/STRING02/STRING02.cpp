#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	string st;
	int dem = 0;
	getline(cin,st);
	for (int i=0;i<st.length();i++)
		if (st[i] == ' ') dem++;
	cout << dem;
}