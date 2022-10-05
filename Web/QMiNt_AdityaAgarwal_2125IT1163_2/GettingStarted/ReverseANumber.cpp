#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m,n,c=0;
	cin>>n;
	m=n;
	while(m!=0)
	{
        cout<<m%10<<endl;
		m=m/10;
		c++;
	}
}