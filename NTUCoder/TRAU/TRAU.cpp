#include<bits/stdc++.h>
using namespace std;
int n,m;
int a=0;
int b=0;
int c=0;
bool check(){
	for(int i=1;i<=(m/5);i++)
	{	
		b=3*m-n-14*i;
		if(b%8==0 && b>0)
		{
			b=b/8;
			c=n-i-b;
			if(c>0 && c%3==0)
			{
				a=i;
				return true;
			}
		}
	}
	return false;
}
int main(){
	cin>>n>>m;
	if(check()==true)	cout<<a<<" "<<b<<" "<<c;
	else cout<<-1;
}