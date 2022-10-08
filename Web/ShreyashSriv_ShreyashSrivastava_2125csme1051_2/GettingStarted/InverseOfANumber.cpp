#include <bits/stdc++.h>
using namespace std;
int p(int n,int i)
{
	int t=1;
	while(i--)
	{
		t*=n;
	}
	return t;
}
int main()
{
	int t,c=0,a=0;
	cin>>t;
	while(t)
	{
		a=a+((c+1)*p(10,t%10-1));
		t=t/10;
		c++;
	}
	cout<<a;
}