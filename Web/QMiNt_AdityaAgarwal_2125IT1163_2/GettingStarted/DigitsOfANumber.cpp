#include <bits/stdc++.h>
using namespace std;
int power(int n,int i)
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
	int m,n,c=0;
	cin>>n;
	m=n;
	while(m!=0)
	{
		m=m/10;
		c++;
	}
	int j;
	while(--c)
	{
		j=power(10,c);
		cout<<n/j<<endl;
		n=n%j;
	}
	cout<<n;
}