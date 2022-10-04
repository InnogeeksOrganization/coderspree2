#include <bits/stdc++.h>
using namespace std;
string rotate(string s)
{
	string t;
	t.push_back(s[s.length()-1]);
	for (int i = 0; i < s.length()-1; i++)
	{
		t.push_back(s[i]);
	}
	return t;
}
string revrotate(string s)
{
	string t;
	for (int i = 1; i < s.length(); i++)
	{
		t.push_back(s[i]);
	}
	t.push_back(s[0]);
	return t;
}
int main()
{
	string s;
	int n;
	cin>>s;
	cin>>n;
	if(n<0)
	n=-(abs(n)%s.length());
	else
	n=(abs(n)%s.length());
	if(n<0)
	while(abs(n++))
	{
		s=revrotate(s);
	}
	else
	while(n--)
	{
		s=rotate(s);
	}
	cout<<s;
}