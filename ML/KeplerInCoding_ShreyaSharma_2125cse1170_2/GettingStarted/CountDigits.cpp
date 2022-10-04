#include<cstdio>
int main() 
{
	int n;
	scanf("%d",&n);
	int count= 0;
	while(n)
	{
		count++;
		n=n/10;
	}
	printf("%d",count);
	return 0;
}
