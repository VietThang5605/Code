#include <iostream>
#include <string.h>

using namespace std;

string st,st2,st3;
int dem,i,j;
char ch;

int main()
{
	getline(cin,st);
	for (i=0;i<st.length();i++)
	{
		ch=st[i];
		dem=0;
		for (j=i;j<st.length();j++)
		{
			if (st[i] == st[j]) dem++;
			else break;
		}
		if (dem > 1) st2=st2+to_string(dem)+ch;
		else st2=st2+ch;
		i=j-1;
	}
	cout << st2;
}